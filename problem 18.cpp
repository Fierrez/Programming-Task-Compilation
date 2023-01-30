#include<iostream>

using namespace std;

int currentlist=10;
string checknames,userin;
int phonenum[30]={100,200,300,400,500,600,700,800,900,100};
string names[30]={"A","B","C","D","E","F","G","H","I","J"};

int main(){

    while (userin != "0") {
        cout << "Enter a name to search (or 0 to exit): ";
        cin >> userin;
            for(int i=0; i < 32;i++){
                if (names[i] == userin){

                    cout << "Name:" << names[i]<< endl;
                    cout << "Phone number:" << phonenum[i]<< endl << endl;
                    break;
                         
                }else if (i + currentlist == 31){
                    if (userin == "0") {
                        break;
                    }       

                    cout << "\nName not found in the list.\n\n";

                    cout << "Add a new name:";
                    cin >> names[currentlist];
                    cout << "Add corresponding phone number:";
                    cin >> phonenum[currentlist];
                    
                    currentlist++;
                }    
            }
    }
    /*while (userin != "0"){  
               

        
        cout<< "\nName not found on the list.\n";
    }*/

}