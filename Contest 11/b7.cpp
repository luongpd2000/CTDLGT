#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};
typedef node *tree;
node *createNode(int x){
	node *p=new node;
	p->data=x;
	p->left=p->right=NULL;
	return p;
}

void spiral(tree t){
	stack <node*> s1; // voi level duoc in tu phai sang trai
	stack <node* > s2; // voi levels duoc in tu trai sang phai
	s1.push(t);
	while(!s1.empty()||!s2.empty()){
		while(!s1.empty()) // in s1, sau do push left voi right vao s2;
		{
			node *p=s1.top(); s1.pop();
			cout<<p->data<<" ";
			
			if(p->right!=NULL) s2.push(p->right);
			if(p->left!=NULL) s2.push(p->left);
		}
		while(!s2.empty()) 
		{
			node *q=s2.top(); s2.pop();
			cout<<q->data<<" ";
			if(q->left!=NULL) s1.push(q->left);
			if(q->right!=NULL) s1.push(q->right);
							
		}
	}
	cout<<endl;
}
main(){
	int t,n; cin>>t;
	while(t--){
		int u,v; char x; node *Nodes[10001]; tree t=NULL; 
		for(int i=0;i<10001;i++) Nodes[i]=NULL;
		cin>>n; 
		while(n--){
			cin>>u>>v>>x;
			if(Nodes[u]==NULL){
				Nodes[u]=createNode(u);
				if(t==NULL) t=Nodes[u];
			}
			Nodes[v]=createNode(v);
			if(x=='L') Nodes[u]->left=Nodes[v];
			else Nodes[u]->right=Nodes[v];
		}
		
		spiral(t);
	}
}
