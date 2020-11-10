#include<bits/stdc++.h>
using namespace std;

int in[1001],pre[1001],numNode;
int preIdx; 

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

node* find(int inBegin, int inEnd){
	int inIdx;
	if(inBegin>inEnd) return NULL;
	
	node *p=createNode(pre[preIdx++]);
	
	for(int i=inBegin;i<=inEnd;i++){
		if(in[i]==p->data){
			inIdx=i;
			break;
		}
	}
	
	p->left=find(inBegin,inIdx-1);
	p->right=find(inIdx+1,inEnd);
	return p;
}

void LRN(node *p){
	if(p){
		LRN(p->left);
		LRN(p->right);
		cout<<p->data<<" ";
	}
}

main(){
	int t;
    cin  >> t;
    while(t--)
    {
        cin>>numNode;
		preIdx=0;
        for(int i=0;i<numNode;i++)
            cin>>in[i];

        for(int i=0;i<numNode;i++)
            cin>>pre[i];

        node *root=find(0,numNode-1);

        LRN(root);
        cout<<endl;
    }
}
