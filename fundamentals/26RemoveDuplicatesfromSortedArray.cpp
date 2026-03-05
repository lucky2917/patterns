#include <iostream>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int currNum = nums[0], count=0, pos =0;
        for(int i = 1; i < nums.size();i++){
            if(currNum != nums[i]){
                pos++;
                nums[pos] = nums[i];
                currNum = nums[i];
            }
        }
        return pos+1;
    }
};