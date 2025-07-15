#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a number: ";
    cin>>a>>b>>c;
    int arr[]={a,b,c};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(a>b && a>c) cout<<a<<" is greater."<<endl;
    else if(b>a && b>c) cout<<b<<" is greater"<<endl;
    else if(c>a && c>a) cout<<c<<" is greater"<<endl;
    if(a<b && a<c) cout<<a<<" is smallest"<<endl;
    else if(b<a && b<c) cout<<b<<" is smallest"<<endl;
    else if(c<a && c<a) cout<<c<<" is smallest"<<endl;
    sort(arr,arr+n);
    cout<<"ascending order: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"descending order :";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}