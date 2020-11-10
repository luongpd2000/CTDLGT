#include<bits/stdc++.h>
using namespace std;

// theo th? t? tru?c (Node-Left-Right):
struct node{
	node *left,*right;
	int data;
};
typedef node *tree;

node* createNode(int n){
	node *p=new node;
	p->left=NULL; 
	p->right=NULL;
	p->data=n;
	return p;
}
void insertTree(tree &t,node *p){
	if(t!=NULL){
		if(t->data>p->data) insertTree(t->left,p);
		else insertTree(t->right,p);
	}
	else{
		t=p; 
	}
}

int depth(tree t){
	if(t==NULL) return 0;
	else return 1+max(depth(t->left),depth(t->right));
	
}

main(){
	int t; cin>>t;
	while(t--){
		int n,a;
		cin>>n; tree k=NULL;
		while(n--){
			cin>>a;
			node *p=createNode(a);
			insertTree(k,p);
		}
		cout<<depth(k) -1<<endl;
	}

}
