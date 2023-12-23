#include <iostream>
#include <vector>
using namespace std;

class node {
public:
  int val;
  node *left;
  node *right;
  node(int val) {
    this->val = val;
    left = NULL;
    right = NULL;
  }
};

class tree {
public:
  node *root;
  tree() { root = NULL; }
  void insert(int val) {
    node *n = new node(val);
    if (root == NULL) {
      root = n;
      return;
    }
    node *temp = root;
    while (temp != NULL) {
      if (val < temp->val) {
        if (temp->left == NULL) {
          temp->left = n;
          return;
        }
        temp = temp->left;
      } else {
        if (temp->right == NULL) {
          temp->right = n;
          return;
        }
        temp = temp->right;
      }
    }
  }
  void print(node *n) {
    if (n == NULL)
      return;
    print(n->left);
    cout << n->val << " ";
    print(n->right);
  }
};

int main() {
  int k, h, q;
  cin >> k >> h >> q;
}