#include<iostream>
#include<cmath>
using namespace std;

void displaydiv(int n){
    for (int i=1; i<=sqrt(n); i++){
        if (n%i==0){
            cout<<i<<" x "<<(n/i)<<endl;
        }
    }

}
int main() 
{
    int n;
    cout<<"Enterr the number";
    cin>>n;
    displaydiv(n);    
    return 0;
}