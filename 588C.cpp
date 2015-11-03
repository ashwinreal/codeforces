#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;
long long marker=1000000000;

long long hash1[10000000]={0};
int main(){
	long long n;
	std::ios::sync_with_stdio(false);
	cin>>n;
	for(long long i=0;i<n;i++)
	{long long a;
		cin>>a;
		hash1[a]++;}
	
	for(long long i=0;i<1000000;i++)
	{
		if(hash1[i]>0)
		{
			hash1[i+1]+=hash1[i]/2;
			hash1[i]=hash1[i]%2;
		}
	}
	long long ans=0;
	for(long long i=0;i<1000000;i++)
	if(hash1[i]!=0)
	ans++;
	
	if(hash1[1000000]>0)
	{
		while(hash1[1000000])
		{
			if(hash1[1000000]%2==1)
			{
				ans++;
			}
			hash1[1000000]/=2;
		}
	}
	cout<<ans<<"\n";
	
	/*
	while(1){
	long long f=0;
	for(long long i=1;i<n;i++)
	{
		if(arr[i]>=marker)
		break;
		if(arr[i]==arr[i-1])
		{arr[i]=arr[i]+1;f=1;arr[i-1]=marker;}
	}
	sort(arr,arr+n);
	if(f==0)
	break;
}
	sort(arr,arr+n);
	long long ans=0;
	for(long long i=0;i<n;i++){
		if(arr[i]>=marker)
		break;
		ans++;
		}
		cout<<ans<<"\n";*/
	return 0;
}
