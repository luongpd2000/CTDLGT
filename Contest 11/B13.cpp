#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int data;
    struct node *pLeft;
    struct node *pRight;
} Node;

Node* getNode(int data){
    return new Node{data,nullptr, nullptr};
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

bool identical(Node *root1, Node *root2){
    if(root1 == nullptr && root2 == nullptr)
        return true;

    if(root1!=nullptr && root2!=nullptr){
        return (root1->data == root2->data &&
                identical(root1->pLeft, root2->pLeft) &&
                identical(root1->pRight, root2->pRight));
    }
    return false;
}

void input(Node **root){
    int ne;
    cin>>ne;

    Node* nodes[10005];
    fill_n(nodes, 10005, nullptr);

    while(ne--){
        int u,v;
        char x;
        cin>>u>>v>>x;

        if(nodes[u] == nullptr){
            nodes[u] = getNode(u);
            if(*root == nullptr){
                *root=nodes[u];
            }
        }
        nodes[v]=getNode(v);

        if(x=='L')
            nodes[u]->pLeft=nodes[v];
        else
            nodes[u]->pRight=nodes[v];
    }
}

main(){
    int t;
    cin  >> t;
    while(t--){
        Node* root1=nullptr;
        Node* root2=nullptr;

        input(&root1);
        input(&root2);
        cout<<identical(root1, root2)<<endl;

        delTree(root1);
        delTree(root2);
    }
}












