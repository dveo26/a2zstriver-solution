/*check wether the number is armstron or not*/
#include <bits/stdc++.h>
using namespace std;
bool checkArmstrong(int n){
	int x=n,temp,d=0,c=0;
	while(x>0){
		c=c+1;
		x/=10;
	}
	x=n;
	while(x>0){
		temp=x%10;
		d+=pow(temp,c);
	    x/=10;
	}
	if(d==n)
		return true;
	else
		return false;
}
int main(){
    int n;
    cin >> n;
    cout << checkArmstrong(n) << endl;
    return 0;
}