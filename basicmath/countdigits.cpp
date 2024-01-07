//Problem Statement
//you are given a number n
//you need to count the number of digits in n
//that are divisible by n

#include <bits/stdc++.h>
int countDigits(int n){
	
	int x = n ; int c = 0 ;
	while(x>0)
	{
		int d = x%10;
		if(d != 0)
		{
                  if (n % d == 0) {
                    c = c + 1;
                  }
                }
                x = x/10 ;
	}
	return c ;
}

int main(){
    int n;
    std::cin >> n;
    std::cout << countDigits(n) << std::endl;
    return 0;
}


