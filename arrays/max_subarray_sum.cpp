#include<iostream>
#include<climits>
using namespace std;


void printsubarray(int* arr,int n){
    int maxSum=INT_MIN;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            int Currsum=0;
            for(int i=st;i<=end;i++){
                Currsum+=arr[i];
            }
            cout << Currsum << ", "; 
            maxSum=max(maxSum,Currsum);
        }
        cout << endl;
    }
    cout <<"maximum subarray sum is :" << maxSum << endl;
}

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    printsubarray(arr,n);
    return 0;
}