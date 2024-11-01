Chatgpt'd one part and one part only and that is 
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
I got frustrated.
