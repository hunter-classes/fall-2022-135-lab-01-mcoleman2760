
/*
Author: Michael Coleman
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1
  */

#include <iostream>

int main() {

  int num1 = 0;
  int num2 = 0;

  std::cout << "Enter the first number" <<std::endl;
  std::cin >> num1;
  std::cout << "Enter the second number" <<std::endl;
  std::cin >> num2;

   if (num1 < num2) {
  std::cout << "The smaller of the two is " << num1 <<std::endl;
   }
  else {
   std::cout << "The smaller of the two is " << num2 <<std::endl; 
  } 
    
}
