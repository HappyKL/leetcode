//
// Created by KANG on 2019-08-13.
//
#include<vector>
#include<map>
using namespace std;
//一次遍历 O(n)  (思路要点要点：1.使用哈希; 2.一边建哈希一边查找)
class TwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> numsMap;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            numsMap.insert(pair<int, int>(nums[i], i));
            if(numsMap.find(target - nums[i]) != numsMap.end() && numsMap.find(target - nums[i])->second != i){
                result.push_back(numsMap.find(target - nums[i])->second);
                result.push_back(i);
                return result;
            }
        }
        return result;
    }
};



