#include<bits/stdc++.h>

using namespace std;

bool chuaxet[1005];

int ra[1005]={0},vao[1005]={0};

main(){
    int t;
    cin  >> t;
    cin.ignore();
    while(t--){
        fill_n(ra,1005,0);	// reset l?i môi test
        fill_n(vao,1005,0);
        int v,e;
        cin>>v>>e;

        for(int i=0; i<e; i++){
            int es,ef;
            cin>>es>>ef;

            ra[es]++;
            vao[ef]++;
        }

        bool ktra=true;
        for(int i=1;i<=v;i++){
            if(ra[i]!=vao[i]){
                ktra=false;
                break;
            }
        }

        cout<<(ktra?"1":"0")<<endl;
    }
}
