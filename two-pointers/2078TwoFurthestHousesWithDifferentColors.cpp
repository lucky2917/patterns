#include <iostream>
using namespace std;
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int result = 0;
        if(colors[0]!=colors[n-1]) return n-1;
        for(int i = 1; i<n-1;i++){
            int val1=0;
            int val2=0;
            if(colors[0]!=colors[i]){
                val1 = i;
            }
            if(colors[n-1]!=colors[i]){
                val2 = abs(n-1-i);
            }
            result = max(result,max(val1,val2));
        }
        return result;
    }
};
