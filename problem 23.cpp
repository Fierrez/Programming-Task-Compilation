#include <iostream>
using namespace std;

int main(){
    int num, i, largest, smallest;    

    cout << "Enter 10 numbers"<< endl;
    
    for(i = 0; i < 10; i++){
        cout << "Enter number " << i+1 << ":";
        cin >> num;
        
        if(num > largest){

            largest = num;
        }
        if(num < smallest){

            smallest = num;
        }
    
    }

    cout << "The largest number is " << largest << endl;
    cout << "The smallest number is " << smallest << endl;

    return 0;
}