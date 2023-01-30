#include <iostream>
using namespace std;

int main(){
    string userin,displayname;
    string names[20];
    string phonenum[20];
    int count=0;
    
   while (count < 20 ){
        
        cout << "Enter a name (Enter \"zzz\" to quit):";
        cin >> names[count];

        if(names[count] == "zzz"){
            break;
        }

        cout << "Enter phone number:";
        cin >> phonenum[count]; 

    count++;    
    }
    cout << "\nYou entered " << count << " names.\n";

    cout << "Names:";
    for(int i=0; count > i; i++){
        cout << names[i] << ", ";
    }
    cout << "\n\nEnter name to display the corresponding phone number:";
    cin >> displayname;
    for (int i=0; count > i; i++){
        if(displayname == names[i]){
            cout << "Phone number:" << phonenum[i];
        }
    }
}