#include <iostream>
#include <cmath>

using namespace std;

int BinaryToDecimal(long long);  /*invoking the function we made.*/

int main()
{
    long long n;    /*To store binary number.*/

    cout << "Enter a binary number: ";
    cin >> n;

    cout << "Binary number: " << n << ", Decimal equivalent: " << BinaryToDecimal(n);
    return 0;
}

int BinaryToDecimal(long long n)
{
    int decimal = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        decimal += remainder*pow(2,i);
        n /= 10;
        ++i;
    }
    return decimal;
}
