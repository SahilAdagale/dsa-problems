#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={2,7,11,15};
    int target=9;
      int n=arr.size();
        int currSum=0;
        int st=0,end=n-1;

        
        while(st < end){
            currSum =arr[st]+arr[end];
            if(currSum == target){
                cout<<st<<" "<<end;
                break;
            }
            if(currSum < target) st++;
            else end--;
        }
}