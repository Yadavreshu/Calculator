#include<iostream>
using namespace std;

int main() {

  float num1, num2;
  char n;

  cout << "Enter 1st  number:- "<<endl;
  cin >> num1;


  cout << "Enter operator: +, -, *, /: ";
  cin >> n;

  cout << "Enter 2nd number:- "<<endl;
  cin>>num2;

  switch(n) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;
  }

  return 0;
}
