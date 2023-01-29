#include<iostream>
using namespace std;

int main (){
    int w,x,y,z;

    cout << "Enter value for w :" << endl;
    cin >> w;
    cout << "Enter value for x :" << endl;
    cin >> x;
    cout << "Enter value for y :" << endl;
    cin >> y;
    cout << "Enter value for z :" << endl;
    cin >> z;

    x=w;y=x;z=y;w=z;
    cout << x << w << y << z;
    return 0;
}