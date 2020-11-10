#include<bits/stdc++.h>

using namespace std;
bool chuaxet[1005];

void BFS(vector<vector<int> > &dske, int u){
    queue<int> q;
    q.push(u);
    chuaxet[u]=false;

    while(!q.empty()){
        int f=q.front(); q.pop();

        for(int ke:dske[f]){
            if(chuaxet[ke]){
                q.push(ke);
                chuaxet[ke]=false;
            }
        }
    }
}

bool tim_Cau(vector<vector<int>> &dske, int v){
    for(int e1=1;e1<=v;e1++){
        for(int e2=0;e2<dske[e1].size();e2++){
            int t = dske[e1].at(e2);	// duyet tung canh 

            dske[e1].erase(dske[e1].begin() + e2);	// xoa canh
            BFS(dske,e1);

            bool check=false;	// sau khi dfs thì kiem tra 

            for(int i=1;i<=v;i++){
                if(chuaxet[i]){
                    check=true;
                }
            }

            if(check && e1 < t) cout<<e1<<" "<<t<< " ";

            dske[e1].insert(dske[e1].begin() + e2, t);	// gan lal canh vua xoa (vi tri , gia tri)
            fill_n(chuaxet,1005,true);
        }
    }
}

main(){
    int t;
    cin  >> t;
    cin.ignore();
    while(t--){
        fill_n(chuaxet,1005,true);
        int v,e;
        cin>>v>>e;

        vector<vector<int>> dske(1005, vector<int>());
        for(int i=0; i<e; i++){
            int es,ef;
            cin>>es>>ef;
            dske[es].push_back(ef);
            dske[ef].push_back(es);
        }

        tim_Cau(dske,v);
        cout<<endl;
    }
}
