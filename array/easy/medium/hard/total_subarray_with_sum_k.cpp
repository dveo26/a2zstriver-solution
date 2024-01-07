#include <bits/stdc++.h>
using namespace std;
int findAllSubarraysWithGivenSum(vector<int> &arr,int k) 
{
    int left=0,right=0;
    int sum=arr[0];
    int count=0;
    int n=arr.size();
    while(right<n){
      if(right<n){
          right++;
          sum+=arr[right];
      }
      while(left<right&&sum>k){
          sum-=arr[left];
          left++;
      }
      if (sum == k) {
          count++;
      }
      return count;
    }
}