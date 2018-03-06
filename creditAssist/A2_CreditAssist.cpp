//Name: MD Abir A. Choudhury
//CIS 3100: HW A2 - Credit Assist
//Date: 02/08/18

#include <iostream>
#include <iomanip>

using namespace std;

int main () 
{
	//input
	int income = 0; //monthly income
	cout << "What is your montly income? \n";
	cin >> income;

	int debt = 0; //total debt
	cout << "What is your total debt? \n";
	cin >> debt;

	int minPay = 0; //monthly min pay for debt
	cout << "What is your monthly minimum payment for the debt? \n";
	cin >> minPay;

	//processing
	double credit = 0.0; // Declare credit
	credit = (income - minPay) * 0.3;

	//output
	if (debt > income * 6){
		cout << "The loan amount cannot be granted. \n";
	}

	else {
		cout << "We can allow up to 30% of that amount as a loan. \n";
		cout << "The applicant can be approved for upto $" << setprecision(5) << credit << ". \n";
	}

	system("PAUSE");
	return 0;
}