#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;
class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        vector<int> diff(nums.size());
        long count = 0;
        for(int i = 0; i < nums.size(); i++) {
            diff[i] = target.at(i) - nums.at(i);
        }
        int past = 0;
        for(int i = 0; i < diff.size(); i++) {
            if (i == 0 || (diff[i] > 0 && past <= 0) || (diff[i] < 0 && past >= 0)) {
                count += abs(diff[i]);
                
            } else if(abs(diff[i]) > abs(past)) {
                count += (abs(diff[i]) - abs(past));
            }
            past = diff[i];
        }

        return count;
    }
};