#include<bits/stdc++.h>

using namespace std;

bool chuaxet[11];
int color[11];

bool check(vector<vector<int> > &dske, int k, int cc, int v){
    for(int i=0;i<dske[k].size();i++){
        if(cc == color[dske[k].at(i)])
            return false;
    }

    return true;
}

bool tryHard(vector<vector<int> > &dske, int k, int v, int nc){
    if(k==v+1)
        return true;

    for(int i=1;i<=nc;i++){
        if(check(dske,k,i,v)){
            color[k]=i;
            if(tryHard(dske,k+1,v,nc)) return true;
            color[k]=0;
        }
    }
    return false;
}

main(){
    int t;
    cin  >> t;
    cin.ignore();
    while(t--){
        int v,e, nc;
        cin>>v>>e>>nc;

        vector<vector<int> > dske(11, vector<int>());
        for(int i=0; i<e; i++){
            int es,ef;
            cin>>es>>ef;

            dske[es].push_back(ef);
            dske[ef].push_back(es);
        }
        
        fill_n(chuaxet,11,true);
        fill_n(color,11,0);
        bool dc=tryHard(dske,1,v,nc);

        cout<<(dc?"YES":"NO")<<endl;
    }
}
