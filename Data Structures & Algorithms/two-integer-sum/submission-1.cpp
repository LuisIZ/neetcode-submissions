#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> vistos; 

        for (int i = 0; i < nums.size(); i++) {
            int complemento = target - nums[i];

            if (vistos.count(complemento)) {
                return {vistos[complemento], i};
            }

            vistos[nums[i]] = i;
        }
    }
};