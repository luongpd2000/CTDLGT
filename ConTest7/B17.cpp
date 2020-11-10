#include <bits/stdc++.h> 
using namespace std; 
  
// tinh gia tri tien to 
bool isOperand(char x) // kiem tra toan hang
{ 
   return (x >= '0' && x <= '9') ; 
} 

int isOperator(char x,int op1,int op2){	// kiem tra toan tu
	if(x=='+') return op1+op2;
	if(x=='-') return op1-op2;
	if(x=='*') return op1*op2;
	if(x=='/') return op1/op2;	
}

int valueInfix(string exp) { 
    stack<int> s; 
  
    for (int i=exp.length()-1; i>=0; i--) { 
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
		cout<<valueInfix(s)<<endl;
	}
} 
