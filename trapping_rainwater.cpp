#include<iostream>
#include<climits>
using namespace std;

int trap(int* height, int n){
    int leftmax[200000],rightmax[200000];
    leftmax[0]=height[0];
    rightmax[n-1]=height[n-1];

    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],height[i-1]);
    }
    cout<<endl;
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],height[i+1]);
    }

    int trappedwater=0;
    for(int i=0;i<n;i++){
        int currwater=min(leftmax[i],rightmax[i])-height[i];
        if(currwater>0){
            trappedwater+=currwater;
        }
    }
    return trappedwater;
}

int main(){
    int height[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(height)/sizeof(height[0]);

    int result=trap(height,n);
    cout<<"Trapped water: "<<result<<endl;
    return 0;
}