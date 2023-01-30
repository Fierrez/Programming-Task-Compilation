#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int salesman1_sales = 0, salesman2_sales = 0, salesman3_sales = 0;
    int total_sales = 0;
    int highest_sales = 0;
    int highest_salesman=0;

    // Input sales amount and salesman code for 15 sales transactions
    for (int i = 0; i < 15; i++) {
        int sales_amount, salesman_code;
        cout << "Enter the sales amount and salesman code for sale #" << i+1 << ": ";
        cin >> sales_amount >> salesman_code;

        // check if invalid
        while (sales_amount < 1000 || sales_amount > 99999 || salesman_code < 1 || salesman_code > 3) {
            cout << "INVALID ENTRY!" << endl;
            cout << "Enter the sales amount and salesman code for sale #" << i+1 << ": ";
            cin >> sales_amount >> salesman_code;
        }

        // Update the sales totals for the corresponding salesman
        if (salesman_code == 1) {
            salesman1_sales += sales_amount;
        } else if (salesman_code == 2) {
            salesman2_sales += sales_amount;
        } else if (salesman_code == 3) {
            salesman3_sales += sales_amount;
        }

        // Update the total sales for the month
        total_sales += sales_amount;

        if(salesman1_sales >salesman2_sales && salesman1_sales > salesman3_sales){
            highest_salesman = 1;
        }else if(salesman2_sales > salesman1_sales && salesman2_sales > salesman3_sales){
            highest_salesman = 2;

        }else{
            highest_salesman = 3;
        }

        /*// Update the highest sales and salesman number if necessary
        if (sales_amount > highest_sales) {
            highest_sales = sales_amount;
            highest_salesman = salesman_code;
        }*/
    }

    // Output the results
    cout << fixed << setprecision(2);
    cout << "JMC ENTERPRISES" << endl;
    cout << "TOTAL SALES FOR THE MONTH OF JULY" << endl;
    cout << endl;
    cout << "SALESMAN 1: $" << salesman1_sales << endl;
    cout << "SALESMAN 2: $" << salesman2_sales << endl;
    cout << "SALESMAN 3: $" << salesman3_sales << endl;
    cout << "-------------------------" << endl;
    cout << "TOTAL: $" << total_sales << endl;
    cout << endl;
    cout << "SALESMAN WITH THE HIGHEST SALES: " << highest_salesman << endl;

 
    return 0;
}