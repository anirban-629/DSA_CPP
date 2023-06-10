#include<iostream>
#include<stack>
#include<vector>
using namespace std;

bool isOperand(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/'){
        return false;
    }
    return true;
}

int pre(char x){
    if(x=='+'||x=='-'){
        return 1;
    }
    else if(x=='*'||x=='/'){
        return 2;
    }
    return 0;
}

string convert(string s){
    stack<char> st;
    string postfixExp="";
    int i=0,j=0;
    while(j<s.length()){
        if(isOperand(s[i])){
            postfixExp+=s[i++];
        }
        else{
            if(st.empty()){
                if(isOperand(s[i]))
                    postfixExp+=s[i++];
                else
                    st.push(s[i++]);
            }
            else{
                if(pre(s[i])>pre(st.top())){
                    st.push(s[i++]);
                }
                else{
                    postfixExp+=st.top();
                    st.pop();
                    i++;
                }
            }
        }
        j++;
    }
    while(!st.empty()){
        postfixExp+=st.top();
        st.pop();
    }
    return postfixExp;
}

int main(){
//    string s="a+b*c-d/e";
    string s="a+b*c";
    cout<<convert(s);
    return 0;
}
