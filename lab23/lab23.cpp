//Created By: Dylan Stark
//Created On: 9/29/2017

/*

This program asks the user for two numbers, smallest first, largest second, then 
swaps those two values using the swap function, and then generates a random number
between those two values, and outputs that value to the user.

*/

#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <iostream>
using namespace std;


int Swap (int& r_num, int& r_num2){ //function swaps values of the two variables
    
    int r_num12 = r_num;
    r_num = r_num2;
    r_num2 = r_num12;
    
}


int randNum (int r_num, int r_num2) { // random number generator function

     Swap(r_num, r_num2); //call swap

  if (r_num > r_num2){
      
     
      
      srand (time(NULL));
    int i_secret = 0;
    
    i_secret = r_num - r_num2;

    i_secret = (rand() % i_secret + 1) + r_num2;
   
  return i_secret;
  
  }
  
}


int main ()
{
    int r_num = 0;
    int r_num2 = 0;
    
    
     cout << "What is a random number?(Smallest first): ";
     cin >> r_num;
     cout << "What is a second random number?(Largest): ";
     cin >> r_num2;
     cout << "Random # between " << r_num2 << " and " << r_num << " is: ";
     cout << randNum(r_num, r_num2);
     

}

/*

Running /home/ubuntu/workspace/lab23/lab23.cpp
What is a random number?(Smallest first): 1
What is a second random number?(Largest): 100
Random # between 1 and 100 is: 59

Process exited with code: 0

*/
