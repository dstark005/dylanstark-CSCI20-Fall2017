//Created By: Dylan Stark
//Created On: 10/02/2017

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


int Swap (int& r_num, int& r_num2){ //This function takes two values, swaps them, then outputs that number.
    
    int r_num12 = r_num;
    r_num = r_num2;
    r_num2 = r_num12;
    
}


int randNum (int r_num, int r_num2) { // takes two numbers, generates a random number between them, then outputs that number.

     Swap(r_num, r_num2); //call swap

  if (r_num > r_num2){
      
     
      
    srand (time(NULL));
    int i_secret = 0;
    
    i_secret = r_num - r_num2;

    i_secret = (rand() % i_secret + 1) + r_num2;
   
  return i_secret;
  
  }
  
}

double PoundsToKg (double kilograms){
    
    double pounds = 0;
    
    return kilograms / 0.453592;
    
}

double KgToPounds (double plounds){
    

    
    return plounds / 2.20462;
    
}


int main ()
{
    int r_num = 0;
    int r_num2 = 0;
    double kilograms = 0.0;
    double pounds = 0.0;
    
    
     cout << "What is a random number?(Smallest first): ";
     cin >> r_num;
     cout << "What is a second random number?(Largest): ";
     cin >> r_num2;
     cout << "Your kg value between " << r_num2 << " and " << r_num << " is: ";
     
     double ran_num = randNum(r_num, r_num2);
     
     cout << ran_num << endl;
     
     cout << "Which is  " << PoundsToKg (ran_num) << " Lbs" << endl;
     cout << "Which is  " << KgToPounds (PoundsToKg (ran_num)) << " Lbs";
     

}

/*

Running /home/ubuntu/workspace/lab23/lab23.cpp
What is a random number?(Smallest first): 1
What is a second random number?(Largest): 100
Random # between 1 and 100 is: 59

Process exited with code: 0

*/
