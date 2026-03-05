#include<iostream>
using namespace std;

int diagonalSum(int arr[][3], int n){
    int sum=0;

    for(int i=0; i<n; i++){
        sum += arr[i][i];
        if(i != n-i-1) sum +=arr[i][n-i-1];
    }
    cout<<  "sum of diagonals is :" << sum << endl;
    return sum;
}

int main(){
    int arr[][3]={{1,2,3},
                  {4,5,6},
                  {7,8,9}};
    int n=sizeof(arr)/sizeof(arr[0]);

    diagonalSum(arr,n);


}