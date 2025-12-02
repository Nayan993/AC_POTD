#include<iostream>
#include<vector>
#include<map>
using namespace std;


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> freq;
        for(auto &p : nums) freq[p]++;
        int sum = 0;
        for(auto &it : freq) sum+=(it.second*(it.second-1)/2);
        return sum;
    }
};