#include <iostream>
#include <vector>
using namespace std;

/*

This problem was recently asked by Apple:

Given an array of integers, arr, where all numbers occur twice except one number which occurs once, find the number. Your solution should ideally be O(n) time and use constant extra space.
Example:
Input: arr = [7, 3, 5, 5, 4, 3, 4, 8, 8]
Output: 7
class Solution(object):
  def findSingle(self, nums):
    # Fill this in.

nums = [1, 1, 3, 4, 4, 5, 6, 5, 6]
print(Solution().findSingle(nums))
# 3

*/

int findSingle(vector<int> nums) {
	int s=0;
	for (int i: nums)
		s^=i;

	return s;
}

int main(){
	cout << findSingle({7,3,5,5,4,3,4,8,8}) << "\n"; // 7
	cout << findSingle({1,1,3,4,4,5,6,5,6}) << "\n"; // 3
	return 0;
}