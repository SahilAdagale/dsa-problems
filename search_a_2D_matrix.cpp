#include<iostream>
using namespace std;


bool matrixSearch(int mat[][5],int n,int m,int target){
    int i=0, j=m-1;

    while(i < n && j>=0){
        if(mat[i][j] == target) return true;
        else if(mat[i][j] < target) i++;
        else j--;
    }
    return false;
}

int main(){
    int mat[][5]={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int n=sizeof(mat)/sizeof(mat[0]);
    int m=sizeof(mat[0])/sizeof(mat[0][0]);
    int target=1000;

    cout << matrixSearch(mat,n,m,target)<< endl;


}