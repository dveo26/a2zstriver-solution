#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(target==nums[i]+nums[j]){
                    res.push_back(i);
                    res.push_back(j);
                }
            }
             }
 return res;}
 //codeninja problem
 string read(int n, vector<int> book, int target)
{
    string s1="NO";
    
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(target==book[i]+book[j]){
                    s1="YES";
                }
            }
    }
    return s1;
}
