#include <bits/stdc++.h> 
using namespace std; 
  
bool isOperand(char x) // kiem tra toan hang
{ 
   return (x >= 'a' && x <= 'z') || 
          (x >= 'A' && x <= 'Z'); 
} 
// hau to thanh trung to
string postToInfix(string exp) { 
    stack<string> s; 
  
    for (int i=0;i<exp.length(); i++) { 
        if (isOperand(exp[i])){ // neu la toan hang
           string op(1, exp[i]); // day vao stack
           s.push(op); 
        } 
        else{ // neu la toan tu
            string op1 = s.top();	// lay 2 toan hang dau tien trong stack roi ghep bieu thuc 
            s.pop(); 
            string op2 = s.top(); 
            s.pop(); 
            s.push("(" + op2 + exp[i] + op1 + ")"); 	// day bieu thuc ghep dc vao lai stack
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
		cout<<postToInfix(s)<<endl;
	}
} 
