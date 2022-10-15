#include <iostream>
//using namespace std;
int main(){
  int a;
  int b;
  int sum;

  std::cout << "Get the sum of two numbers" << std::endl;
  std::cout << "First Number: ";
  std::cin >> a;
  std::cout << "Second Number: ";
  std::cin >> b;
  sum = a + b;
  std::cout << "The sum of two numbers: " << sum << std::endl;
  return 0;
}
