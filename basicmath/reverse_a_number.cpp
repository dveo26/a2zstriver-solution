/*Given a signed 32-bit integer x, 
return x with its digits reversed. 
If reversing x causes the value to go
outside the signed 32-bit integer range
[-231, 231 - 1], then return 0*/
#include <bits/stdc++.h>
using namespace std;
int reverse(int x) {
        int sum=0;
        while(x){
            if(sum>INT_MAX/10 || sum<INT_MIN/10)
                return 0;
            sum=sum*10+x%10;
            x/=10;
        }
        
        return sum;
}
int main(){
    int n;
    cin >> n;
    cout << reverse(n) << endl;
    return 0;
}

