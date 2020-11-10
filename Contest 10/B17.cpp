#include<bits/stdc++.h>
using namespace std;

int C[1005][1005];
int n;
#define max_w 1010
int d[1005][1005];

void floyd(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            d[i][j]=C[i][j];
        }
    }

    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(d[i][k]!=max_w && d[k][j]!=max_w && d[i][j] > d[i][k] + d[k][j])
                    d[i][j] = d[i][k] + d[k][j];
            }
        }
    }
}

main(){
        int e;
        cin>>n>>e;

        for(int i = 1; i<=n; i++)
            for(int j = 1; j<=n; j++){
                if(i==j) C[i][j]=0;
                else  C[i][j]=max_w;
            }

        for(int i=0; i<e; i++){
            int u,v,l;
            cin>>u>>v>>l;

            if(l<C[u][v]){
                C[u][v]=l;
                C[v][u]=l;
            }
        }
        floyd();

        int q;
        cin>>q;
        while(q--){
            int s,l;
            cin>>s>>l;
            cout<<d[s][l]<<endl;
        }
}





