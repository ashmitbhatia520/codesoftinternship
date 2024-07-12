#include <iostream>
using namespace std;
int main() {
  double a;
  double b;
  cout << "enter first number:";
  cin >> a;
  cout << "enter second number:";
  cin >> b;
  char op;
  cout << "enter the operator +,-,*,/:";
  cin >> op;
  switch (op) {
  case '+':
    cout << "the addition of a and b is : " << a + b;
    break;
  case '-':
    cout << "the subraction of a and b is : " << a - b;
    break;
  case '*':
    cout << "the multiplication of a and b is : " << a * b;
    break;
  case '/':
    cout << "the division of a and b is : " << a / b;
    break;
  default:
    cout << "invalid operator";
    break;
  }
  return 0;
}
