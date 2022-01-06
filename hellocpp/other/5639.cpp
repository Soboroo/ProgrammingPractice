#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
  Node() {}
  Node(int data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

void tree_insert(Node &node, int target) {
  if (node.data < target) {
    if (node.right == NULL) {
      node.right = new Node(target);
      return;
    }
    tree_insert(*node.right, target);
  } else {
    if (node.left == NULL) {
      node.left = new Node(target);
      return;
    }
    tree_insert(*node.left, target);
  }
}

void post_order(Node &node) {
  if (node.left)
    post_order(*node.left);
  if (node.right)
    post_order(*node.right);
  cout << node.data << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int root;
  cin >> root;
  Node rootNode(root);
  while (true) {
    int n;
    cin >> n;
    if (cin.eof())
      break;
    tree_insert(rootNode, n);
  }
  post_order(rootNode);
}

/*
input:
50
30
24
5
28
45
98
52
60

output:
5
28
24
45
30
60
52
98
50
*/