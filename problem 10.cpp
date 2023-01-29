#include<iostream>
using namespace std;

int main (){
    float num[9];
    float largest,smallest,x;
    cout << "Please Enter 10 number:\n";

    for ( int x = 0 ; x <= 9; x++ ){
        
        cout << "Enter number " << x+1 << ":";
        cin >> num[x];
    }
     //find largest
    for (int x=1;x < 9; x++){
        
        if (num[0] < num[x])
            num[0] = num[x];
            largest = num[0];
    }
     //find smallest
    for (int x=1;x < 9; x++){
        
        if (num[0] > num[x])
            num[0] = num[x];
            smallest = num[0];
    }
    cout << "The largest number is "<< largest << endl;
    cout << "The smallest number is " << smallest << endl;

    return 0;
}   