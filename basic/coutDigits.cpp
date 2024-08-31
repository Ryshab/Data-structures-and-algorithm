// This program is to count digits in the input

#include <iostream>
using namespace std;

int countdigits(int n){
    int s=0;
    while (n>0){
    n=n/10; 
    s++;}
    return s;

}


int main() {
    int n;
    cout<<"Enter the number  ";
    cin>>n;
    cout<<countdigits(n);
}