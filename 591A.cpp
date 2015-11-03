#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	
	long long l;
	cin>>l;
	long long p,q;
	cin>>p>>q;
	long double ans= (1.0*(l*p))/(p+q);
	cout<<ans;
	
	return 0;
}
