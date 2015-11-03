#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;
int main(){
	long long n;
	scanf("%lld",&n);
	long long min=1000000000;
	long long sum=0;
	long long tot=0;
	for(long i=0;i<n;i++)
	{
		long long a,p;
		cin>>a>>p;//scanf("%lld%lld",&a,&p);
		if(p<min)
		{//cout<<"!";
			tot+=min*sum;
			//cout<<tot<<"!\n";
			sum=a;
			min=p;
		}
		else
		sum+=a;
	}
	tot+=min*sum;
	cout<<tot<<"\n";//printf("%lld\n",tot);
	return 0;
}
