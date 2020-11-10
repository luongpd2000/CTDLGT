#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void docso(long long n, vector<int> &num){
    while(n>0){
        num.insert(num.begin(), n%10);		// add phan tu vao vecto
        n/=10;
    }
}

void add(vector<int> &max, vector<int> &min, long long base){
    while(min.size() != max.size()) min.insert(min.begin(), 0);		// them 0 vao so be de 2 so co so cs = nhau

    vector<int> kq(50,0);
    int du=0;

    for(int i=max.size()-1; i>=0; i--){
        int sd=max[i]+min[i]+du;

        if(sd<base){
            kq[i]=sd;
            du=0;
        }else{
            	kq[i]=sd%base;
            	du=1;
        }
    }

    int len=max.size();
    if(du==1){			// neu tong co so cs lon hon 2 so thanh phan
        kq.insert(kq.begin(),1);
        len++;
    }

    for(int i=0; i<len; i++)
        cout<<kq[i];
    cout<<endl;
}

int main(){
    long long base, n1,n2;

    cin>>base>>n1>>n2;

    if(n1==0 && n2==0){
        cout<<0<<endl;
    }
    else{
        vector<int> num1,num2;

        docso(n1,num1);
        docso(n2, num2);

        if(num1.size()>num2.size())
            add(num1,num2,base);
        else
            add(num2,num1,base);
        }
    return 0;
}













