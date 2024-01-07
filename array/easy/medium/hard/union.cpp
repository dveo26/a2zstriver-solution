//find  the union of array
#include <iostream>
#include <vector>
using namespace std;

vector <int> unionarr(vector <int> &arr1,vector <int> &arr2){
    int n = arr1.size();
    int m = arr2.size();
    int i=0, j=0;
    vector <int> ans;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<n){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}

int main(){
    vector <int> arr1 = {1, 2, 3, 4, 5};
    vector <int> arr2 = {1, 2, 3};
    vector <int> ans = unionarr(arr1, arr2);
    for(auto i:ans){
        cout << i << " ";
    }
    return 0;
}