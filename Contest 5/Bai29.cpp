#include <bits/stdc++.h>
using namespace std;
int f[101];
int tinh (string s)
{
	memset (f,0,sizeof (f));
	int i,n=s.length ();
	
	if (s[0]=='0') return 0;
	
	f[0]=1;f[1]=1;
	
	for (i=2;i<=n;i++){
		if (s[i-1]!='0') f[i]=f[i-1];		// neu so trc khac 0
		if (s[i-2]=='1'|| s[i-2]=='2'&&s[i-1]<'7')		// có the ghep thanh ky tu co 2 chu so
			f[i]=f[i]+f[i-2];
	}
	return f[n];
}
main ()
{
	int t;string s;
	cin >> t;
	while (t--){
		cin >> s;
		cout << tinh (s) << endl;
	}
}
