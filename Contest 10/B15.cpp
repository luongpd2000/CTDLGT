#include<bits/stdc++.h>

using namespace std;

int C[1005][1005];
int n;
#define max_w 1000

void nguoichuong(int s){
    int d[1005], truoc[1005];

    for(int i=1; i<=n; i++){
        d[i]=C[s][i];
        truoc[i]=s;
    }

    for(int k=1; k<=n-2; k++){
        for(int v=1; v<=n; v++){
            if(v==s) continue;

            for(int u=1; u<=n; u++){
                if(C[u][v]!=max_w && d[v] > d[u]+C[u][v]){
                    d[v]=d[u]+C[u][v];
                    truoc[v]=u;
                }
            }
        }
    }

    for(int v=1; v<=n; v++){
        for(int u=1; u<=n; u++){
            if(C[u][v]!=max_w && d[v] > d[u]+C[u][v]){
                cout<<-1;
                return;
            }
        }
    }

    for(int i=1; i<=n; i++){
        if(d[i] >= max_w)
            cout<<"INFI ";
        else
            cout<<d[i]<<" ";
    }
}

main()
{
    int t;
    cin  >> t;

    while(t--){
        int e,s;
        cin>>n>>e>>s;

        for(int i = 1; i<=n; i++)
            for(int j = 1; j<=n; j++){
                if(i==j) C[i][j]=0;
                else  C[i][j]=max_w;
            }

        for(int i=0; i<e; i++){
            int u,v,l;
            cin>>u>>v>>l;
            C[u][v]=l;
        }
        nguoichuong(s);
        cout<<endl;
    }
}
