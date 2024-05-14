

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int s=0,e=n,mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            e=mid-1;
        }
        if(arr[mid]<key){
            s=mid+1;
        }
}
    return -1;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int key;
    cin>>key;
    int result=binarySearch(arr,n,key);
    cout<<"Found in index "<<result<<endl;
    return 0;
}
