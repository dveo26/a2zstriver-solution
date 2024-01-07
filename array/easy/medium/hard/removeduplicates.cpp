//remove duplicates from sorted array
#include <bits/stdc++.h>
using namespace std;

int remdup(vector<int> arr){
    int n=arr.size();
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res]){
            res++;
            arr[res]=arr[i];
        }
    }
}
//by hashing
int remdup2(vector<int> arr){
    int n = arr.size();
    int hash[1000]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<1000;i++){
        if(hash[i]>0)
            cout<<"our duplicate element is "<<i<<" and it's frequency is "<<hash[i]<<endl;
    }
    return 0;}
int main(){
    int n;
    cout<<"please enter the size of array"<<endl;
    cin>>n;
    vector <int> arr;
    cout<<"please enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    remdup(arr);
    remdup2(arr);
    return 0;
}
    
    