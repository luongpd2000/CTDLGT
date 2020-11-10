#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int dp[100001];

int qhd(int n){
    dp[1]=0;

    for(int i=2; i<=n; i++){
        int c1=INT_MAX,c2=INT_MAX,c3=INT_MAX;
        if(i%3==0)
            c2=dp[i/3];

        if(i%2==0)
            c1=dp[i/2];

        if(i>1)
            c3=dp[i-1];

        dp[i] = 1+min(min(c3,c2),c1);
    }
    return dp[n];
}

main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<qhd(n)<<endl;
    }
    return 0;
}
