#include <iostream>
using namespace std;
class Solution {
public:
    bool validDigit(int n, int x) {
        int f = n;
        int v;
        while(f>=10){
            f/=10;
        }
        if(f==x) return false;
        while(n>0){
            if(n%10==x) return true;
            n/=10;
        }
        return false;
    }
};