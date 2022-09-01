#include <iostream>

int main() {

  int year = 0;
  

  std::cout << "Enter the year:" <<std::endl;
  std::cin >> year;

  

   if (year % 4 != 0) {
  std::cout << "Common year" <<std::endl;
   }
  else if (year % 100 == 0) {
   std::cout << "Leap year" <<std::endl;
  } 
    else if (year % 400 == 0) {
   std::cout << "Common year" <<std::endl;
  } 
else{
std::cout << "Leap year" <<std::endl;
}
    
}
