#include<iostream>
using namespace std;



int main (){
    int salesamount,salescode,totalsalseman1,totalsalesman2,totalsalesman3;
    int salesman1[15],salesman2[15],salesman3[15];


    for ( int i=1; i<=15;i++){
        cout << "Enter sales amount and code of salesman:";
        cin >> salesamount;
        cin >> salescode;

        if (salesamount < 1000 || salesamount > 99999 || salescode < 1 || salescode > 3){
            cout << "INVALID ENTRY!\n";
            cout << "Enter sales amount and code of salesman:";
            cin >> salesamount;
            cin >> salescode; 
        }else if(salescode == 1){
            cin >> salesman1[i];

        }else if (salescode == 2){
            cin >> salesman2[i];

        }else if (salescode == 3){
            cin >> salesman2[i];

        }

    }
    for (int c = 0; c < 15; c++)
    {
        totalsalseman1+=salesman1[c];
        totalsalesman2 += salesman2[c];
        totalsalesman3 += salesman3[c];
    }
    
    
    cout << "\t\t\tJCM ENTERPRISES\n";
    cout << "TOTAL SALES FOR THE MONTH OF JULY\n\n";
    cout << "SALESMAN 1:" << totalsalseman1 << endl;
    cout << "SALESMAN 2:" << totalsalesman2 << endl;
    cout << "SALESMAN 3:" << totalsalesman3 << endl;
}