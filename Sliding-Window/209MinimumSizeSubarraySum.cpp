//209. Minimum Size Subarray Sum - lc
#include <iostream>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l =0, sum =0, length = 0, minlength =INT_MAX;
        for(int r = 0; r < nums.size(); r++){
            sum+=nums[r];
            
            if(sum>=target){
                while(sum>=target){
                    sum-=nums[l];
                    l++;
                }
                l--;
                sum+=nums[l];
                length = r-l+1;
                minlength = min(minlength, length);
            }



        }
        if(minlength == INT_MAX){
            minlength = 0;
        }
        return minlength;
    }
};