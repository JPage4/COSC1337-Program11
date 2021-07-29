#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include <string>
class SavingsAccount
{
private:
	static double annualInterestRate;
	double savingsBalance;

public:
	SavingsAccount();
	~SavingsAccount();
	double calculateMonthlyInterest();
	void depositAmount();
	void withdrawAmount();
	static void modifyInterestRate();
	void displayAccount();
};

#endif