 #include <bits/stdc++.h>
using namespace std;
int n;
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		set<long long> s;
		s.insert(1);
		int count = 0;
		long long g = 1;
		while (count++ < n){
			g = *s.begin();
			s.erase(s.begin());
			s.insert(2*g); 
			s.insert(3*g);
			s.insert(5*g);
		}
		cout<<g<<endl;
	}
}
