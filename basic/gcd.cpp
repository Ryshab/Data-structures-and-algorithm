#include <iostream>
using namespace std;

int hcf(int a, int b){
    
    while (a>0 and b>0){
        if (a>b) {
            a=a%b;
        }
        else {
            b=b%a;
        }
    }
    if (a==0) return b;
    else return a;

}
int main() {
    int a,b;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b;
    cout<<hcf(a,b);
    
}