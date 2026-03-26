#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i = 0; i<nums.size();i++){
            mp[nums[i]]++;
        }
        unordered_map<int, vector<int>> ans;
        for(auto &x : mp){
            int key = x.second;
            int val = x.first;
            ans[key].push_back(val);
        }
        vector<int> result;
        for(int i = nums.size(); i >=1 && result.size()<k; i--){
            for(auto &x: ans[i]){
                result.push_back(x);
                if(result.size()==k) break;
            }
            
        }
        return result;
    }
};