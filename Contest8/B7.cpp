#include <bits/stdc++.h> 
using namespace std; 
  
int countBinaryNumber(long long n) { 
    queue<long long> q; 
  
    q.push(1); 
    int count = 0; 
    long long t; 
    while (!q.empty()) {	// lap 
        t = q.front(); 
        q.pop(); 
        if (t<= n) {
            count++; 
            q.push(t * 10); 
            q.push(t * 10 + 1); 
        }else break; 
    } 
    return count; 
} 

int main() { 
	long long t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<countBinaryNumber(n)<<endl;
	}
} 
