/*Given an integer x, return true if x
is a palindrome, and false otherwise.*/
#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{   int x=n;
    if(x<0||x%10==0&&x!=0)
        return false;
        int sum{0};
        while(x>sum){
            sum=sum*10+x%10;
            x/=10;
        }
        return (x==sum||x==sum/10);
    
}
int main(){
    int n;
    cin >> n;
    cout << palindrome(n) << endl;
    return 0;
}