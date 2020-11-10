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

node* createBST(int *a, int start, int end){
    if(start > end) return NULL;
    int mid = (start + end)/2;
    node* temp = createNode(a[mid]);
    temp->left = createBST(a, start, mid - 1);
    temp->right = createBST(a, mid + 1, end);
    return temp;
}

void preorder(node* temp){		// in 1 node goc
    if(temp) cout << temp->data << endl;
}

main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n; 
		int a[n];
		
		for(int i=0;i<n;i++) cin>>a[i];
		
		sort(a,a+n);
		tree k = createBST(a,0,n-1);
		preorder(k);
	}

}
