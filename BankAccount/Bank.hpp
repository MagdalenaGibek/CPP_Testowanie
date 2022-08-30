#pragma once

class BankAccount
{
public:
	BankAccount();
	bool withdraw(int amount);
	void deposit(int amount);
	int getAvaiableFounds() const;
private:
	int accountBalance;
};