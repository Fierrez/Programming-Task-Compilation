#include <iostream>
using namespace std;

int main(){
    float cel,fahr;
    cout << "\t\tCentigrade to Fahrenheit Converter \n\n";
    cout << "Enter temperature in Celsius: ";
    cin >> cel;

    fahr = (cel * 1.8) + 32;
    cout << cel <<"° Centigrade is equivalet to "<< fahr << " Fahrenheit\n\n" ;

    return 0;
}