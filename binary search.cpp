#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> &nums, int key)
{

    int s = 0;
    int e = nums.size() - 1;

    while (s <= e)
    {

        int mid = s + (e - l) / 2;

        if (nums[mid] == key)
            return mid;

        else if (nums[mid] < key)
            s = mid + 1;

        else
            e = mid - 1;
    }

    return -1;
}

int main()
{
    vector<int> arr = {0, 0, 1, 3, 4, 5, 7, 8, 9};
    cout << binarysearch(arr, 9);
}