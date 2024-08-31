#include <iostream>
using namespace std;

//  In a pascal triangle find out the element on a given row and column
int findpascal(int r, int c)
{
    // So simple way of finding is through a formula nCr that is : : n!/(r!(n-r)!)
    int n1 = r;
    int r1 = c;
    for (int i = 1; i < c; i++)
    {
        n1 = n1 * (r - i);
        r1 = r1 * (c - i);
    }
    return n1 / r1;
};

void printrow(int r)
{
    // Print a row in pascal's triangle
    int ans = 1;
    cout << ans;
    for (int i = 1; i < r; i++)
    {
        ans = ans * (r - i);
        ans = ans / i;
        cout << "," << ans;
    }
};

void printallrows(int r)
{
    cout<<"[";
    for (int i = 1; i <= r; i++)
    {
        cout<<"[";
        printrow(i);
        cout<<"]";
    }
    cout<<"]";
}

int main()
{
    int r, c;
    cin >> r >> c;
    // cout<<findpascal(r,c);
    // printrow(r);
    printallrows(r);
    return 0;
}