#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() != 0) {
            unordered_set<int> vistos;
            for (int num : nums) {
                if (vistos.count(num)) {
                    return true;
                }
                vistos.insert(num);
            }
            return false;
        }
        else {
            return false;
        }
    }
};