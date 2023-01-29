//Output greatest value using conditional :? operator
#include <iostream>
using namespace std;

int main(){
    int num1,num2,num3,highest,higher,higher1,temp;
    
    num1=10;
    num2=23;
    num3=5;
    cout << "number 1 = " << num1 <<endl;
    cout << "number 2 = " << num2 <<endl;
    cout << "number 3 = " << num3 <<endl;

    highest = (num1 > num2) ? num1 :num2;
    highest =  (highest > num3 ) ? highest: num3;
  

    cout << "The highest number is " << highest << endl;


    return 0;
}