#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralMatrix(int mat[][4], int n, int m){
    vector<int> ans;
    int left=0,right=m-1;
    int top=0,bottom=n-1;

    while(top <= bottom && left <= right){

        // left to right
        for(int i=left; i <= right; i++){
            ans.push_back(mat[top][i]);
        }
        top++;

        // top to bottom
        for(int i=top; i <= bottom; i++){
            ans.push_back(mat[i][right]);
        }
        right--;

        // right to left from bottom
        if(top<=bottom){
        for(int i=right; i >=left; i--){
            ans.push_back(mat[bottom][i]);
        }
        bottom--;
    }

        // bottom to top
        if(left <= right){
        for(int i=bottom; i>=top; i--){
            ans.push_back(mat[i][left]);
        }
        left++;
    }
    }
    return ans;

}

int main(){
    int mat[][4]={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12},
                 {13,14,15,16}};
                
    int n=sizeof(mat)/sizeof(mat[0]);
    int m=sizeof(mat[0])/sizeof(mat[0][0]);


   vector<int> result= spiralMatrix(mat,n,m);
   for(int i : result) cout << i << " ";
}