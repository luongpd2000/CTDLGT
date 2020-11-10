#include <bits/stdc++.h> 
using namespace std; 
  
bool isOperand(char x) // kiem tra toan hang
{ 
   return (x >= '0' && x <= '9') ; 
} 

int isOperator(char x,int op1,int op2){	// kiem tra toan tu
	if(x=='+') return op2+op1;
	if(x=='-') return op2-op1;
	if(x=='*') return op2*op1;
	if(x=='/') return op2/op1;	
}

int valuePostfix(string exp) { 
    stack<int> s; 
  
  	string nb;
    for (int i=0;i<exp.length(); i++) { 
        if (isOperand(exp[i])){ // neu la toan hang
           s.push(exp[i]-'0'); 
        } 
        else{ // neu la toan tu
        
            int op1 = s.top();	// lay 2 toan hang dau tien trong stack roi ghep bieu thuc
            s.pop(); 
            
            int op2 = s.top(); 
            s.pop(); 
            
            s.push(isOperator(exp[i],op1,op2)); 	// day bieu thuc ghep dc vao lai stack
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
		cout<<valuePostfix(s)<<endl;
	}
} 
