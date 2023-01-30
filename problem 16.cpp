#include<iostream>
#include <string>
using namespace std;

    int idnumber[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    string lastname[20]={"AA1","BB2", "CC3", "DD4", "EE5", "FF6", "GG7", "HH8", "II9", "JJ10", "KK11", "LL12", "MM13", "NN14","OO15", "PP16", "QQ17", "RR18", "SS19", "TT20"};
    int userin;

int main(){
    
    
    cout << "\nEnter ID number:";
    cin >> userin;
    for(int i=0;i <20; i++){
        if(userin ==idnumber[i]){
            cout << "Last name:" << lastname[i]<< endl;
            
        }
    }
    
}