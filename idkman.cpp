#include <iostream>

double balance = 0;
double deposit;
double withdraw;
int choice;
bool menu = true;

int main() {
	while (choice != 4) {
		std::cout << "Welcome to G bank " << '\n' << '\n';
		std::cout << "=====Menu=====" << '\n';
		std::cout << "1. Check balance " << '\n';
		std::cout << "2. Deposit money " << '\n';
		std::cout << "3. Withdraw money " << '\n';
		std::cout << "4. Exit " << '\n' << '\n';

		std::cin >> choice;
		if (choice == 1) {
			std::cout << "You have the current balance of: $" << balance << '\n';

		}
		else if (choice == 2) {
			std::cout << "How much would you like to deposit?" << '\n';
			std::cin >> deposit;
			balance += deposit;
			std::cout << "$" << deposit << " has been added to your balance! ";


		}
		else if (choice == 3) {
			
			if (balance <= 0) {
				std::cout << "Cannot withdraw. Your balance is zero or negative.\n";
			}
			else {
				std::cout << "How much money would you like to withdraw?" << '\n';
				std::cin >> withdraw;

				if (withdraw > balance) {
					std::cout << "Insufficient funds! You cannot withdraw more than your current balance of $" << balance << '\n';
				}
				else {
					balance -= withdraw;
					std::cout << "You withdrew $" << withdraw << '\n';
				}
			}
		}
		
		else if (balance <= 0) {
			std::cout << "Can't withdraw";

		}
		
		
		else if (choice == 4) {
			std::cout << "Exiting this program good bye!";
		}
	}
}