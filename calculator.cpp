// Simple calculator program

#include <iostream>
#include <cmath>
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
    cout << "\nIncorrect operation! Try again!";
    break;
  }
}


int main() {

  // Declare variables
  int num1, num2;
  char oper;

  // Output
  cout << "Welcome to calculator!" << endl;
  cout << "To perform operations: select +, -, *, or /." << endl;
  cout << "To clear: select 'c'." << endl;
  cout << "To quit: select 'q'." << endl << endl;
  cout << "Enter input: ";

  solve(num1, num2, oper);
}
