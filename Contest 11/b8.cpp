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

void solve(tree t){
	queue <node *> qe;
	stack <node *> st;
	qe.push(t);
	while(!qe.empty()){
		node *q=qe.front();
		if(q->right!=NULL) qe.push(q->right);
		if(q->left!=NULL) qe.push(q->left);
		st.push(createNode(q->data));
		qe.pop();
	}
	while(!st.empty()){
		node *temp=st.top();
		cout<<temp->data<<" ";
		st.pop();
	}
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
		
		solve(t);
		cout<<endl;
	}
}
