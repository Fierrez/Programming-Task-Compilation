#include<iostream>
using namespace std;

int main(){
    int NSATscore,salary,examscore;
    int average = (NSATscore+examscore)/2;
    
    cout << "Enter NSAT score:";
    cin >> NSATscore;
    cout << "Enter the monthly salary of your parents:";
    cin >> salary;
    cout << "Enter your entrance examination score:";
    cin >> examscore;

    if (NSATscore < 90 || salary > 10000 || examscore < 85){
        cout << "\t\t Rejected" << endl;
    }else if(salary <= 3500 || average > 91){
        cout << "\t\t Accepted" << endl;
    }else{
        cout << "\t Need to further study the application" << endl ;
    }   
    
    return 0;
}