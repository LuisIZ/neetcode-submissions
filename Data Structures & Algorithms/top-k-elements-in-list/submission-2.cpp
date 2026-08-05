#include<iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq_map;
        for (int num : nums) {
            freq_map[num]++;
        }
        int n = nums.size();
        vector<vector<int>> buckets(n+1);
        for (auto elem : freq_map) {
            int num = elem.first;
            int freq = elem.second;
            buckets[freq].push_back(num);
        }
        vector<int> result;
        for (int i=n; i>=0; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result; 
                }
            }
        }
        return result;
    }
};