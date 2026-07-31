#include <iostream>
#include <cstdlib>
#include <ctime>

double sell(double balance) {
    const double marketPrice = 50.0;
    char currency = '$';

    std::cout << "Item Market Value: " << currency << marketPrice << "\n\n";

    double askingPrice;
    std::cout << "Set your asking price: ";
    std::cin >> askingPrice;

    // Buyer AI
    int chance = rand() % 100; // 0-99

    bool buy = false;

    if (askingPrice <= 40) {
        buy = true;
    }
    else if (askingPrice <= 60) {
        buy = (chance < 70);
    }
    else if (askingPrice <= 80) {
        buy = (chance < 30);
    }
    else {
        buy = false;
    }

    if (buy) {
        std::cout << "\nBuyer: That's a fair deal. I'll take it!\n";
        balance += askingPrice;
        std::cout << "System: Transaction completed.\n";
    }
    else {
        if (askingPrice > marketPrice + 20)
            std::cout << "\nBuyer: That's way too expensive.\n";
        else
            std::cout << "\nBuyer: I'll pass for now.\n";

        std::cout << "System: Transaction failed.\n";
    }

    return balance;
}

int main() {
    srand(time(nullptr));

    double balance = 0;

    balance = sell(balance);

    std::cout << "\nBalance: $" << balance << '\n';

    return 0;
}