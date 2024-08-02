#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
     std::vector<int> result;
        std::vector<int> it;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) {
                it.push_back(i);
            }
        }
        for (int i = 0; i < queries.size(); i++) {
            if (queries[i]  <  0 || queries[i] > it.size()) {
                result.push_back(-1);
            } else {
                result.push_back(it[queries[i]-1]);
            }
        }
        return result;
    }
};