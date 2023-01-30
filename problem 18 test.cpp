#include<iostream>

using namespace std;

int main(){
   
    string checknames,userin;
    int phonenum[30]={100,200,300,400,500,600,700,800,900,100};
    string names[30]={"A","B","C","D","E","F","G","H","I","J"};

    cout << "Enter a name:";
    cin >> userin;
    
    for(int i=0;i<10;i++){
        if (names[i] == userin){
            cout << "Name:" << names[i]<< endl;
            cout << "Phone number:" << phonenum[i];
            
        }else if(i > 10){
            break;
        }
    }

    
    cout << "\nName not Found\n\n";

    for(int x = 10; x < 30; x++){
        cout << "Add Names:";
        cin >> names[x];
        cout << "Add Corresponding Phone number:";
        cin >> phonenum[x];
        if (userin =="0")
        {
            break;
        }
        
    }
}