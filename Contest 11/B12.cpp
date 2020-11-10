#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int data;
    int level;
    struct node *pLeft;
    struct node *pRight;
}Node;


Node* getNode(int data){
    return new Node{data,-1,nullptr, nullptr};
}

void delNode(Node *n){
    delete n;
}

void delTree(Node *root){
    if(root!=nullptr){
        delTree(root->pLeft);
        delTree(root->pRight);
        delNode(root);
    }
}

bool isFullTree(Node *root){
    int level=-1;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node *f=q.front(); q.pop();
        if((f->pLeft==nullptr && f->pRight!=nullptr) ||
                (f->pLeft!=nullptr && f->pRight==nullptr))
        {
            return false;
        }

        if(f->pLeft != nullptr) q.push(f->pLeft);
        if(f->pRight != nullptr) q.push(f->pRight);
    }
    return true;
}

main(){
    int t;
    cin  >> t;
    while(t--){
        int ne;
        cin>>ne;
        Node* root=nullptr;

        Node* nodes[10005];
        fill_n(nodes, 10005, nullptr);

        while(ne--){
            int u,v;
            char x;
            cin>>u>>v>>x;

            if(nodes[u] == nullptr){
                nodes[u] = getNode(u);
                if(root == nullptr){
                    root=nodes[u];
                    root->level=0;
                }
            }
            nodes[v]=getNode(v);

            if(x=='L')
                nodes[u]->pLeft=nodes[v];
            else
                nodes[u]->pRight=nodes[v];

            nodes[v]->level=nodes[u]->level+1;
        }
        cout<<isFullTree(root)<<endl;
        delTree(root);
    }
}

