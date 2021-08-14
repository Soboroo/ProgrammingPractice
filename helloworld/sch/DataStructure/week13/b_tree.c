#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct TreeNode
{
	element data;
	struct TreeNode *left, *right;
} TreeNode;

TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, &n1, NULL};
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = {20, &n3, &n4};
TreeNode n6 = {15, &n2, &n5};
TreeNode *root = &n6;

void preorder(TreeNode *root)
{
	if (root != NULL)
	{
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
	else
		return;
}

void inorder(TreeNode *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
	else
		return;
}

void postorder(TreeNode *root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->data);
	}
	else
		return;
}

int main()
{
	printf("중위 순회: ");
	inorder(root);
	printf("\n");

	printf("전위 순회: ");
	preorder(root);
	printf("\n");

	printf("후위 순회: ");
	postorder(root);
	printf("\n");
}