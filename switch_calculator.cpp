#include<iostream> 
using namespace std;
int main ()
{
  char oper = '+';
  float num1 = 8, num2 = 3;
  cout << "Number 1 = " << num1 << endl;
  cout << "Number 2 = " << num2 << endl;
  cout << "operator = " << oper << endl;
  cout << "result: ";
  switch (oper)
    {
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
    default:

      cout << "Error! The operator is not correct";
      break;
    }

  return 0;
}
