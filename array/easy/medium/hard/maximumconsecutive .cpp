// maximim consecutive ones
#include <bits/stdc++.h>
using namespace std;
int traffic(int n, int m, vector<int>& vehicle) {
    int count = 0;
    int max_count = 0;
    int i = 0;
    int j = 0;

    while (j < n) {
        if (vehicle[j] == 0) {
            count++;
        }
        j++;

        while (count > m) {
            if (vehicle[i] == 0) {
                count--;
            }
            i++;
        }

        max_count = max(max_count, j - i);
    }

    return max_count;
}

int main(){
    
}