#include <bits/stdc++.h>
using namespace std;
bool checkPrime(int n){
    if(n==1)
        return false;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    cout << checkPrime(n) << endl;
    return 0;
}