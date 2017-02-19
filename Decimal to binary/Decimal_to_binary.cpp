#include <iostream>
#include <cmath>
using namespace std;

long long DecimalToBinary(int);

int main()
{
    int n;  /*n->decimal, binary->binary number*/

    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "Decimal: " << n << ", Binary equivalent: " << DecimalToBinary(n) << endl ;
    return 0;
}

long long DecimalToBinary(int n)
{
    long long binary = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binary += remainder*i;
        i *= 10;
    }
    return binary;
}
