#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> v) {
vector <int> majority;
int n=v.size();
map <int,int> mpp;
for(int i=0;i<n;i++){
	mpp[v[i]]++;
}
for(auto val:mpp){
	if(val.second>n/3)
		majority.push_back(val.first);
}
return majority;
}