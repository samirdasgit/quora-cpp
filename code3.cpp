// arithmetic operators
#include <iostream>
int main()
{
  int num1 = 20;
  int num2 = 20;
  // Add
  int sum = num1 + num2;
  std::cout << "Your addition result of Number " << num1 << " and Number " << num2 << " is :" << sum << '\n';
  // Subtraction
  int sub = num1 - num2;
  std::cout << "Your subtraction result of Number " << num1 << " and Number " << num2 << " is :" << sub << '\n';
  // Multiplication
  int mul = num1 * num2;
  std::cout << "Your multiplication result of Number " << num1 << " and Number " << num2 << " is :" << mul << '\n';
  // Division
  int div = num1 / num2;
  std::cout << "Your division result of Number " << num1 << " and Number " << num2 << " is :" << div << '\n';
  // modulus (Showing remains)
  int mod = num1 % num2;
  std::cout << "Your remains result of Number " << num1 << " and Number " << num2 << " is :" << mod << '\n';
}