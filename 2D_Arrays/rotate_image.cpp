#include<iostream>
#include<algorithm>
using namespace std;

void print(int mat[][4],int m, int n){
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j] << " ";
        }
        cout <<endl;
    }
}

void rotateImage(int mat[][4],int m ,int n){
    for(int i=0; i<m; i++){
        for(int j=i+1; j<n; j++){
            swap(mat[i][j],mat[j][i]);
        }
    }

    for(int i=0; i<m; i++){
        reverse(mat[i],mat[i]+n);
    }
    print(mat,m,n);

}

int main(){
    int mat[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int m=sizeof(mat)/sizeof(mat[0]);
    int n=sizeof(mat[0])/sizeof(mat[0][0]);

    rotateImage(mat,m,n);
}