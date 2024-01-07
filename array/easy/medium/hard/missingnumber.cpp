#include <bits/stdc++.h>
using namespace std;

int missing(vector <int> arr){
    int n = arr.size();
    int sum = 0;
    for(auto i:arr){
        sum += i;
    }
    int total = (n+1)*(n)/2;
    return total - sum;
}



int main(){
    vector <int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    cout << missing(arr) << endl;
    return 0;
}