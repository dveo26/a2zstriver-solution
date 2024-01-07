#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
	int n=v.size();
	map <int,int> mpp;
	for(int i=0;i<n;i++){
		mpp[v[i]]++;
	}
	for(auto val:mpp){
		if(val.second>n/2){
			return val.first;
		}
	}
	return -1;
}