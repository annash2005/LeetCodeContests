
#include <iostream>
#include <vector>
#include <unordered_map> 

using namespace std;
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
         std::unordered_map<int, int> countMap;
       for (int num : nums) {
        countMap[num]++;
    }
        int result = 0;
    
    for (const auto& entry : countMap) {
        if (entry.second == 2) {
            result ^= entry.first;
        }
    }
    return result;
    }
};