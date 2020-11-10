#include <iostream>
#include <cmath>
#include <vector>

#define ll long long

using namespace std;

int solve(int a[], int n){
    int dp[1001]= {0};
    int kq=0;

    for(int i=0; i<n; i++)
        dp[i]=a[i];

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(a[i] > a[j])
                dp[i]=max(dp[i], dp[j]+a[i]);
        }

        kq=max(kq, dp[i]);
    }

    return kq;
}

int main()
{

    int T;
    cin>>T;
    while (T--){
        int a[1001];
        int n;
        cin>>n;
		for(int i=0; i<n; i++) cin>>a[i];

        cout<<solve(a,n)<<endl;

    }
    return 0;
}
