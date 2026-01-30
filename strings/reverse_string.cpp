#include<iostream>
#include<cstring>
using namespace std;

void reverseString(char* name,char n){
    int low=0,high=n-1;
    
    while(low<high){
        swap(name[low++],name[high--]);
    }
}

int main(){
    char name[]= "sahil";

    reverseString(name,strlen(name));

    cout<<"Reverse string is: "<< name << endl;

}