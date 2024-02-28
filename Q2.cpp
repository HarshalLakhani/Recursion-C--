#include <iostream>
using namespace std;

int sumOfDigits(int)
bool isMagic(int)

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isMagic(num))
        cout << num << " is a magic number.";
    else
        cout << num << " is not a magic number.";
    return 0;
}
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

bool isMagic(int n) {
    if (n == 1)
        return true;
    if (n < 10)
        return false;
    return isMagic(sumOfDigits(n) + n);
}