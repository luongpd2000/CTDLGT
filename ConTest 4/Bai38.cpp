#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int T;
    cin >> T;

    while (T--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<ll> a(n+m);

        for(int i=0;i<n+m;i++){
            cin>>a[i];
        }

        sort(a.begin(), a.end());

        cout<<a[k-1]<<endl;
    }

    return 0;
}





















