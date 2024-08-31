#include <iostream>
#include <string>
using namespace std;

// print n to 1 with recursion
void recur1(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    recur1(n - 1);
}
// print 1 to n with recursion
void recur2(int i, int n)
{
    if (i > n)
        return;
    cout << i;
    recur2(i + 1, n);
}

// sum of first n numbers
int recur3(int n)
{
    if (n == 0)
        return 0;
    return (n + recur3(n - 1));
}

// Factorial of N numbers
int recur4(int n)
{
    if (n == 0)
        return 1;
    return (n * recur4(n - 1));
}

// reverse an array
void recur5(int a, int b, int arr[])
{
    if (a >= b)
        return;

    int temp = arr[a];

    arr[a] = arr[b];
    arr[b] = temp;
    recur5(a + 1, b - 1, arr);
}

// check if a string is palindrome
bool recur6(string str, int a , int b){
    if (a>=b) return true;
    else if (str[a]!=str[b]) return false;
    recur6(str,a+1,b-1);


}
int main()
{
    // int n;
    // cin>>n;

    // cout<<recur4(n);
    // int arr[5] = {1, 2, 3, 4, 5};

    // recur5(0, 4,arr);

    // for (int i=0; i<5; i++){
    //     cout<<arr[i]<<endl;
    // }

    string str;
    cin>>str;
    if (recur6(str,0,str.size()-1)) cout<<"This is a pallindrome";
    else cout<<"Not a pallindrome";
    return 0;
}