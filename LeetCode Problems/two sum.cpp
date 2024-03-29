#include<iostream>

using namespace std;

int main()
{
    int totalElement;
    cout << "Enter Total Number of Element: " ;
    cin >> totalElement;
    int nums[totalElement];
    int target;

    if(totalElement >= 2)
    {
        cout << "Enter Array Elements: ";
        for(int indice = 0; indice < totalElement; indice++){
            cin >> nums[indice];
        }
        cout << "Enter target: ";
        cin >> target;

        for(int i=0; i<totalElement; i++)
        {
            int sum = 0;
            for(int j=i+1; j<totalElement; j++)
            {
                sum = nums[i] + nums[j];

                if(sum == target)
                {
                    cout << "[" << i << "," << j << "]" << endl;
                    break;
                }
            }
        }
    }

    return 0;
}

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.


Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/

/*
solution:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> arr;
        int flag=1;
        for(int i=0; i<nums.size(); i++)
        {
            int sum = 0;
            for(int j=i+1; j<nums.size(); j++)
            {

                sum = nums[i] + nums[j];

                if(sum == target && flag == 1)
                {
                    arr.push_back(i);
                    arr.push_back(j);
                    flag = 0;
                }
            }
        }
        return arr;
    }
};
*/

