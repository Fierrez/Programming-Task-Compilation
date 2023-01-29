#include<iostream>
using namespace std;

int main(){
    int sum,average;
    int x=0;
    int i=0;
    int num[4];
   
    while (x < 5)
    {
        cout << "Enter number " << x+1 << ":" << endl;
        cin >> num[x];
        sum += num[x];
        x++;
    }average=sum/5;

    cout << "The sum is " << sum << endl;
    cout << "The average is " << average;
    
    return 0;
}