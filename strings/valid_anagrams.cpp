#include<iostream>
#include<string>
using namespace std;

bool validAnagram(string str1, string str2){
    if( str1.length() != str2.length()) return false;

    int count[26]={0};

    for(int i=0; i<str1.length() ; i++){
        count[str1[i]-'a']++;
    }

    for(int i=0; i<str2.length(); i++){
        if(count[str2[i]-'a'] == 0) return false;
        else count[str2[i]-'a']--;
    }
    return true;
}

int main(){
    string str1="cat";
    string str2="dog";

    if(validAnagram(str1,str2)){
        cout<<" valid anagram" << endl;
    }else{
        cout<< "not an anagram"<<endl;
    }
}