//Created By: Dylan Stark
//Created On: 9/9/2017

/*

This program captures stock data from the user and uses it to display
information about the stock and calculates the total value of the stock owned.
It also asks the user if they would like to enter another stock. If user chooses yes
the program will run again and calculate the new total of the portfolio.

*/
  #include <iostream> 
  using namespace std; 
 
     struct stock_port {
        
        string name;
        char sector;
        double share_price;
        int owned;
};
 
 

 
 int main()
 {



    char yn = '0';
    double total_portfolio = 0.0;

stock_port stock1; //Creating variable for struct stock_port

    stock1.name = "0";
    stock1.sector = '0';
    stock1.share_price = 0.0;
    stock1.owned = 0;
    
stock_port stock2; //Obj2

    stock2.name = "0";
    stock2.sector = '0';
    stock2.share_price = 0.0;
    stock2.owned = 0;
    
stock_port stock3; //Obj3

    stock3.name = "0";
    stock3.sector = '0';
    stock3.share_price = 0.0;
    stock3.owned = 0;
    
stock_port stock4; //Obj4

    stock4.name = "0";
    stock4.sector = '0';
    stock4.share_price = 0.0;
    stock4.owned = 0;

    

 

    cout << "Enter Stock Information: "; //Information must be entered with space betweeen to properly capture variables
    cin >> stock1.name;
    cin >> stock1.sector;
    cin >> stock1.share_price;
    cin >> stock1.owned;
    cout << endl;
    
    cout << "Name:" << " Stock Sector:" << " Stock Price:" << " Stock Owned:" << " Total Value:" << endl; // Displaying information and calculating total value
    cout << stock1.name << "     " << stock1.sector << "       " << stock1.share_price << "         " << stock1.owned << "       " << (stock1.share_price * stock1.owned) << endl;
    cout << endl;
    
    total_portfolio = (stock1.share_price * stock1.owned); //Portfolio output starts at 0, then goes up with each stock inputted
    
    cout << "Total Portfolio: " << total_portfolio << endl;
    cout << endl << endl;
    cout << "Would you like to calculate another stock into portfolio? (y/n): ";
    cin >> yn;
    cout << endl;
    
    while (yn = 'y'){
        
        
    cout << "Enter Stock Information: "; //Information must be entered with space betweeen to properly capture variables
    cin >> stock1.name;
    cin >> stock1.sector;
    cin >> stock1.share_price;
    cin >> stock1.owned;
    cout << endl;
    
    cout << "Name:" << " Stock Sector:" << " Stock Price:" << " Stock Owned:" << " Total Value:" << endl; // Displaying information and calculating total value
    cout << stock1.name << "     " << stock1.sector << "       " << stock1.share_price << "         " << stock1.owned << "       " << (stock1.share_price * stock1.owned) << endl;
    cout << endl;
    
    total_portfolio = total_portfolio + (stock1.share_price * stock1.owned); //Portfolio output starts at 0, then goes up with each stock inputted
    
    cout << "Total Portfolio: " << total_portfolio << endl;
    cout << endl << endl;
    cout << "Would you like to calculate another stock into portfolio? (y/n): ";
    cin >> yn;
    cout << endl;
    
    if (yn = 'n'){
        
        break;
        
    }
        
        
        
    }
    
 }
 
 /*
 
 Portfolio output starts at 0, then goes up with each stock inputted
 
 Sample Output:
 
 Enter Stock Information: FordM A 18.76 87

Name: Stock Sector: Stock Price: Stock Owned: Total Value:
FordM     A       18.76         87       1632.12

Total Portfolio: 1632.12


Would you like to calculate another stock into portfolio? (y/n): y

Enter Stock Information: Albertsn C 34.39 542

Name: Stock Sector: Stock Price: Stock Owned: Total Value:
Albertsn     C       34.39         542       18639.4

Total Portfolio: 20271.5


Would you like to calculate another stock into portfolio? (y/n): n



Process exited with code: 0

*/