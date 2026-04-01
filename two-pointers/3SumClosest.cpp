#include <iostream>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());

        int closeSum = nums[0]+nums[1]+nums[2];
        for(int i = 0; i < nums.size()-2; i++){
            int l = i+1;
            int r = nums.size()-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==target) return sum;
                int cond1 = abs(target-sum);
                int cond2 = abs(target-closeSum);
                if(cond1<cond2){
                    closeSum = sum;
                }
                else if(sum<target){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return closeSum;
    }
};