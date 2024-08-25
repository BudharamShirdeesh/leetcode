#include<iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n == 0 || n == 1 || n == 2){
            return n;
        }
        
        int f = 1;
        int s = 2;
        int result;
        
        for(int i = 3; i <= n; i++){
            result = f + s;
            f = s;
            s = result;
        }
        return result;
    }
};
