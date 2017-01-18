// Binary Trees
#include <iostream>
using namespace std;

struct Node {
  int value;
  node *left;
  node *right;
}

// Tree Class
class BinaryTree {
  public:
    BinaryTree(); // Constructor
    ~BinaryTree(); // Destructor
    void destroy(); // Tree must be deleted after program has finished
    void insert(int key);
    node *search(int key);

  private:
    void destroy(node *leaf);
    void insert(int key, node *leaf);
    node *search(int key, node *leaf);
    node *root;
}

// Constructor
BinaryTree::BinaryTree() {
  root = NULL;
}

// Destructor
BinaryTree::~BinaryTree() {
  destroy();
}

// Delete Tree - deleted each node from the bottom up
void BinaryTree::destroy(node *leaf){
  if(leaf!=NULL){
    destroy(leaf->left);
    destroy(leaf->right);
    delete leaf;
  }
}

// Insert Leaf at a Specific Position
void BinaryTree::insert(int key, node *leaf){
  if (key < leaf-->value){
    if (leaf->left!=NULL)
      insert(key, leaf->left);
    else {
      leaf->left = new Node;
      leaf->left->value=key
      // Set left and right child nodes of left node to null
      leaf->left->left=NULL;
      leaf->left->right=NULL;
    }
  }
  else if(key>=leaf->value){
    if(leaf->right!=NULL)
    insert(key, leaf->right);
    else{
      leaf->right = new Node;
      leaf->right->value=key
      leaf->right->left=NULL;
      leaf->right->right=NULL;
    }
  }
}
