/*
 * [217] Contains Duplicate
 *
 * https://leetcode.com/problems/contains-duplicate/description/
 *
 * algorithms
 * Easy (49.84%)
 * Total Accepted:    283.7K
 * Total Submissions: 567.4K
 * Testcase Example:  '[1,2,3,1]'
 *
 * Given an array of integers, find if the array contains any duplicates.
 * 
 * Your function should return true if any value appears at least twice in the
 * array, and it should return false if every element is distinct.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,3,1]
 * Output: true
 * 
 * Example 2:
 * 
 * 
 * Input: [1,2,3,4]
 * Output: false
 * 
 * Example 3:
 * 
 * 
 * Input: [1,1,1,3,3,4,3,2,4,2]
 * Output: true
 * 
 */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
//	set<int>set;
//	for (auto n:nums)set.insert(n);
//	if(set.size()<nums.size())return true;
//	else return false;
	if (nums.size()<1)return false;
	sort (nums.begin(),nums.end());
	for (int i=0;i<nums.size()-1;i++)
	{
	    if (nums[i] == nums[i+1])
		return true;
	}
	return false;
    }
};
