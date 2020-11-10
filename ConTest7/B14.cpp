#include <bits/stdc++.h> 
using namespace std; 
  
bool isOperator(char x) // kiem tra toan tu
{ 
    switch (x) { 
    case '+': 
    case '-': 
    case '/': 
    case '*': 
        return true; 
    } 
    return false; 
} 
// bien doi hau to thanh tien to
string postToPre(string post_exp) { 
    stack<string> s; 
    int length = post_exp.size(); 
  
    for (int i = 0; i < length; i++){	// xet day tu trai sang phai 
        if (isOperator(post_exp[i])) { // neu la toan tu
  
            string op1 = s.top(); 	// neu 2 toan hang dau trong stack roi ghep bieu thuc
            s.pop(); 
            string op2 = s.top(); 
            s.pop(); 
  
            string temp = post_exp[i] + op2 + op1; 
  
            s.push(temp); 	// ?ay bieu thuc v?a ghep vao stack
        } 
        else { // neu la toan han thi day vao stack
            s.push(string(1, post_exp[i])); 
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
		cout<<postToPre(s)<<endl;
	}
} 
