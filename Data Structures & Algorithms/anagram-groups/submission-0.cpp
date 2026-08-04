#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapaAnagramas;
        for (int i = 0; i < strs.size(); i++) {
            string palabra = strs[i];
            string firma(26, 0); 
            for (int j = 0; j < palabra.length(); j++) {
                firma[palabra[j] - 'a']++; 
            }   
            mapaAnagramas[firma].push_back(palabra);
        }
        vector<vector<string>> result;
        for (auto grupo : mapaAnagramas) {
            result.push_back(grupo.second);
        }
        return result;
    }
};