// Infix to Postfix
// Problem Statement: Given an infix expression, Your task is to convert the given infix expression to a postfix expression.


#include<bits/stdc++.h>
 using namespace std;


///funtion to return precedence of operators
 int  precedence(char c){
     if(c =='^'){
         return 3;
     }
     else if(c == '/' || c == '*'){
         return 2;
     } 
     else if(c == '+' || c == '-'){
         return 1;
     }
     else
       return -1;
 }



 void infixTopostfix(string s){

     stack<char> st;
     string res;

     for(int i =0;i<=s.length(); i++){
       char ch = s[i];
     

     //if scanned characyter is operand add it to output string 
     if((ch >= 'a' && ch<='z')|| (ch>= 'A' && ch<= 'Z') || (ch>='0'&&ch<='9')){
         res  +=  ch ;
     }
     else if(ch == '('){
         st.push('(');
     }
     else if(ch ==')'){
         while(st.top()!= '('){
             res += st.top();
             st.pop(); 
         }
         st.pop();
     }

     ///if operator is scanned 
     else{
         while(!st.empty() && precedence(s[i]<= precedence(st.top()))){
             res += st.top();
             st.pop(); 
         }
         st.push(ch);
     }
     //pop all the remaining elements from the stack
     while(!st.empty()){res += st.top();
     st.pop();
     }
      cout<<res<<endl;
     }
 }

 int main(){
     string ex = "(p+q)*(m-n)";
     cout<<"infix exp:"<<ex;
     infixTopostfix(ex);
     return 0;
 }