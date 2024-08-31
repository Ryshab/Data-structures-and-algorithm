#include<iostream>
using namespace std;

bool prime(int n){
    int s=0;
    for (int i = 2; i*i<n; i++){
        if (n%i==0) s=s+1;
        cout<<s;
    }
    return s==0;
}
int main() 
{
    int n;
    cout<<"Enter the number";
    cin>>n;

    if (prime(n)) cout<<"This is a prime number";
    else cout<<"Not a prime number";
    
    return 0;
}