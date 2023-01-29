#include <iostream>
using namespace std;

int main(){
    int savingbal=20000,amount;
    

    while ( amount != 0){

        cout << "Enter the amount to withdraw or deposit (Enter 0 to exit):";
        cin >> amount;
        cout << endl;
        

        //withdraw   
        if (savingbal + amount < 0){
            
            cout << "\n\t\t  INSUFFICIENT FUNDS!" << endl;

        }else if(amount < 0){
            //put (-) to amount so that it wouldn't add
            savingbal -= -amount;

        //deposit        
        }else if (amount > 0 ){
            
            savingbal += amount;
        
        }

        cout << "\t\tOutstanding balance:" << savingbal << endl<< endl;    
    }
        
        
}
    


