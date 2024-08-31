#include<iostream>
#include <cmath>
using namespace std;

bool armstrong(int n){
    int original = n;
    int l = log10(n)+1;
    double s = 0;
    while (n>0){
        s=s+pow((n%10),l);
        n=n/10;
    }
    return s==original;
}
int main() 
{
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    if (armstrong(n)) cout<<"This number is an ARMSTRONG NUMBER";
    else cout<<"Not an ARMSTRONG NUMBER";
    return 0;
}