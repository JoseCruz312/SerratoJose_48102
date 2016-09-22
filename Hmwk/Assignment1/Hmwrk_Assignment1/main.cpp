/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 6, 2016, 11:34 AM
 */

// Include system level libraries
#include <iostream> //Input/Output Libararies
using namespace std; //Libraries compiled under standard name space

//User Libraries

//Global Constants

const char PERCENT = 100; //Conversion to percentage

//Functional Prototypes 

//Program execution begins here!
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nShares = 750;  //Number of Shares
    float ppShare = 3.5e1f;     //Price per share in $'s
    unsigned char comish = 2;       //Commission percentage
    float pricePd, comshPd, totPaid; //Price, commission, total paid $'s
    
    //Calculate the amount paid in $'s
    pricePd = nShares * ppShare;
    comshPd = pricePd * comish/PERCENT;
    totPaid = pricePd + comshPd;
    
    //Output the results
    cout << "Price of Stock Purchase Problem" << endl;
    cout << "Number of Shares purchase = " << nShares << endl;
    cout << "Price per share = $" << ppShare << endl;
    cout << "Commission = " << static_cast<int>(comish) << "%" << endl;
    cout << "Price paid for the shares = $" << pricePd << endl;
    cout << "Price paid in commission  = $  " << comshPd << endl;
    cout << "Total paid                = $" << totPaid << endl;
    
    
    return 0;
}

