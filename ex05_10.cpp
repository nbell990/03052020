// Exercise 5.10: Printing.cpp
#include <iostream>
using namespace std;

int main() {
   for (int i{1}; i <= 10; i++) {
      for (int j{1}; j <= 5; j++) {
         cout << '@';
      }

      cout << '&';
   } 
}