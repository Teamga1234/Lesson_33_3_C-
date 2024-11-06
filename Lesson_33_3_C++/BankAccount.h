#pragma once
#include "BankException.h"

class BankAccount
{
	double balance;
	int accountNumber;
public:
	BankAccount(double balance, int accountNumber) {
		
		this->balance = balance;
		this->accountNumber = accountNumber;
	}
	void deposit(double amount) {
		if (amount <= 0)throw new InvalidAmountException("Enter number > 0 ");
		this->balance += amount;
	}
	void withdraw(double amount) {
		if (amount > balance)throw new InvalidAmountException("Not enough money on balance");
		balance -= amount;
	}
	double getBalance() const {
		return balance;
	}
};

