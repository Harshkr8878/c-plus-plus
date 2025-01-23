#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n = ";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<"   ";
    for(int i=1;i<=n;i++){
        int nxtno=a+b;
        cout<<nxtno<<"   ";

        a=b;
        b=nxtno;


    }


}
