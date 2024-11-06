#include "BankAccount.h"
#include <iostream>

int main()
{
	BankAccount a(1000, 2);
	
	try
	{
		
		a.deposit(-100);
	}
	catch (BankException* obj)
	{
		std::cout << obj->showMessage() << std::endl; delete obj;
	}
	try
	{

		a.withdraw(1400);
	}
	catch (BankException* obj)
	{
		std::cout << obj->showMessage() << std::endl; delete obj;
	}
}