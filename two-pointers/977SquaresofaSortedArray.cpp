#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int lp = 0, rp =n-1,pos = n-1;
        while(lp<=rp){
            if(nums[lp]>=0){
                ans[pos] = nums[rp]*nums[rp];
                rp--;
                pos--;
            }
            else if(abs(nums[lp]) < abs(nums[rp])){
                ans[pos] = (nums[rp]*nums[rp]);
                rp--;
                pos--;
            }
            else{
                ans[pos] = (nums[lp]*nums[lp]);
                lp++;
                pos--;
            }
        }
        return ans;
    }
};