#include<bits/stdc++.h>

using namespace std;

bool chuaxet[1001];
int truoc[1001];

void findPath(vector<vector<int> > &dske, int s, int t){
    queue<int> q;
    q.push(s);
    chuaxet[s]=false;

    while(!q.empty()){
        int f=q.front(); q.pop();

        for(int ke_f:dske[f]){
            if(chuaxet[ke_f]){
                q.push(ke_f);
                chuaxet[ke_f]=false;
                truoc[ke_f]=f;
            }
        }
    }
}

main(){
    int t;
    cin  >> t;
    cin.ignore();
    while(t--){
        int v,e;
        cin>>v>>e;

        vector<vector<int> > dske(1001, vector<int>());

        for(int i=0; i<e; i++){
            int h,k;
            cin>>h>>k;

            dske[h].push_back(k);		// chuyen sang ds ke
            dske[k].push_back(h);
        }

        int q;
        cin>>q;
        while(q--){
            int a,b;
            cin>>a>>b;

            fill_n(chuaxet,1001,true);
            fill_n(truoc,1001,0);

            findPath(dske,a,b);
            cout<<(truoc[b]!=0?"YES":"NO")<<endl;
        }
    }
}
