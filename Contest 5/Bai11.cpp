#include <iostream> 
using namespace std; 
  
long long catalanDP( int n) { 
    long long catalan[n + 1]; 
  
    catalan[0] = catalan[1] = 1; 
  
    for (int i = 2; i <= n; i++) { 
        catalan[i] = 0; // ktao lai de tinh
        for (int j = 0; j < i; j++) 
            catalan[i] += catalan[j] * catalan[i - j - 1]; 
    } 
  
    return catalan[n]; 
} 
  
int main() { 
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<catalanDP(n)<<endl;
	}
} 
