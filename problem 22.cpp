#include <iostream>
using namespace std;

int main()
{
  
    int num, result;
    
    
    cout << "Enter an integer: ";
    cin>>num;
    
    //check if prime
    for (int i = 1; i <= num; i++){

        if (num % i == 0)
        {
           result++;
        }
    }

    if (result == 2){

       cout << num << " is a Prime number." << endl;

    }else{

         cout << num <<" is not a Prime number." << endl; 
    }


    return 0;    
}