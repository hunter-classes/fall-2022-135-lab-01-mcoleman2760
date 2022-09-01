/*
Author: Michael Coleman
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1D
  */
#include <iostream>

int main() {

  int year = 0;
  int month = 0;
  bool leap = false;

  std::cout << "Enter the year:" <<std::endl;
  std::cin >> year;
  std::cout << "Enter the month:" <<std::endl;
  std::cin >> month;

  

   
   if ((year % 100 == 0)  || (year % 4 == 0)){
   leap = true; 
  } 
   if ((month % 2 == 0) && (month != 2)) {
   std::cout << "30 days" <<std::endl;
  } 
   else if ((leap == true ) && (month == 2)) {
     std::cout << "29 days" <<std::endl;
     }
    
        
     else if ((leap == false) && (month == 2)) {
     std::cout << "28 days" <<std::endl;
}
  
  else{
    std::cout << "31 days" <<std::endl;
  }
    
}
