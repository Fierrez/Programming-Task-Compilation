#include<iostream>
using namespace std;

int main(){
    float servicecharge=0.12,salestax=0.07,extra,change,grossbill,amountgiven,customernetbill;
    
    cout << "Gross bill of the customer:";
    cin >> grossbill;
    cout << "Amount given by the customer:";
    cin >> amountgiven;
    extra=grossbill * (servicecharge+salestax);
    customernetbill=extra + grossbill;
    change=amountgiven-customernetbill;

    cout << "costumer's net bill:"<< customernetbill <<endl;
    cout << "Change:" << change << endl;

    return 0;
}