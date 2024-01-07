//find multiple missing elements in array
#include <bits/stdc++.h>
using namespace std;
vector <int> missed(vector <int> arr){
    int n = arr.size();
    int max = *max_element(arr.begin(), arr.end());
    int hash[max] = {0};
    for(auto i:arr){
        hash[i-1]++;
    }
    vector <int> ans;
    for(int i=0;i<max;i++){
        if(hash[i]==0){
            ans.push_back(i+1);
        }
    }
    return ans;
}

int main(){
    vector <int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    vector <int> ans = missed(arr);
    for(auto i:ans){
        cout << i << " ";
    }
    return 0;
}