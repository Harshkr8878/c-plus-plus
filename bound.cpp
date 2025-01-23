#include<iostream>
using namespace std;
int firstocc(int arr[],int n , int key){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans =-1;
    while(s<=e){
        if(arr[mid]==key){
            ans= mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int n , int key){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans =-1;
    while(s<=e){
        if(arr[mid]==key){
            ans= mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int even[6]={1,3,3,4,4,4};
    cout<<"the first occerence index is - "<<firstocc(even,6,4)<<endl;
    cout<<"the last occerence index is - "<<lastocc(even,6,4)<<endl;
return 0;
}