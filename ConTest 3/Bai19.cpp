#include <bits/stdc++.h> 
using namespace std; 
  
void in(long long T, long long M){ 
    // neu mau so chia het cho tu
    if (M%T == 0) { 
        cout <<"1/"<< M/T; 
        return; 
    } 
  	// tim phan mau cho so tiep theo 
    long long n = M/T + 1; 
    cout <<"1/"<<n<< " + "; 
    // tim mau cho phan con lai 
    in(T*n-M, M*n); // tru di so vua xet
 } 

main(){ 
    long long t,T,M;
    cin>>t;
    while(t--){
    	cin>>T>>M;
    	in(T,M);
    	cout<<endl;
	}
}
