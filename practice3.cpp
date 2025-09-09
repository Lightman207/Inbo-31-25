#include <iostream>
#include <string>
#include <cmath>

int main()
{
  std::cout << "Enter the number A and then B \n";
  long a, b;
  std::cin >> a >> b;
  std::cout << "The hypotenuse of a right triangle: " << std::sqrt(a*a + b*b);
}
