#include<iostream>
#include<climits>
using namespace std;

void print(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}

void countingSort(int* arr,int n){
    int freq[10000];
    int minValue= INT_MAX; 
    int maxValue= INT_MIN;

    for(int i=0;i<n;i++){
        minValue=min(minValue,arr[i]);
        maxValue=max(maxValue,arr[i]);
        freq[arr[i]]++;
    }
    for(int i = minValue, j=0; i <= maxValue ; i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    print(arr,n);
}
int main(){
    int arr[]={1};
    int n=sizeof(arr)/sizeof(int);

    countingSort(arr,n);


}