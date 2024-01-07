/*return an array containing second smallest and second largest element*/
#include <bits/stdc++.h>
using namespace std;
vector <int> second1(vector <int> arr){
    int n=arr.size();
    int max=arr[0],min=arr[0];
    int second_max=arr[0],second_min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    for(int j=0;j<n;j++){
        if(arr[j]>second_max && arr[j]!=max)
            second_max=arr[j];
        if(arr[j]<second_min && arr[j]!=min)
            second_min=arr[j];
    }
    vector <int> res;
    res.push_back(second_min); 
    res.push_back(second_max);
    return res;

    
}

vector <int> second2(vector <int> arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector <int> res;
    res.push_back(arr[1]);
    res.push_back(arr[n-2]);
    return res;
}

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
    vector <int> res1=second1(arr);
    vector <int> res2=second2(arr);
    cout<<"the second smallest and second largest element in array are "<<res1[0]<<" "<<res1[1]<<endl;
    cout<<"the second smallest and second largest element in array are "<<res2[0]<<" "<<res2[1]<<endl;
    return 0;
}