#include<iostream>
#include<cstring>
using namespace std;

bool Palindrome(char* name, char n){
    int low=0,high=n-1;
    while(low<high){
        if(name[low++] != name[high--]){
            return false;
        }
    }
    return true;
}

int main(){
    char name[]= "racecsar";
    cout<< Palindrome(name,strlen(name)) << endl;

}