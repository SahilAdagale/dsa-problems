#include<iostream>
using namespace std;

void printarr(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] << ",";
    }
    cout<<endl;
}

void bubbleSort(int* arr,int n){
    for(int i=0;i<n;i++){
        bool swapeed=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapeed=true;
            }
        }
        if(!swapeed) break;
    }
    printarr(arr,n);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);

}