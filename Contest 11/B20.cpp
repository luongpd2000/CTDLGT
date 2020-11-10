#include<bits/stdc++.h>
using namespace std;
int pre[1001],numNode;

bool kt(){
	if(numNode==1||numNode==0) return true;
	for(int i=1;i<numNode;i++){
		if(pre[i-1]>=pre[i]) return false;
	}
	return true;
}

main(){
	int t;
    cin  >> t;

    while(t--)
    {
        cin>>numNode;
        for(int i=0;i<numNode;i++)
            cin>>pre[i];
      	cout<<(kt()?"1":"0")<<endl;
    }
}
