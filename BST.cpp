// Rasul Amani
// 811901038
#include <iostream>
using namespace std;

struct Node {
  int key; 
  Node* left; 
  Node* right; 
};

Node* newNode(int key) {

  Node* node = new Node();
  node->key = key;
  node->left = NULL;
  node->right = NULL;
  return node;
}


Node* insertRec(Node* root, int key) {

  if (root == NULL) {
    return newNode(key);
  }

  if (key < root->key) {
    root->left = insertRec(root->left, key);
  }

  else if (key > root->key) {
    root->right = insertRec(root->right, key);
  }

  return root;
}


Node* insert(Node* root, int key) {
  return insertRec(root, key);
}


bool search(Node* root, int key) {
  if (root == NULL) {
    return false;
  }

  if (root->key == key) {
    return true;
  }

  if (key < root->key) {
    return search(root->left, key);
  }

  else {
    return search(root->right, key);
  }
}


int main() {

    


    return 0;
}

