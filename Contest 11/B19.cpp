#include<bits/stdc++.h>
using namespace std;
int pre[1010];

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

node* insertTree(int start, int end){
	if(start>end) return NULL ;
	
	node *p=createNode(pre[start]);
	int i;
	for(i=start; i<=end;i++){
		if(pre[i]>p->data) break;
	}
	p->left=insertTree(start+1,i-1);
	p->right=insertTree(i,end);
	return p;
}

void postOrder(tree t){
	if(t){
		postOrder(t->left);
		postOrder(t->right);
		cout<<t->data<<" ";
	}
}

main(){
	int t; 
	cin>>t;
	while(t--){
		int n;
		cin>>n; tree k=NULL; 
		
		for(int i=0;i<n;i++) cin>>pre[i];
		
		k=insertTree(0,n-1);
		postOrder(k);
		cout<<endl;
	}

}
