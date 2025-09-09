#include <iostream>
#include <string>
#include <cmath>

int main()
{
  // Практика 5
    
  long long sec;
  std::cout << "Enter the number of seconds \n";
  std::cin >> sec;
    
  int h = sec / 3600;
  int m = (sec % 3600) / 60;
  int s = sec % 60;
  std::cout << h << ":";
  if (m < 10) std::cout << "0";
  std::cout << m << ":";
  if (s < 10) std::cout << "0";
  std::cout << s;
}
