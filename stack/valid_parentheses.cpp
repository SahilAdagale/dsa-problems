#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool validParentheses(string s){
    stack<char> st;

    for(int i=0; i<s.size(); i++){

        if(s[i] == '(' || s[i] == '{' || s[i] =='[' ){   //--this for open bracket
            st.push(s[i]);
        }else{                                           //--this for close bracket
            if(st.size() == 0) return false;

            if((st.top() == '(' && s[i] == ')') ||
               (st.top() == '{' && s[i] == '}') ||
               (st.top() == '[' && s[i] == ']') ){
                st.pop();
               }else{
                return false;
               }
        }
    }
    return st.size() == 0;
}

int main(){
    string s="())";

   cout<< validParentheses(s)<<endl;
}