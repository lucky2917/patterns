#include <iostream>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1) return {nums[0]};
        int maxpdt= 1, minpdt =1, result =0;
        for(int i = 0; i < nums.size();i++){
            int v1= nums[i];
            int v2 = nums[i]* maxpdt;
            int v3 = nums[i]* minpdt;

            maxpdt = max(nums[i], max(v2,v3));
            minpdt = min(nums[i], min(v2,v3));
            result = max(result, max(maxpdt, minpdt));
        }
        return result;
    }
};

