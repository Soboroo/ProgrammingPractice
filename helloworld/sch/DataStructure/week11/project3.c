#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EXPR_SIZE 100
typedef int element;

typedef struct
{
	element data[EXPR_SIZE];
	int top;
} StackType;

void init_stack(StackType *s)
{
	s->top = -1;
}

int is_empty(StackType *s)
{
	return (s->top == -1);
}

int is_full(StackType *s)
{
	return (s->top == (EXPR_SIZE - 1));
}

void push(StackType *s, element item)
{
	if (is_full(s))
	{
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
		s->data[++(s->top)] = item;
}

element pop(StackType *s)
{
	if (is_empty(s))
	{
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
		return s->data[(s->top)--];
}

element peek(StackType *s)
{
	if (is_empty(s))
	{
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
		return s->data[s->top];
}

int check_matching(const char *in)
{
	StackType s;
	char ch, open_ch;
	int i, n = strlen(in);
	init_stack(&s);

	for (i = 0; i < n; i++)
	{
		ch = in[i];
		switch (ch)
		{
		case '(':
		case '[':
		case '{':
			push(&s, ch);
			break;
		case ')':
		case ']':
		case '}':
			if (is_empty(&s))
				return 0;
			else
			{
				open_ch = pop(&s);
				if ((open_ch == '(' && ch != ')') ||
						(open_ch == '[' && ch != ']') ||
						(open_ch == '{' && ch != '}'))
					return 0;
				break;
			}
		}
	}
	return is_empty(&s);
}

int prec(char op)
{
	switch (op)
	{
	case '(':
	case ')':
		return 0;
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
	}
	return -1;
}

void infix_to_postfix(char exp[], char postfix[])
{
	int i = 0, p = 0;
	char ch, top_op;
	int len = strlen(exp);
	StackType s;

	init_stack(&s);
	for (i = 0; i < len; i++)
	{
		ch = (exp[i]);
		switch (ch)
		{
		case '+':
		case '-':
		case '*':
		case '/':
			while (!is_empty(&s) && (prec(ch) <= prec(peek(&s))))
				postfix[p++] = pop(&s);
			push(&s, ch);
			break;
		case '(':
			push(&s, ch);
			break;
		case ')':
			top_op = pop(&s);
			while (top_op != '(')
			{
				postfix[p++] = top_op;
				top_op = pop(&s);
			}
			break;
		default:
			do
				postfix[p++] = exp[i++];
			while (exp[i] >= '0' && exp[i] <= '9');
			postfix[p++] = ' ';
			i--;
			break;
		}
	}
	while (!is_empty(&s))
		postfix[p++] = pop(&s);

	postfix[p] = '\0';
}

int eval(char exp[])
{
	int op1, op2, value, p = 0, i = 0;
	int len = strlen(exp);
	char ch, inttemp[12];
	StackType s;
	init_stack(&s);

	for (i = 0; i < len; i++)
	{
		if (ch == ' ')
			continue;
		ch = exp[i];
		if (ch != '+' && ch != '-' && ch != '*' && ch != '/')
		{
			for (p = 0; exp[i] != ' ';)
				inttemp[p++] = exp[i++];
			inttemp[p] = '\0';
			push(&s, atoi(inttemp));
		}
		else
		{
			op2 = pop(&s);
			op1 = pop(&s);
			switch (ch)
			{
			case '+':
				push(&s, op1 + op2);
				break;
			case '-':
				push(&s, op1 - op2);
				break;
			case '*':
				push(&s, op1 * op2);
				break;
			case '/':
				push(&s, op1 / op2);
				break;
			}
		}
	}
	return pop(&s);
}

int main()
{
	int result;
	char input[EXPR_SIZE];
	char postfix[EXPR_SIZE];

	while (1)
	{
		printf("계산할 수식을 입력하세요: ");
		fgets(input, EXPR_SIZE - 1, stdin);
		input[strlen(input) - 1] = '\0';

		if (!check_matching(input))
		{
			printf("수식이 잘못되었습니다.\n\n");
			continue;
		}

		infix_to_postfix(input, postfix);
		printf("후위 표기식 : %s\n", postfix);

		result = eval(postfix);
		printf("연산 결과 => %d\n\n", result);
	}
}