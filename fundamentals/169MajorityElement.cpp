#include <iostream>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;
        for(int i =0; i< nums.size(); i++){
            if(count ==0){
                candidate = nums[i];
                count++;
            }
            else if(candidate == nums[i]){
                count++;
            }
            else{
                count--;
            }

        }
        int freq = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==candidate){
                freq++;
            }
        }
        if(freq>(nums.size()/2)){
            return candidate;
        }
        return -1;
    }
};