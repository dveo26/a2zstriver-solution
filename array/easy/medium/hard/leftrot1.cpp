//left rotate an array 
#include <bits/stdc++.h>
using namespace std;

vector <int> leftrot(vector <int> arr){
    int temp = arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1]=arr[i];
    }
    arr[arr.size()-1]=temp;
    for(auto val:arr)
        cout << val << " ";
    return arr;
}
//left rotate an array by d places
vector <int> leftrotd(vector <int> arr1,int d){
    int n = arr1.size();

    for (int i = 0; i <= d;i++){
        int temp = arr1[0];
        for(int i=1;i<arr1.size();i++){
        arr1[i-1]=arr1[i];
    }
    arr1[arr1.size()-1]=temp;
    }
    for(auto val:arr1)
        cout << val << " ";
    return arr1;
}

int main(){
    vector<int> arr;
    int n;
    int d;
    cout<<"please enter the size of array"<<endl;
    cin >> n;
    cout<<"please enter the elements in an array"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout << "please enter the number of times you want to rotate the array" << endl;
    cin >> d;
    cout<<"the array after one left rotation is "<<endl;
    leftrot(arr);
    cout<<endl;
    cout<<"the array after "<<d<<" left rotations is "<<endl;
    leftrotd(arr, d);
    return 0;
}