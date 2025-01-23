#include<iostream>
using namespace std;
int main(){
        int n ;
        cout<<"enter the value of n"<<endl;
        cin>>n;
        int i=1;
        int sum = 0;
        for ( ; ; ){
           if(i<=n){
            sum =sum+i;
           }
           else{
            break;
           }
           i=i+1;
          
        }
         cout<<sum<<endl;



}