// Learning C++

// # represents directives for preprocessor
// this tells preproc to include iostream standard fillStyle
// iostream includes declaration of basic standard input-output library
#include <iostream>
#include <string>

//all elements are declared n namespace
// must state we are using this namespace to access functionality
using namespace std;

// where program starts, no matter where other functions are
int main() {
  // represents a statement
  // inserts  a stream of characters into output stream
  string mystring = "Hello World";
  cout << mystring;

  int n;
  cout << "Enter a number";
  cin >> n;

  while (n > 0) {
    cout << n << ", ";
    --n;
  }

  // causes main function to finish
  return 0;
}
