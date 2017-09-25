//Created By: Dylan Stark
//Created On: 9/25/2017

/*

This program generates a random number between 0 and 100, in a function, and then
calls the function to print the random number.

*/

#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <iostream>
using namespace std;

int rand_num () { // random number generator function

   
  srand (time(NULL));
  int iSecret = 0;

  iSecret = rand() % 99 + 1;
   
  return iSecret;
}


int main ()
{
     cout << rand_num(); //call and cout function

}

/*

Sample Output:

98

*/
