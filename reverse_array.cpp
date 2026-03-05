#include<iostream>
using namespace std;

void printarr(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " "; 
    }
    cout << endl;
}

int main(){
    int arr[]={2,4,3,6,4,7};
    int n=sizeof(arr)/sizeof(int);

    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
    printarr(arr,n);
    return 0;
}