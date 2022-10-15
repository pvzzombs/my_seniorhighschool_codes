#include <iostream>

//using namespace std;

int main()
{

  int a;
  int b;

  std::cout << "Relational Sequence of a Number" << std::endl;
  std::cout << "-------------------------------" << std::endl;
  std::cout << "Input first number: ";
  std::cin >> a;
  std::cout << "Input second number: ";
  std::cin >> b;
  std::cout << "-------------------------------" << std::endl;

  if(a > b){
    std::cout << a << " is greater than " << b << std::endl;
  }else if(a < b){
    std::cout << a << " is less than " << b << std::endl;
  }else {
    std::cout << a << " is equal to " << b << std::endl;
  }
  return 0;
}
