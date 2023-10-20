#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    /*long long maximumTripletValue(vector<int>& nums) 
    {
        long long max, triplet;
        max = triplet = 0;
        for(int k = 0; k < nums.size(); k ++)
        {
            for(int j = 0; j < k; j ++)
            {
                for(int i = 0; i < j; i ++)
                {
                    triplet = ((nums[i] - nums[j])*nums[k]);
                    if (max < triplet)  max = triplet;
                }
            }
        }
        return max > 0 ? max : 0;
    }*/

int main()
{
    vector<int> nums {12,6,1,2,7};
    sort(nums.begin(), nums.end());
    //cout<< maximumTripletValue(nums);
    swap(nums[1], nums[2]);
    cout<<nums[2]<<nums[1];
}