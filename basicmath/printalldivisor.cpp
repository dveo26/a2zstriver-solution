/*sum of divisors of all the numbers upto n*/
#include <bits/stdc++.h>
using namespace std;
int sumOfAllDivisors(int n){
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++){
                  if (i % j == 0) {
                    sum += j;
                  }
                }
             
        }
    return sum;
}
int main(){
    int n;
    cin >> n;
    cout << sumOfAllDivisors(n) << endl;
    return 0;
}