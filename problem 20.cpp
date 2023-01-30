#include <iostream>
using namespace std;

int main(){
    int num[4];
    float sum, average;

    for(int i = 0; i < 5; i++){
        cout << "Enter a number: ";
        cin >> num[i];
        sum += num[i]; 
    }
    average= sum / 5;
    
    cout << "The average of the set of integer is " << average;


    return 0;
}