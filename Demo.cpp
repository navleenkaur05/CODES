// // even and odd
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     if(n%2==0){
//         cout<<"even";
//     }
//     else{
//         cout<<"odd";
//     }
//     return 0;
// }




// // prime number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     int a=0;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             a=1;
//             break;
//         }
//     }
//     if(a==0){
//         cout<<"prime";
//     }
//     else {
//         cout<<"not prime";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a: "<<endl;
    cin>>a;
    cout<<"enter b: "<<endl;
    cin>>b;
    cout<<"press 1 for addittion"<<endl<<"press 2 for addittion"<<endl<<"press 3 for addittion"<<endl<<"press 4 for addittion";
    int ch;
    cin>>a;
    cin>>b;
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
