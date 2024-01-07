/*you are given two integers
'n' and 'm' calculate gcd*/
#include <bits/stdc++.h>
using namespace std;
int calcGCD(int n, int m){
    int gcd=0;
    for(int i=1;i<=m||i<=n;i++){
      if (n % i == 0 && m % i == 0) {
        gcd = i;
      }
    }
    return gcd;

}
int main(){
    int n,m;
    cin >> n >> m;
    cout << calcGCD(n,m) <<endl;
    return 0;
}