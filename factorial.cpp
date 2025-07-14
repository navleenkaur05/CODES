#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int factorial=1;
    if(n<0) cout<<"factorial cant be defined";
    else {
        for(int i=1;i<=n;i++){
            factorial=factorial*i;
        }
        cout<<"factorial of "<<n<<" is "<<factorial;
    }
}