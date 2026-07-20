#pragma once

#include <vector>

/*
* 53. 最大子数组和
* 给你一个整数数组 nums ，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
* 子数组是数组中的一个连续部分。
*
* 示例 1：
* 输入：nums = [-2,1,-3,4,-1,2,1,-5,4]
* 输出：6
* 解释：连续子数组 [4,-1,2,1] 的和最大，为 6 。
*
* 示例 2：
* 输入：nums = [1]
* 输出：1
*
* 示例 3：
* 输入：nums = [5,4,-1,7,8]
* 输出：23
*/

/*
* 思路1：暴力求解，遍历所有子数组，计算每个子数组的和，记录最大值。时间复杂度为 O(n^2)。
*/

class Solution_053 {
public:
	int maxSubArray(std::vector<int>& nums) {
		int maxSum = nums[0];
		for (int i = 0;i < nums.size();i++) {
			int sum = 0;
			for (int j = i;j < nums.size();j++) {
				sum += nums[j];
				if (sum > maxSum) {
					maxSum = sum;
				}
			}
		}
		return maxSum;
	}
};