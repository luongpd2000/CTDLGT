#include<bits/stdc++.h>
using namespace std;
string s;

struct node{
	char data;
	node *left;
	node *right;
};

typedef node *tree;//k tao

node *createNode(char x){		// tao nut
	node *p=new node;
	p->data=x;
	p->left=p->right=NULL;
	return p;
}

bool isOP(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^') return true;
	return false;
}

tree solve(){
	stack <node* > st;  	//ab+ef*g*-
	for(int i=0;i<s.length();i++){
		if(!isOP(s[i])){
			node *p=createNode(s[i]);
			st.push(p);
		}
		else{
			node *t1=st.top(); st.pop();
			node *t2=st.top(); st.pop();
			node *t=createNode(s[i]);
			t->left=t2;
			t->right=t1;
			st.push(t);
		}
	}
	node *m=st.top();
	return m;
}

void LNR(tree t){
	if(t){
		LNR(t->left);
		cout<<t->data<<" ";
		LNR(t->right);
	}
}


main(){
	int t; cin>>t;
	while(t--){
		cin>>s;
		LNR(solve());
		cout<<endl;
	}
}
