#include <iostream>
using namespace std;




int main(){
    int i,x,temp,j=1,asordes;
    int number[20],ascendorder[20],descendorder[20],origorder[20];
    cout << "Enter 20 number"<< endl;

    for (i = 0; i < 20; i++)
    {
        cout << "Enter number " << i+1 << ":";
        cin >> number[i];
    }

	//Prevent lost of original number array sorting
    for(i=0;i<20;i++){
        origorder[i]=number[i];
    }

	//pick ascending or descending order
	cout << "Would you like to sort it in ascending or descending order" << endl;
	cout << "\"A\" for ascending order and \" D\" for descending order:";
	cin >> asordes;

	if (asordes =='A')
	{
		 //ascending order
    	for(i=0;i<20;i++){

			for(j=i+1;j<20;j++){

				if(number[i]>number[j]){
					
					temp =number[i];
					number[i]=number[j];
					number[j]=temp;
                
				}
			}
		}
	}else{
		//descending order
    	for(i=0;i<20;i++)
		{		
			for(j=i+1;j<20;j++)
			{
				if(number[i] < number[j])
				{
					temp =number[i];
					number[i]=number[j];
					number[j]=temp;
                
				}
			}
		}

	}

    cout << "\tOriginal Order\t\t Sorted Order" << endl;
    for(int i = 0; i < 20; i++){
        
        cout << "\t\t" << origorder[i] <<"\t\t\t" <<number[i] << endl;
    }
	
    return 0;
}