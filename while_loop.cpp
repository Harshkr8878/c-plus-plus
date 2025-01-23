#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no - ";
    cin>>n;
    //int i = 1;

   //   while(i<=n) {
   //      cout<< i <<" ";
   //      i= i+1;
   //   }

// int sum=0;
// while(i<=n){
//    sum=sum+i;
//    i=i+1;
// }

// cout<<"value of sum = "<<sum<<endl;

//prime or not check?
int i = 2;
while(i<n){
if(n%i==0){
   cout<<"it is not prime"<<endl;
   }
   else{
      cout<<"it is prime"<<endl;
   }
   i = i+1;
}

}
