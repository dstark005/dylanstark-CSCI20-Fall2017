//Created By: Dylan Stark
//Created On: 9/15/2017

/*

This program captures information about the takeoff speed and distance to
takeoff speed of a fighter jet. it then calculates the required acceleration
and the time in seconds it takes for the fighter to be accelerated to takeoff 
speed, and outputs that information to the user, and asks the user if they would
like to calculate another.

*/
  #include <iostream>
  #include <math.h>
  using namespace std; 
 
     struct fighter_jet {
        
        double velo;
        double accel;
        double time;
        double dist;
};

int main()
 {



    char yn = '0';

fighter_jet fighter_jet1; //Creating instance for struct fighter_jet

    fighter_jet1.velo = 0.0;
    fighter_jet1.accel = 0.0;
    fighter_jet1.time = 0.0;
    fighter_jet1.dist = 0.0;


    

 

    cout << "Enter Fighter Jet Takeoff Speed: ";
    cin >> fighter_jet1.velo;
    
    cout << "Enter Fighter Jet distance to takeoff speed: ";
    cin >> fighter_jet1.dist;
    
    fighter_jet1.accel = pow(fighter_jet1.velo, 2.0) / (2*fighter_jet1.dist);
    
    fighter_jet1.time = (2*fighter_jet1.dist) / (fighter_jet1.accel);
    fighter_jet1.time = pow(fighter_jet1.time, 0.5);
    

    cout << "Acceleration of fighter jet (m/s^2): " << fighter_jet1.accel << endl;
    cout << "Seconds it takes for fighter to be accelerated to takeoff speed: " << fighter_jet1.time << endl;
    cout << endl << endl;
    cout << "Would you like to calculate another fighter jet? (y/n): ";
    cin >> yn;
    cout << endl;
    

    while (yn = 'y'){
        
    if (yn = 'n'){
        
        break;
        
    }
        
    cout << "Enter Fighter Jet Takeoff Speed: ";
    cin >> fighter_jet1.velo;
    
    cout << "Enter Fighter Jet distance to Takeoff Speed: ";
    cin >> fighter_jet1.dist;
    
    fighter_jet1.accel = pow(fighter_jet1.velo, 2.0) / (2*fighter_jet1.dist); // Acceleration = (Velocity^2/(2*distance))
    
    fighter_jet1.time = (2*fighter_jet1.dist) / (fighter_jet1.accel);
    fighter_jet1.time = pow(fighter_jet1.time, 0.5); // Formula time = ((2s)/(a))^1/2
    

    cout << "Acceleration of fighter jet (m/s^2): " << fighter_jet1.accel << endl; //Output information to user
    cout << "Seconds it takes for fighter to be accelerated to takeoff speed: " << fighter_jet1.time << endl;
    cout << endl << endl;
    cout << "Would you like to calculate another fighter jet? (y/n): ";
    cin >> yn;
    cout << endl;
        
    
    if (yn = 'n'){
        
        break;
        
    }
        
        
        
    }
    
 }
 
 /*
 
 Sample Output:
 
Running /home/ubuntu/workspace/Asgn1.0/Asgn10.cpp

Enter Fighter Jet Takeoff Speed: 278
Enter Fighter Jet distance to takeoff speed: 92
Acceleration of fighter jet (m/s^2): 420.022
Seconds it takes for fighter to be accelerated to takeoff speed: 0.661871


Would you like to calculate another fighter jet? (y/n): n



Process exited with code: 0

*/