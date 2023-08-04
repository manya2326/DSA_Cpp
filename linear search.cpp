#include <bits/stdc++.h>
using namespace std;

int linearsearch(vector<int> nums, int key)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    cout << findNumbers({0, 1, 2, 3, 4, 5, 6, 7, 8}, 5);

    return 0;
}