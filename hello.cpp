
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a: ";
    cin>>a;
    int b;
    cout<<"enter b: ";
    cin>>b;
    cout<<"press 1 for addittion"<<endl<<"press 2 for subtraction"<<endl<<"press 3 for multiplication"<<endl<<"press 4 for division"<<endl;
    int ch;
    cin>>ch;
    switch(ch){
        case 1:
        cout<<"result: "<< a+b;
        break;
        case 2:
        cout<<"result: "<< a-b;
        break;
        case 3:
        cout<<"result: "<< a*b;
        break;
        case 4:
        cout<<"result: "<< a/b;
        break;
        default:
        cout<<"error";
        break;
    }
return 0;
}
