//you are given a sorted array 'arr' of positive integers of size 'n'
//it contains each number exactly twice except for one number,which occurs exactly once
//method 1
#include <bits/stdc++.h>
using namespace std;
//by hash table
int getSingleElement(vector<int> &arr){
  int n=arr.size();
  int x=arr[n-1];
  vector <int> hash(x+1,0);
  for(int i=0;i<n;i++){
	  hash[arr[i]]++;
  }
  for (int j = 0; j < x+1; j++) {
          if (hash[j] == 1)
            return j;
  }
  return -1;
}
//by xorr
//properties of xorr
//XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1
//XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a.  ←Property 2
int getSingleElement(vector<int> &arr) {
	int xorr=0;
	for(int i=0;i<arr.size();i++){
		xorr=xorr^arr[i];
	}
	return xorr;
}
//loop method
int getSingleElement(vector<int> &arr) {
	int n = arr.size();

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int cnt = 0;

        for (int j = 0; j < n; j++) {
          if (arr[j] == num)
            cnt++;
        }
        if (cnt == 1)
			 return num;
    }
return -1;
}