#include <iostream>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int large = 0;
        for(int i =0; i<k; i++){
            large+=arr[i];
        }
        if(arr.size()==k) return large;
        int sum=large;
        for(int i = k; i< arr.size();i++){
            sum = sum +arr[i] -arr[i-k];
            large = max(sum, large);
        }
        return large;
    }
};