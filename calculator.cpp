// Simple calculator program

#include <iostream>
using namespace std;

int solve(int num1, int num2, char oper){
  // Input
  cin >> num1 >> oper >> num2;

  switch(oper) {
    case '+':
      cout << "Answer: "<< num1 + num2 << endl << endl;
      break;
    case '-':
      cout << "Answer: "<< num1 - num2 << endl << endl;
      break;
    case '*':
      cout << "Answer: "<< num1 * num2 << endl << endl;
      break;
    case '/':
      cout << "Answer: "<< num1 / num2 << endl << endl;
      break;
    default:
      cout << "Incorrect operation! Try again!" << endl << endl;
      break;
  }
}


int main() {
  // Declare variables
  int num1, num2;
  char oper;

    // Output
    cout << "Welcome to calculator!" << endl;
    cout << "To perform operations, use +, -, *, or / and hit enter." << endl;
    cout << "Enter input: ";

    solve(num1, num2, oper);

  return 0;
}
