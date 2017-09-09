//Created By: Dylan Stark
//Created On: 9/8/2017

/*

This program asks the user for inputs of certain types of words, then
outputs those words inside of a mad lib.

*/
 
 #include <iostream> 
 #include <string> //Including string function
 #include <stdio.h>
 using namespace std; 
 
 int main()
 {
     
     string adjective = "exciting"; //declaring the strings and initializing them
     string name = "white";
     string number = "seven";
     string relative = "mother in law";
     string place = "narnia";
     string town = "town";
     string verb = "playing";
     string noun = "den";
     string adjective2 = "funny";
     string adjective3 = "reliable";
     string name2 = "Dale";
     string adjective4 = "happily";
     
     cout << "Enter an Adjective: "; //Entering all of the words and capturing them
     getline (cin, adjective);
     
     cout << "Enter a name: ";
     getline (cin, name);
     
     cout << "Enter a number: ";
     getline (cin, number);
     
     cout << "Enter a relative: ";
     getline (cin, relative);
     
     cout << "Enter a place: ";
     getline (cin, place);
     
     cout << "Enter another place: ";
     getline (cin, town);
     
     cout << "Enter a verb: ";
     getline (cin, verb);
     
     cout << "Enter a noun: ";
     getline (cin, noun);
     
     cout << "Enter another adjective: ";
     getline (cin, adjective2);
     
     cout << "Enter another adjective: ";
     getline (cin, adjective3);
     
     cout << "Enter a name: ";
     getline (cin, name2);
     
     cout << "Enter another adjective: ";
     getline (cin, adjective4);
     cout << endl;
     
     cout << "A new and " << adjective << " fairy princess movie is " << endl;  //Outputting the mad lib
     cout << "coming out soon! It will be about Snow " << name << " and the " << endl;
     cout << number << " Dwarfs. Snow " << name << " is a princess " << endl;
     cout << "whose beauty threatens her " << relative << ", the Queen." << endl;
     cout << "Snow " << name << " is forced to flee from " << place << endl;
     cout << "and hides in nearby " << town << "." << endl;
     cout << "There, she discovers the dwarfs " << verb << " in their " << endl;
     cout << noun << ". " << "But the queen finds her and casts a " << endl;
     cout << adjective2 << " spell on her. The dwarfs take care of her until" << endl;
     cout << "the " << adjective3 << " " << name2 << " comes to rescue her, " << endl;
     cout << "and they all live " << adjective4 << " ever after!" << endl;
     

/* Sample Output

Enter an Adjective: tall
Enter a name: Georgiana
Enter a number: 7
Enter a relative: cousin
Enter a place: Kuzcutopia
Enter another place: Britain
Enter a verb: hammering
Enter a noun: box
Enter another adjective: pernicious
Enter another adjective: lanky
Enter a name: Juniper
Enter another adjective: deep

A new and tall fairy princess movie is 
coming out soon! It will be about Snow Georgiana and the 
7 Dwarfs. Snow Georgiana is a princess 
whose beauty threatens her cousin, the Queen.
Snow Georgiana is forced to flee from Kuzcutopia
and hides in nearby Britain.
There, she discovers the dwarfs hammering in their 
box. But the queen finds her and casts a 
pernicious spell on her. The dwarfs take care of her until
the lanky Juniper comes to rescue her, 
and they all live deep ever after!

*/



 }
