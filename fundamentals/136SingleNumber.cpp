#include <iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int x : nums){
            mp[x]++;
        }
        if(nums.size() ==1) return nums[0];
        for(int i = 0; i< nums.size();i++){
            if(mp[nums[i]]==1) return nums[i];
        }
        return -1;
    }
};