#include <iostream>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l =0, count = 0, product =1;
        if (k<=1) return 0;
        for(int i = 0; i < nums.size();i++){
            product*=nums[i];
            while(product >= k){
                product/=nums[l];
                l++;
            }
            count += i- l +1;
        }
        return count;
    }
};