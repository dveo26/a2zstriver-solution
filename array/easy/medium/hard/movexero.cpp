//move zeros to the end of the array
#include <bits/stdc++.h>
using namespace std;

vector <int> move0(vector <int> &arr){
    int n = arr.size();
    int i=0, j=0;
    for (int j = 0; j < n;j++){
        if(arr[j]!=0){
            arr[i] = arr[j];
            i++;
        }
    }
    for(int k=i;k<n;k++){
        arr[k] = 0;
    }
    return arr;
}
int main(){
    vector <int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    vector <int> ans = move0(arr);
    for(auto i:ans){
        cout << i << " ";
    }
    return 0;
}

