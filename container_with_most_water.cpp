#include<iostream>
#include<vector>
using namespace std;

void maxWater(int* height){
    int n=height.size();

    int Maxw=INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int w= j-i;
            int ht=min(height[i],height[j]);
            int area= w * ht;
            Maxw=max(Maxwt, area);
        }
    }
    return Maxw;
}


int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7}

   cout<< maxWater(height)<<endl;
}