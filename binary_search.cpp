#include<iostream>
using namespace std;

int binarysearch(int* arr,int n , int key){
    int st=0, end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={2,3,4,10,40,50};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;

    int index= binarysearch(arr,n,key);
    if(index==-1){
        cout << "element not found " << endl;
    }else{
        cout << "Elemnt found at index :" << index << endl; 
     }

    return 0;
}