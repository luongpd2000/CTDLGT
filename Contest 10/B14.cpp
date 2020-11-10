#include<bits/stdc++.h>
using namespace std;

int C[1005][1005];
int n;
#define max_w INT_MAX

int d[1005], truoc[1005];
    bool daxet[1005];

void dijkstra(int s){
    fill_n(daxet,1005,false);

    for(int i=1; i<=n; i++){
        d[i]=C[s][i];
        truoc[i]=s;
    }
    daxet[s]=true;

    for(int k=1; k<=n; k++){
        int dd=max_w,u;
        for(int i=1; i<=n; i++){
            if(daxet[i]) continue;
            if(d[i] < dd && d[i]!=max_w){
                dd=d[i];
                u=i;
            }
        }
        daxet[u]=true;

        for(int v=1; v<=n; v++){
            if(daxet[v]) continue;

            if(C[u][v] != max_w && d[v] > d[u] + C[u][v]){
                d[v]=d[u]+C[u][v];
                truoc[v]=u;
            }
        }
    }

    for(int i=1;i<=n;i++)
        cout<<d[i]<<" ";
}

main(){
    int t;
    cin  >> t;
    while(t--){
        int e,s;
        cin>>n>>e>>s;

        for(int i = 1;i<=n;i++)
            for(int j = 1;j<=n;j++){
                if(i==j) C[i][j]=0;
                else  C[i][j]=max_w;
            }

        for(int i=0; i<e; i++){
            int u,v,l;
            cin>>u>>v>>l;

            if(l<C[u][v])
            {
                C[u][v]=l;
                C[v][u]=l;
            }
        }

        dijkstra(s);
        cout<<endl;
    }
}






