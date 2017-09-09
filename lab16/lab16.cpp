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
 
 int main()
 {

    struct stock_port {
        
        string name;
        char sector;
        double share_price;
        int owned;
};

    char yn = '0';
    double total_portfolio = 0.0;

stock_port stock1; //Creating variable for struct stock_port

    stock1.name = "0";
    stock1.sector = '0';
    stock1.share_price = 0.0;
    stock1.owned = 0;
    

 

    cout << "Enter Stock Information: "; //Information must be entered with space betweeen to properly capture variables
    cin >> stock1.name;
    cin >> stock1.sector;
    cin >> stock1.share_price;
    cin >> stock1.owned;
    cout << endl;
    
    cout << "Name:" << " Stock Sector:" << " Stock Price:" << " Stock Owned:" << " Total Value:" << endl; // Displaying information and calculating total value
    cout << stock1.name << "     " << stock1.sector << "       " << stock1.share_price << "         " << stock1.owned << "       " << (stock1.share_price * stock1.owned) << endl;
    cout << endl;
    
    total_portfolio = (stock1.share_price * stock1.owned);
    
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
    
    total_portfolio = total_portfolio + (stock1.share_price * stock1.owned);
    
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