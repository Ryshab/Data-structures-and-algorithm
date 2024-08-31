// This is to reverse a number

#include <iostream>
using namespace std;

void revNum(int n){
    
    while (n>0) {
        cout<<(n%10);
        n=n/10;
    }
    
}

int main() {
    int n;
    cout<<"Enter the number you want to reverse ";
    cin>>n;

    revNum(n);

}