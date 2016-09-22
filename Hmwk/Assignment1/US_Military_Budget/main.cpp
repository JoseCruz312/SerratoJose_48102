/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on August 29, 2016, 9:41 AM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT = 100;
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float mBud = .6e12f;
    float fBud = 3.95e12f;
    int mPer;
    //Input values
    mPer = mBud / fBud * PERCENT;
    //Process values -> Map inputs to Outputs
    cout << "The Military Budget for 2016 = $" << mBud << endl;
    cout << "The Federal Budeget for 2016 = $" << fBud << endl;
    cout << "The Percentage spent on the Military is = " << mPer << "%" << endl;
    //Display Output

    //Exit Program
    return 0;
}