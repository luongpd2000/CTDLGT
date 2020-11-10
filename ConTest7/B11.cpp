#include<bits/stdc++.h>
using namespace std;

int pre(char c){
	if( c == '(') return 0;
	if( c == '+' || c == '-' ) return 1;
	if( c == '*' || c == '/' || c == '%' ) return 2;
}
// bien doi trung to thanh hau to
void intopos(string s){
	string ns;			// chuoi kq
	int l=s.length(); 
	stack <char> st;
	
	for(int i=0;i<l;i++){
		
		if(s[i]>='A'&&s[i]<='Z') ns+=s[i];	//chuoi kq , neu la toan hang
		else if(s[i]=='(') st.push(s[i]);	
		else if(s[i]==')') {
			while(!st.empty() && st.top()!='('){	// neu la toan tu thi day vao chuoi kq
				ns+=st.top();
				st.pop();
			}
			if(!st.empty()) st.pop(); // pop '('
			//neu dau ) o dau thi phai co lenh empty
		}
		else{ //neu khong phai ngoac thi la toan tu 
			while(!st.empty() && pre(s[i]) <= pre(st.top()) ){	// so sanh do uu tien cua toan tu
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
	cout<<ns<<endl;
}
main(){
	int t; 
	cin>>t;
	while(t--){
		cin.ignore();
		string exp; 
		cin>>exp;
		intopos(exp); 
	}
	
}
