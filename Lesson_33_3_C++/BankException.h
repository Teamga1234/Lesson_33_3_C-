#pragma once
#include <exception>
#include<string>
class BankException
{
protected:
	std::string text;
public:
	BankException() {
		text = "undefined exception";
	}
	BankException(std::string text) {
		this->text = text;
	}
	virtual std::string showMessage() const = 0;
};

class InvalidAmountException : public BankException {
public:
	InvalidAmountException(std::string text) : BankException(text){}
	std::string showMessage()const override{
		return "NameException: " + text ;
	}

};
class InsufficientFundsException : public BankException {
public:
	InsufficientFundsException(std::string text) : BankException(text) {}
	std::string showMessage()const override {
		return "NameException: " + text;
	}

};

