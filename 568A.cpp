#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;


int main(){
	int n;
	cin>>n;
	int f=1;
	int ans=0;
	int ctr=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(f && a==0)
		{continue;}
		f=0;
		if(a==1)
		{ans++;
			if(ctr<=1)
			ans+=ctr;
			ctr=0;continue;}
		ctr++;
	}
	cout<<ans<<endl;
	return 0;
}
