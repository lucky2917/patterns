#include <iostream>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int n=height.size();
        int l = 0;
        int r = n-1;
        while(l<r){
            int h = min(height[l],height[r]);
            int width = (r-l);
            int currArea = width*h;
            maxArea = max(currArea, maxArea);
            if(height[l] <= height[r]){
                l++;
            }
            else{
                r--;
            }
        }
    return maxArea;
    }
};