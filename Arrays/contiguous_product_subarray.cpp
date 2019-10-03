#define pb push_back
#define mk make_pair
#define ll long long int
#define pp pair<ll,ll>
#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

using namespace std;

int count(int a[],ll k,int n)
{
	ll p=1;
	int res=0;
	for(int start=0,end=0;end<n;end++)
	{
		p*=a[end];
		while(start<end && p>=k)
			p/=a[start++];
			
		if(p<k){
			int len=end-start+1;
			res+=len;
		}
	}
	
	return res;
}
int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			int n;ll k;
			cin>>n>>k;
			int a[n];
			for(int i=0;i<n;i++)
				cin>>a[i];
				
			cout<<count(a,k,n)<<endl;
		}

	return 0;
	}


