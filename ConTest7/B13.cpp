#include <bits/stdc++.h> 
using namespace std; 
bool isOperator(char x) {	// kiem tra toan tu 
  switch (x) { 
  case '+': 
  case '-': 
  case '/': 
  case '*': 
    return true; 
  } 
  return false; 
} 
  // bien doi tien to thanh hau to
string preToPost(string pre_exp) { 
  
  stack<string> s; 
  
  int length = pre_exp.size(); 
  
  for (int i = length - 1; i >= 0; i--) { // doc bieu thuc tu phai sang trai
    if (isOperator(pre_exp[i])) { // neu la toan tu
      string op1 = s.top(); s.pop(); // lay 2 toan hang dau tien trong stack roi ghep voi toan tu
      string op2 = s.top(); s.pop(); 
  
      string temp = op1 + op2 + pre_exp[i]; 
  
      s.push(temp); // ghep xong thi day lai vao stack
    } 
    else { // neu la toan hang thi push vao stack
      s.push(string(1, pre_exp[i])); 
    } 
  } 
  return s.top(); // bieu thuc can
} 
  
main() { 
	int t;
	string s;
	cin>>t;
	while(t--){
		cin.ignore();
		cin>>s;
		cout<<preToPost(s)<<endl;
	}
} 
