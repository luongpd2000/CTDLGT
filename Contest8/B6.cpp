#include <bits/stdc++.h> 
using namespace std; 
  
#define MAX_COUNT 3000 
  
vector<string> vec; 
void generateNumbers() {    
    queue<string> q; 
          
    q.push("9"); 
      // tao 1000 so dau
    for (int count = MAX_COUNT; count > 0; count--) { 
        string s1 = q.front(); 
        q.pop(); 
          
        vec.push_back(s1);
          
        string s2 = s1; 
        q.push(s1.append("0")); 
        q.push(s2.append("9")); 
    } 
} 

long long value(string s){
	long long x=0;
	stringstream s1(s);
	s1>>x;
	return x;
}

string findSmallest(int n) {    
    for (int i = 0; i < vec.size(); i++) 
        if (value(vec[i])%n == 0)  // chuyen string sang int
            return vec[i];         
} 
  
int main() { 
	int t,n;
	cin>>t;
	generateNumbers();   
	while(t--){
		cin>>n;   
    	cout << findSmallest(n)<<endl;	
	}
} 
