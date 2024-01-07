/*find the largest element in array*/
#include <bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
            res = i;
    }
    return res;
}
int main(){
    int n;
    int a[n];
    cout<<"please enter the size of array"<<endl;
    cin >> n;
    cout<<"please enter the elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"the largest element in array is "<<a[largestElement(a, n)]<<endl;
    return 0;
}
