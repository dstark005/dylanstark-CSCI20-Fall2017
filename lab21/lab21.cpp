//Created By: Dylan Stark
//Created On: 9/19/2017

/*

This program captures information about the temperature and wind speed, and 
calculates wind chill factor with the old formula and the new formula, then displays 
this information with a table, the wind speed, old formula, new formula, and the 
difference of the values.

*/
 
  #include <iostream>
  #include <math.h>
  #include <iomanip>
  using namespace std; 
 

int main()
 {
     
     


    // Column Ouput from http://www.cplusplus.com/forum/beginner/181119/, modified for project
    double wspeed = 0.0 ;
    double old_formula = 0.0 ;
    double new_formula = 0.0 ;
    double difference = 0.0 ;
    double temp = 0.0;
    
    cout << "What is the Temp(f)? ";
    cin >> temp;
    
    cout << "What is the windspeed(mph)? ";
    cin >> wspeed;
    
    old_formula = 0.081*(3.71*(sqrt(wspeed)) + 5.81 - 0.25 * wspeed)*(temp - 91.4) + 91.4;
    
    new_formula = 35.74 + 0.6215 * temp - 35.75*(pow(wspeed, 0.16)) + 0.4275 * temp *(pow(wspeed, 0.16));
    
    difference = old_formula - new_formula;
    
    cout << '\n';

    
    // values for controlling format
    const int name_width = 15 ;
    const int int_width = 7 ;
    const int dbl_width = 12 ;
    const int num_flds = 7 ;
    const string sep = " |" ;
    const int total_width = name_width + int_width + dbl_width*2.7 + sep.size() * num_flds ;
    const string line = sep + string( total_width-1, '-' ) + '|' ;

    cout << line << '\n' << sep
              << setw(name_width) << "Wind Speed" << sep << setw(name_width) << "Old Formula" << sep
              << setw(name_width) << "New Formula" << sep << setw(name_width) << "Difference" << sep << endl;
    for( int i = 0 ; i < 3 ; ++i )
    {
        cout << sep << setw(name_width) << wspeed << sep << setw(name_width) << old_formula << sep
                  << setw(name_width) << new_formula << sep << setw(name_width) << difference << sep
                  << fixed << setprecision(2) << '\n' ;
    }
    cout << line << '\n' ;

    
 }
 
 /*
 
 Sample Output:

Running /home/ubuntu/workspace/lab21/lab21.cpp
What is the Temp(f)? 30
What is the windspeed(mph)? 4

 |-------------------------------------------------------------------|
 |     Wind Speed |    Old Formula |    New Formula |     Difference |
 |              4 |        30.5753 |         25.767 |         4.8083 |
 |           4.00 |          30.58 |          25.77 |           4.81 |
 |           4.00 |          30.58 |          25.77 |           4.81 |
 |-------------------------------------------------------------------| 

*/