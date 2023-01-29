//Getting the average of three numbers
#include <iostream>

using namespace std;

int main(){
    int num1,num2,num3,sum,avg;
    num1=10;
    num2=20;
    num3=45;
    sum=num1+num2+num3;
    avg=sum/3;
    cout << "number 1 = " << num1 << endl;
    cout << "number 2 = " << num2 << endl;
    cout << "number 3 = " << num3 << endl;
    cout << "Average is " << avg << endl;

    return 0;
}