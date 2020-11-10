#include <bits/stdc++.h>
 
using namespace std;
 // tien to ve trung to
bool isOperator(char x) {	// kiem tra xem là toan tu hay toan hang 
  switch (x) { 
  case '+': 
  case '-': 
  case '/': 
  case '*': 
    return true; 
  } 
  return false; 
} 
  
string preToInfix(string pre_exp) { 
  stack<string> s; 
  int length = pre_exp.size(); 
  for (int i = length - 1; i >= 0; i--) { // xet tu phai sang trai
  
    if (isOperator(pre_exp[i])) { // neu la toan tu

      string op1 = s.top();   s.pop(); 
      string op2 = s.top();   s.pop(); 
  
      string temp = "(" + op1 + pre_exp[i] + op2 + ")"; // lay 2 toan hang trong stack ròi ghep voi toan tu
  
      s.push(temp); // push temp lai vao stack
    } 
    else { 
      s.push(string(1,pre_exp[i])); // neu là toan hang thi day vao stack
    } 
  } 
  return s.top(); 
} 
  
main() { 
	int t;
	string s;
	cin>>t;
	while(t--){
		cin.ignore();
		cin>>s;
		cout<<preToInfix(s)<<endl;
	} 
} 
