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
int pre(char c){	// muc do uu tien cua cac toan tu
	if( c == '(') return 0;
	if( c == '+' || c == '-' ) return 1;
	if( c == '*' || c == '/' || c == '%' ) return 2;
}


// bien doi trung to thanh hau to
void inToPos(string s){
	string ns;
	int l=s.length(); stack <char> st;
	
	for(int i=0;i<l;i++){
		
		if(s[i]>='A'&&s[i]<='Z') ns+=s[i];	//chuoi kq , neu la toan hang
		else if(s[i]=='(') st.push(s[i]);	
		else if(s[i]==')') {
			while(!st.empty() & st.top()!='('){	// neu la toan tu thi day vao chuoi kq
				ns+=st.top();
				st.pop();
			}
			if(!st.empty()) st.pop(); // pop '('
			//neu dau ) o dau thi phai co lenh empty
		}
		else{ //neu khong phai ) thi la toan tu 
			while(!st.empty()&&pre(s[i])<=pre(st.top())){	// so sanh do uu tien cua toan tu
				ns+=st.top();
				st.pop();
			}
			st.push(s[i]);	// push toan tu vao stack
		}
	}
	while(!st.empty()&&st.top()!='('){
		ns+=st.top();
		st.pop();
	}
}


// tinh gia tri bieu thuc hau to
int valuePostfix(string exp) { 
    stack<int> s; 
  
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
		inToPos(s);
		cout<<valuePostfix(s)<<endl;
	}
} 
