#include <iostream>
using namespace std;

int main () {
   int us_pop = 325770032;
   int pop_add = 2628000; //additional population per year based on net gain of 1 person per 12 seconds
   int num_years = 0;
   
   cout << "How many years into the future do you want to predict? ";
   cin  >> num_years;
   cout << endl;

   cout << "The estimated population of the USA in " << num_years << " years from 2017 is " << ((num_years * pop_add) + us_pop) >> "." >>;
   cout << endl;
   
   return 0;
}