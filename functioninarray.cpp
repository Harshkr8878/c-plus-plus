#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    //print the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;

}
int main(){
    int number[15];
    cout<<"value at 14 index"<<number[14]<<endl;

    int second[3]={5,7,11};
    cout<<"value at 2 index"<<second[2]<<endl;

    int third[15]={2,7};
    printArray(third,15);

    int fourth[10]={0};

    printArray(fourth,10);

}