#include<iostream>
using namespace std;

int main(){
    double oldslry,curslry,newslry,payincrs,retroactivepay;

    cout << "What is your old salary:";
    cin >> oldslry ;

    payincrs = oldslry * 0.1775;
    newslry= oldslry + payincrs;
    retroactivepay=newslry * 2;
    
    cout << "Your old salary is " << oldslry << endl;
    cout << "Your new salary is " << newslry << endl;
    cout << "The amount of retroactive pay is "<< retroactivepay << endl;
    
    return 0;

}