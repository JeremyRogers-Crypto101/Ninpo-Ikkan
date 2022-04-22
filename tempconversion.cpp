/* A program that calculates celsius from 
fahrenheit and vice versa*/

#include <iostream>
#include <iomanip>
using namespace std;




void main()
{
    double temp, temp1;
    char choice;
    cout << "Enter the temperature in either fahrenheit or celsius" << endl;
    cin >> temp;
    cout << "Enter your choice of C for celsius or F for fahrenheit" << endl;
    cin >> choice;

    if (choice == 'f' || choice == 'F') {
        temp1 = 5.0 / 9.0 * (temp - 32);
        cout << "Temperature in Celsius is: " << temp1 << endl;

    }
    else if (choice == 'c' || choice == 'C') {
        temp1 = 9.0 / 5.0 * (temp + 32);
        cout << "Temperature in Fahrenheit is: " << temp1 << endl;
    }

    else {
        cout << "Invallid choice\n";
        exit(0);
    }



    system("pause");
}

