#include<iostream>
#include<climits>
using namespace std;

int secondLargest(int* arr,int n){
    int largest=INT_MIN;
    int second=INT_MIN;
    for(int i=0; i<n;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>second){
            second=arr[i];
        }
    }
    return second;
}

int main(){
    int arr[]={1,2,3,5,6,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"second largest element is : " << secondLargest(arr,n)<<endl;


}
