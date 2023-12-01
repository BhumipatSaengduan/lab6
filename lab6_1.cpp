#include<iostream>
using namespace std;

int main() {
    int n;
    int even = 0, odd = 0;
    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0) {
        if (n % 2 == 0) {
            even += 1;
        }
        else {
            odd += 1;
        }
        cout << "Enter an integer: ";
        cin >> n;
    }

    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
