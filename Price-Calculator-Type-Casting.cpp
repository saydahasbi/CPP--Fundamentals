#include <iostream>
#include <iomanip> // Needed for fixed and setprecision
using namespace std;

int main() {
    double price1, price2, price3;

    // Input 3 item prices
    cout << "Enter price for Item 1: ";
    cin >> price1;
    cout << "Enter price for Item 2: ";
    cin >> price2;
    cout << "Enter price for Item 3: ";
    cin >> price3;

    // Calculate Total and Average
    double total = price1 + price2 + price3;
    double average = total / 3;

    // Display results in double format (2 decimal places)
    cout << fixed << setprecision(2);
    cout << "\n--- DOUBLE FORMAT ---" << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    // Display results in integer format (using casting)
    cout << "\n--- INTEGER FORMAT (CASTING) ---" << endl;
    cout << "Total: " << (int)total << endl;
    cout << "Average: " << (int)average << endl;

    return 0;
}