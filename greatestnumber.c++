#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter first number: ";
    cin>>a;
    int b;
    cout<<"enter second number: ";
    cin>>b;
    int c;
    cout<<"enter third number: ";
    cin>>c;
    if(a>b && a>c){
        cout<<"greatest number is "<<a;

    }
    else if (b>a && b>c){
        cout<<"greatest number is "<<b;
    }
    else if(c>a && c>b){
        cout<<"greatest number is "<<c;
    }
    else {
        cout<<"equal numbers or error";
    }
}
