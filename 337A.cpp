#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	int arr[100000];
	for(int i=0;i<m;i++)
	cin>>arr[i];
	sort(arr,arr+m);
	int ans=1000000;
	int i=0;
	while(i+n-1<m)
	{
		if(ans>arr[i+n-1]-arr[i])
		ans=arr[i+n-1]-arr[i];
		i+=1;
	}
	cout<<ans;
	return 0;
}
