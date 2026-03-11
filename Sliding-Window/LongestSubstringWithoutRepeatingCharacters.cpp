#include <iostream>
using namespace std;
#include <unordered_set>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int l = 0, count = 0;
        for(int r = 0;r< s.size();r++){
            while(st.count(s[r])){
               st.erase(s[l]);
               l++;
            }
            st.insert(s[r]);
            count = max(count, r-l+1);
        }
        return count;
    }
};
