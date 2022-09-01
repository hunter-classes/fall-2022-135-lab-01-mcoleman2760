/*
Author: Michael Coleman
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1B
  */

#include <iostream>

int main() {

  int num1 = 0;
  int num2 = 0;
  int num3 = 0;

  std::cout << "Enter the first number" <<std::endl;
  std::cin >> num1;
std::cout << "Enter the second number" <<std::endl;
  std::cin >> num2;
std::cout << "Enter the third number" <<std::endl;
  std::cin >> num3;
  

   if (num1 < num2) {
  std::cout << "The smaller of the three is " << num1 <<std::endl;
   }
  else if ((num2 < num1) && (num2 < num3)) {
   std::cout << "The smaller of the three is " << num2 <<std::endl; 
  } 
else{
std::cout << "The smaller of the three is " << num3 <<std::endl; 
}
    
}
