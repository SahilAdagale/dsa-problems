#include<iostream>
#include<vector>
using namespace std;

vector<int> setMismatch(vector<int>& v,int n){
    int dup=0,missing=0;
    vector<int>vec(n+1,0);
    for(int i=0; i<n; i++){
        vec[v[i]]++;
    }

    for(int i=1; i<vec.size(); i++){
        if(vec[i] == 2) dup=i;
        if(vec[i] == 0) missing=i;
    }
    return {dup,missing};
}

int main(){
    vector<int> v={1,2,2,4};
    int n=v.size();
    vector<int> result =setMismatch(v,n);
    cout<<"Duplicate:"<< result[0]<<endl;
    cout<<"Missing :" << result[1]<<endl;
    return 0;
}