#include <iostream>
using namespace std;

bool isPrime(int, int )
void printPrimesInRange(int, int)

int main() {
    cout << "Prime numbers between 1 and 50 are: ";
    printPrimesInRange(1, 50);
    return 0;
}
bool isPrime(int n, int i = 2) {
    if (n <= 2)
        return (n == 2) ? true : false;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    
    return isPrime(n, i + 1);
}

void printPrimesInRange(int start, int end) {
    if (start > end)
        return;
    
    if (isPrime(start))
        cout << start << " ";
    
    printPrimesInRange(start + 1, end);
}