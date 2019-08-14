#include <iostream>
#include <stack>
#include "1-twoSum.cpp"
int main() {
    //---------------------------- leetcode 1 twoSum ----------------------------
    TwoSum twoSum;
    std::cout << "Hello, World!" << std::endl;
    vector<int> nums = {12,2,3,43,4};
    vector<int> result = twoSum.twoSum(nums,14);
    for(int i = 0;i< result.size();i++)
        cout << result[i] << endl;

    //---------------------------- leetcode 2



    //----------------------------
    stack<int> abc;
    printf("abc %d",abc.size());

    if(abc.empty()){
        printf("bcd");
    }
    return 0;
}