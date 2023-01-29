#include <iostream>
using namespace std;

int main(){
    double grosspay,wholding,rate,hpr,hours,netpay;

    cout << "Enter your hourly pay rate:";
    cin >> hpr;
    cout << "Enter hours worked:";
    cin >> hours;

     grosspay=hpr*hours;

    if(grosspay <= 2000){
        rate=grosspay*0.10;
        wholding=10; 
        netpay=grosspay-rate;
    }
    if(grosspay >= 2001 &&  grosspay <= 4000){
        
        rate=grosspay*0.12;
        wholding=12; 
        netpay=grosspay-rate;
    }
    if(grosspay >= 4001 && grosspay <= 10000){
       rate=grosspay*0.15;
       wholding=15; 
        netpay=grosspay-rate;
    }
    if(grosspay > 10001 ){
        rate=grosspay*0.20;
        wholding=20; 
        netpay=grosspay-rate;
    
    }
    cout << "Your grosspay is " << grosspay << endl;
    cout << "Your withholding tax is " << wholding <<"%" << endl;
    cout << "Your rate is " << rate << endl;
    cout << "Your salary is " << netpay <<  endl;

    return 0;
}