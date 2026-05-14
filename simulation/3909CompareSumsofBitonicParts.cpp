#include <iostream>
using namespace std;
class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long long as = nums[0], ds = 0,max=nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                as+=nums[i];
                max = nums[i];
            }
            else if(nums[i]<nums[i-1]) ds+=nums[i];
        }
        ds+=max;
        if(as>ds) return 0;
        else if(as<ds) return 1;
        return -1;
    }
};