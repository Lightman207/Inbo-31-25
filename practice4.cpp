#include <iostream>
#include <string>
#include <cmath>

int main()
{
  // Практика 4
  
  int circle = 109;
  long v, t;
  std::cout << "Enter the speed first, and then the time \n";
  std::cin >> v >> t;
  std::cout << "He stopped at the marks: " << (v*t) % 109;
}
