#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a year: ";
    cin>>n;
    if(n%4==0 && n%100!=0 || n%400==0){
        cout<<"the entered year is a leap year";
    }
    else{
        cout<<"not a leap year";
    }
    return 0;
}