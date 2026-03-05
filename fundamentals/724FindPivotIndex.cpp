#include <iostream>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sa(nums.size());
        vector<int> ea(nums.size());
        sa[0] = nums[0];
        if(nums.size() == 1) return 0;
        ea[nums.size()-1] = nums[nums.size()-1];

        for(int i = 1; i < nums.size();i++){
            sa[i] = nums[i] + sa[i-1];
        }
        for(int i = nums.size()-2; i >= 0; i--){
            ea[i] = nums[i]+ea[i+1];
        }
        if(ea[1]==0) return 0;
        for(int i =1;i< nums.size()-1;i++){
            if(sa[i-1] == ea[i+1]){
                return i;
            }
        }
        
        if(sa[nums.size()-2] == 0) return nums.size()-1;
        return -1;
    }
};