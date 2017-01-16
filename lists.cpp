// Linked Lists
// Why? Changeable length and efficient insertion/removal
// finding an element in linked list is O(n)

// To compile run 'g++ lists.cpp -o main'
// To execute: './main'

#include <iostream>
#include <string>
using namespace std;

struct Node {
  int data;
  // *next - pointer to next node
  Node *next;
};

// First node
void init (struct Node*head, int n) {
  head->data = n;
  head->next = NULL;
}

// Add a node to end of list
void addNode (struct Node *head, int n) {
  Node *newNode = new Node;
  newNode->data = n;
  newNode->next = NULL;

  Node *current = head;
  while(current) {
    if(current->next == NULL) {
      current->next = newNode;
      return;
    }
    current = current->next;
  }
}

// Print to console
void display(struct Node *head) {
  Node*list = head;
  while(list) {
    cout << list->data , " ";
    list = list->next;
  }
  // add spaces to output
  cout << endl;
  cout << endl;
}

// Run program
int main() {
  struct Node *newHead;
  struct Node *head = new Node;
  init(head,10);
  display(head);
}
