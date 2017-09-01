#include <iostream>
#include <math.h>
using namespace std;


int main () {
   
   double num_years = 0;
   double us_pop = 325770032;
   double growth_constant = 2628000; //growth constant based on on net gain of 1 person per 12 seconds, so 2628000 per year
   double growth_rate = ((growth_constant) / (us_pop)); //growth rate based on on net gain of 1 person per 12 seconds (2628000, the estimated growth in one year, 
                                                       //divided by 325770032, (2628000/325770032) current population, so roughly 0.008)
   
   cout << "How many years into the future do you want to predict? ";
   cin  >> num_years;
   cout << endl;
   
   double change_rate = pow ((1+growth_rate), num_years); //using compund interest formula for more accurate population growth modeling
   double total_pop = (change_rate * us_pop);
   int pop_int = int(total_pop + 0.5); //convert to integer for readability
  
   cout << "The estimated population of the USA " << num_years << " year(s) from 2017 is " << pop_int << ".";
   cout << endl;
   
   // Output is "The estimated population of the USA 99 year(s) from 2017 is 721710874."
   
   return 0;
}