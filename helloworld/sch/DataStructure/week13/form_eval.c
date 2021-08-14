#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct TreeNode
{
	element data;
	struct TreeNode *left, *right;
} TreeNode;

TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, NULL, NULL};
TreeNode n3 = {'*', &n1, &n2};
TreeNode n4 = {16, NULL, NULL};
TreeNode n5 = {25, NULL, NULL};
TreeNode n6 = {'+', &n4, &n5};
TreeNode n7 = {'+', &n3, &n6};
TreeNode *tree = &n7;

int eveluate(TreeNode *root)
{
	if (root == NULL)
		return 0;

	if (root->left == NULL && root->right == NULL)
		return root->data;
	else
	{
		int op1 = eveluate(root->left);
		int op2 = eveluate(root->right);
		printf("%d %c %d를 계산합니다.\n", op1, root->data, op2);
		switch (root->data)
		{
		case '+':
			return op1 + op2;
		case '-':
			return op1 - op2;
		case '*':
			return op1 * op2;
		case '/':
			return op1 / op2;
		}
	}
	return 0;
}

int main()
{
	printf("수식의 값은 %d입니다. \n", eveluate(tree));
}
