// Exercise 5.11 Solution: ex05_11.cpp
// Find the smallest of several integers.
#include <iostream>
using namespace std; 

int main() {
   unsigned int number{0}; // number of values
   int value{0}; // current value
   int smallest{100000}; // smallest value so far

    cout << "Enter the number of integers to be processed followed by the integers: ";
    cin >> number;


   // loop (number -1) times
   for (unsigned int i{1}; i <= number; ++i) {

      cin >> value; // read in next value

      // if current value less than smallest, update smallest
      if (value < smallest) {
         smallest = value;
      }
   }

   // display smallest integer 
   cout << "\nThe smallest integer is: " << smallest << endl;
} 


/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
