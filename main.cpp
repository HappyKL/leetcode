#include <iostream>
#include "twoSum.cpp"
int main() {
    TwoSum twoSum;
    std::cout << "Hello, World!" << std::endl;
    vector<int> nums = {12,2,3,43,4};
    vector<int> result = twoSum.twoSum(nums,14);
    for(int i = 0;i< result.size();i++)
        cout << result[i] << endl;
    return 0;
}