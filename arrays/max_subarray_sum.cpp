#include<iostream>
#include<climits>
using namespace std;


void printsubarray(int* arr,int n){
    int maxSum=INT_MIN;
    for(int st=0;st<n;st++){
        int currsum=0;
        for(int end=st;end<n;end++){
            currsum+=arr[end];
            maxSum=max(maxSum,currsum);
        }
    }
    cout <<"maximum subarray sum is :" << maxSum << endl;
}

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    printsubarray(arr,n);
    return 0;
}