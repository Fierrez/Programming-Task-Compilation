#include <iostream>
using namespace std;

int main(){
    int num, largest=0, smallest=0;

    cout << "Enter 10 numbers " << endl;

    for(int x = 0; x < 10; x++){
        
        cout << "Enter number " << x+1 << ":";
        cin >> num;
        
        if(num > largest)
        {
            largest = num;
        }
        if(num < smallest)
        {
            smallest = num;
        }
        
    }
    cout << "The largest number is "<< largest << endl;
    cout << "The smallest number is " << smallest << endl;

    return 0;
}   