#include<iostream>
using namespace std;



int main(){
    //test input
    int arr[]={3,2,3};
    int n=sizeof(arr)/sizeof(int);

    int candi=arr[0];
    int count=1;
    //phase 1: find the candidate
    for(int i=1;i<n;i++){
        if(candi==arr[i]){
            count++;
        }else{
            count--;
        }
        if(count==0){
            candi=arr[i];
            count=1;
        }
    }
    //phase 2: verify the candidate
        int sum=0;
        for(int j=0;j<n;j++){
            if(candi==arr[j]){
                sum++;
            }
    }
            if(sum>n/2){
                cout << "Majority Element is: " << candi << endl;
            }else{
                cout << "No Majority Element" << endl;
            }
    return 0;
}