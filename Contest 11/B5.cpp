#include<bits/stdc++.h>

using namespace std;

typedef struct node{
    int data;
    struct node *pLeft;
    struct node *pRight;
}Node;

Node* getNode(int data){
    return new Node{data,nullptr, nullptr};
}

void delNode(Node *n){		// xóa nut
    delete n;
}

void delTree(Node *root){	// xoa cây
    if(root!=nullptr){
        delTree(root->pLeft);
        delTree(root->pRight);
        delNode(root);
    }
}

void levelTraversal(Node *root){
    queue<Node*> q;
    
    q.push(root);

    while(!q.empty()){
        Node *f=q.front();
        q.pop();
        cout<<f->data<<" ";

        if(f->pLeft!=nullptr)
            q.push(f->pLeft);
        if(f->pRight!=nullptr)
            q.push(f->pRight);
    }
    cout<<endl;
}

main(){
    int t;
    cin  >> t;

    while(t--){
        int ne;
        cin>>ne;

        Node* root=nullptr;

        Node* nodes[10001];
        fill_n(nodes, 10001, nullptr);

        while(ne--){
            int u,v;
            char x;
            cin>>u>>v>>x;

            if(nodes[u] == nullptr){
                nodes[u] = getNode(u);
                if(root == nullptr)
                    root=nodes[u];
            }

            nodes[v]=getNode(v);

            if(x=='L')
                nodes[u]->pLeft=nodes[v];
            else
                nodes[u]->pRight=nodes[v];
        }

        levelTraversal(root);
        delTree(root);
    }
}
