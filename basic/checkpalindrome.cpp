#include <iostream>
#include <cmath>
using namespace std;

bool check(int n)
{
    int a = n, z = 0;
    int s = log10(n) + 1;
    while (n > 0)
    {
        s--;
        z = z + (n % 10) * (pow(10, s));
        n = n / 10;
    }
    cout << z;
    return z == a;
}
int main()
{
    int n;
    cout << "Enter the palindrome ";
    cin >> n;
    if (check(n))
    {
        cout << "This is a palindrome";
    }
    else
    {
        cout << "not a palindrome";
    }
    return 0;
}