#include <iostream>
#include <cstdlib>
#include <istream>

using namespace std;

//ATM Menu

void showMenu() {
	cout << "Welcome to the National University Banking System" << endl;
	cout << "                               " << endl;
	cout << "*****************MENU*****************" << endl;
	cout << "1. Login with numbers assigned 1-9" << endl;
	cout << "2. Check balance" << endl;
	cout << "3. Deposit" << endl;
	cout << "4. Withdraw" << endl;
	cout << "5. Exit" << endl;
	cout << "***************************************" << endl;

}

int main()
{
	//Login, check balance, deposit, withdraw, show menu && exit
	int option;
	double balance = 1000;

	do {
		showMenu();
		cout << "Option: ";
		cin >> option;
		system("cls");

		switch (option)
		{
		case 1:
			cout << "Enter your login number 1-9: " << endl;
			int userNum;
			cin >> userNum;

			if (userNum > 0 && userNum <= 9) {
				cout << "Login successful\n\n";
			}
			else {
				cout << "Invalid Login";

				break;
			}



		case 2:cout << "Balance is: " << balance << "$" << endl; break;
		case 3:cout << "Deposit amount: ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;
		case 4:cout << "Withdraw amount :";
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance)
				balance -= withdrawAmount;
			else
				cout << "Insufficient Funds:" << endl;
			break;
		case 5: exit(1); break;


			
		}
	
	
	
	} while (option != 6);
		cout << "Incorrect entry, please try again: \n";
	system("pause");
}






