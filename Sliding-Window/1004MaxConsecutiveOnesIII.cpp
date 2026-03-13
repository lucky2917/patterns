#include <iostream>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l =0, maxcount = 0;
        for(int r=0; r<nums.size(); r++){
            if(nums[r]==0) k--;
            while(k<0){
                if(nums[l]==0) k++;
                l++;
            }
            maxcount = max(maxcount, r-l+1);
        }
        return maxcount;
    }
};