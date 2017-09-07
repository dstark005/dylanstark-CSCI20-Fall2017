//Created By: Dylan Stark
//Created On: 9/6/2017
/* Description: This is a program that calculates the number of each denomination of coin
type, including quarters, dimes, nickels and pennies into calculation, given the number of cents. 
The program uses a while loop, if, and else if statements to count the denominations of coins. Then
the program calculates the value of a 10.9 percent fee, and outputs the values.
*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


int main () {
   
   int num_nickels = 0; // Initializing and declaring variables
   int num_dimes = 0;
   int num_quarters = 0;
   int num_pennies = 0;
   double total_dollars = 0.0;
   double cash_out = 0.0;
   int num_cents = 0;
   
   cout << "How many cents did you put in? ";
   cin  >> num_cents;
   cout << endl;

while (num_cents > 0) { // This loop continues until there are no more cents, calculating the denominations.

if (num_cents >= 25) {  
  
   num_quarters = (num_cents / 25);
   num_cents = (num_cents % 25);
   
}
   
else if ( num_cents >= 10) {
   
   num_dimes = (num_cents / 10);
   num_cents = (num_cents % 10);
   
   
}

else if ( num_cents >= 5) {

      num_nickels = (num_cents / 5);
      num_cents = (num_cents % 5);

}

else if (num_cents >= 1) {

      num_pennies = (num_cents / 1);
      num_cents = (num_cents % 1);

}
}
                        
    cout << "The number of quarters put in is " << num_quarters << endl; //Output denomination values
    cout << "The number of dimes put in is " << num_dimes << endl;
    cout << "The number of nickels put in is " << num_nickels << endl;
    cout << "The number of pennies put in is " << num_pennies << endl;

total_dollars = (num_quarters * 0.25) + (num_dimes* 0.10) + (num_nickels * 0.05) + (num_pennies * 0.01);

cout << "The total amount of dollars you have put in is: " << total_dollars << endl;
cout << "You will be charged a 10.9 percent fee. The total you will recieve is: " << setprecision(2) << fixed << (total_dollars * 0.891) << " dollar(s) and cent(s)." << endl; // Rounding to correct fee
cout << "The fee charged was: " << setprecision(2) << fixed << (total_dollars * 0.109) << " dollar(s) and cent(s)." << endl;

   /*
   
   Output for 99 cents.
    
    How many cents did you put in? 99

    The number of quarters put in is 3
    The number of dimes put in is 2
    The number of nickels put in is 0
    The number of pennies put in is 4
    The total amount of dollars you have put in is: 0.99
    You will be charged a 10.9 percent fee. The total you will recieve is: 0.88 dollar(s) and cent(s).
    The fee charged was: 0.11 dollar(s) and cent(s).
   
   
   */
   
   
   
   
   return 0;
}