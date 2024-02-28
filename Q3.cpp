#include <iostream>
using namespace std;

bool isPalindrome(int , int, int )

int main() {
    int num, reverseNum = 0;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num, reverseNum, num))
        cout << num << " is a palindrome number.";
    else
        cout << num << " is not a palindrome number.";

    return 0;
}

bool isPalindrome(int num, int &reverseNum, int originalNum) {
    if (num == 0)
        return true;

    if (!isPalindrome(num / 10, reverseNum, originalNum))
        return false;

    int digit = num % 10;
    reverseNum = reverseNum * 10 + digit;

    return (num == originalNum);
}