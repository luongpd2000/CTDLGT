#include<bits/stdc++.h>
#define ll long long

using namespace std;

int m=1e9+7;

int **dp;

void init(){
    dp = new int*[101];
    for(int i=0;i<101;i++)
        dp[i] = new int[50001]{0};
}

void del(){
     for(int i=0;i<101;i++)
        delete[] dp[i];

     delete[] dp;
}


int solve(int n, int k){
    for(int i=1;i<=n;i++){
        for(int j = 0;j<=k;j++){
            if(i==1 && j<10){			// 1 chu so
                dp[i][j]=1;
                continue;
            } 
            
            int s=0;
            for(int h=0;h<=9 && j>h;h++){

                s=(s+dp[i-1][j-h])%m;
            }
            dp[i][j]=s;
        }
    }
    return dp[n][k];
}

int main(){
    init();
    int T;
    cin>>T;
    cin.ignore();
    while (T--)
    {
        int n,k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }

    del();
    return 0;
}
