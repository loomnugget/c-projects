// Linked Lists
// Why? Changeable length and efficient insertion/removal
// finding an element in linked list is O(n)

#include <iostream>
#include <string>
using namespace std;

struct node {
  int x;
  // *next - pointer to next node
  node *next;
};

int main() {
  // represents the first node
  node *root;
  root = new node;
  root->next = 0;

  root->x = 5;
}
