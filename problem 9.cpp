#include<iostream>
using namespace std;

int main (){
    int height,age;
    char citizenship,recommendee;

    cout << "\t\nApplication to Jedi Knight Military Academy\n\n";
    cout << "Please answer the following\n";
    cout << "Height:";
    cin >> height;
    cout << "Age:";
    cin >> age;
    cout << "\nEnter \"C\" if you are a citizen of the Planet Endor \"N\" if you are not" << endl;
    cout << "Citizenship:";
    cin >> citizenship;
    cout << "\nEnter \"R\" if you are a recommendee of Jedi Master Obi Wan \"N\" if you are not"<< endl;
    cout << "Recommendee:";
    cin >> recommendee;

    if (recommendee == 'R'){
        cout << "\t\t Accepted" << endl;
    }else if( citizenship == 'C' && age > 21  && age < 25 && height >= 200){
        cout << "\t\t Accepted" << endl;
    }else{
        cout << "\t\t Rejected"<< endl;
    }

    return 0;
}
