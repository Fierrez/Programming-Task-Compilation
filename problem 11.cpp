#include <iostream>
using namespace std;

int main (){
    

    for( int x = 2; x <= 100;x++){
        if (x % 2 == 0){
            cout << x << "\t";
        }
        if ( x % 20 == 0 ){
            cout << endl;
        }
        
    }
    return 0;
}