//Created By: Dylan Stark
//Created On: 10/16/2017

/*

This program asks the user for numbers of time, and gives a runners fps,mps, and total 
seconds. Then the program calculates the difference between runners times and calculates
the winner.

*/

#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <iostream>
using namespace std;


class Runner {

  public:


double mps_speed (int minutes, int seconds) {
  
    double tot_secs = ((minutes*60)+seconds);
    double mps = 1609.34/tot_secs;
    
    return mps;
  
  
}

double fps_speed (int minutes, int seconds) {
  
    double tot_secs = ((minutes*60)+seconds);
    double fps = 5280/tot_secs;
    
    return fps;
  
  
}

double tot_time (int minutes, int seconds) {
  
    double tot_secs = ((minutes*60)+seconds);
    
    return tot_secs;
  
  
}
};


int main ()
{

    int minutes = 0;
    int seconds = 0;
    int i = 0;
    
    char yn = 'y';
    
    if (yn = 'y'){
        
        cout << "What is the runners' minutes?: ";
        cin >> minutes;
        cout << "What is the runners' seconds?: ";
        cin >> seconds;
        
        Runner runner1;
        
        cout << "Your runners feet per second is: " << runner1.fps_speed(minutes,seconds) << endl;
        cout << "Your runners meters per second is: " << runner1.mps_speed(minutes,seconds) << endl;
        cout << "Your runners total time is in seconds: " << runner1.tot_time(minutes,seconds) << endl;
        
        
           cout << "What is the runners' minutes?: ";
        cin >> minutes;
        cout << "What is the runners' seconds?: ";
        cin >> seconds;
        
        Runner runner2;
        
        cout << "Your runners feet per second is: " << runner2.fps_speed(minutes,seconds) << endl;
        cout << "Your runners meters per second is: " << runner2.mps_speed(minutes,seconds) << endl;
        cout << "Your runners total time is in seconds: " << runner2.tot_time(minutes,seconds) << endl;
        
        if ((runner2.tot_time(minutes,seconds)) > (runner1.tot_time(minutes,seconds))){
        cout << "The winning runner is: " << "Runner 2!" << endl;
        cout << "With a time difference of: " << (runner1.tot_time(minutes,seconds))-(runner2.tot_time(minutes,seconds)) << endl;
        
        }
        
          else ((runner1.tot_time(minutes,seconds)) > (runner2.tot_time(minutes,seconds)));{
              
              int time = (runner2.tot_time(minutes,seconds))-(runner1.tot_time(minutes,seconds));
              
        cout << "The winning runner is: " << "Runner 1!" << endl;
        cout << "With a time difference of: " << time << endl;
        
        }
        
        
    }
    

     

}

/*

Running /home/ubuntu/workspace/Asgn2.0/Asgn20.cpp
What is the runners' minutes?: 10
What is the runners' seconds?: 11
Your runners feet per second is: 8.64157
Your runners meters per second is: 2.63394
Your runners total time is in seconds: 611
What is the runners' minutes?: 12
What is the runners' seconds?: 10
Your runners feet per second is: 7.23288
Your runners meters per second is: 2.20458
Your runners total time is in seconds: 730
The winning runner is: Runner 1!
With a time difference of: 0

*/
