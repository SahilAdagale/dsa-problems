#include<iostream>
using namespace std;

void print(int mat[][4], int m ,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<< mat[i][j] << ",";
        }
        cout<<endl;
    }
}


void matrixZero(int mat[][4],int m,int n){
    int col0=1;

    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            if(mat[i][j] == 0){
                mat[0][j] = 0;
                if( j != 0){
                    mat[0][j];
                }else{
                    col0=0;
                }
            }
        }
    }

    for(int i=1;i<m; i++){
        for(int j=1; j<n; j++){
            if(mat[i][j] != 0){
                if( mat[0][j] == 0 || mat[i][0] == 0){
                    mat[i][j] =0;
                }
            }
        }
    }

    if(mat[0][0] == 0){
        for(int j=0; j<n;j++){
            mat[0][j] = 0;
        }
    }
    if(col0 == 0){
        for(int i=0 ; i<m;i++){
            mat[i][0]= 0;
        }
    }
    print(mat,m,n);
    
}

int main(){
    int mat[][4]={{1,1,1,1},
                  {1,0,1,1},
                  {1,1,0,1},
                  {0,1,1,1}};
    int m=sizeof(mat)/sizeof(mat[0]);
    int n=sizeof(mat[0])/sizeof(mat[0][0]);

    matrixZero(mat,m,n);

}