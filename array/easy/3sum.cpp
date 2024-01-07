#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    vector<vector<int>> ans;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> triplet = {arr[i], arr[j], arr[k]};
                    sort(triplet.begin(),triplet.end());
                    bool exists = false;
                    for (const vector<int> &existingTriplet : ans)
                {
                    if (existingTriplet == triplet)
                    {
                        exists = true;
                        break;
                    }
                }

                if (!exists) {
                    ans.push_back(triplet);
                }
                }
            }
        }
    }
    return ans;
}
