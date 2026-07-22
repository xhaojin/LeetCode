#include "Array/001.h"
#include "Array/053.h"
#include <iostream>

int main() {
	std::cout << "LeetCode Hot 100 测试程序" << std::endl;
	int n;
	while (std::cin >> n) {
		switch (n) {
		case 1: {
			std::vector<int> nums1 = { 3, 3 };
			Solution_001 solution;
			int target = 6;
			auto result = solution.twoSum(nums1, target);
			std::cout << "两个数的下标为: [" << result[0] << ", " << result[1] << "]" << std::endl;
			break;
		}
		case 53: {
			std::vector<int> nums53 = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
			Solution_053 solution;
			int result = solution.maxSubArray(nums53);
			std::cout << "最大子数组和为: " << result << std::endl;
			break;
		}

		default: {
			//std::cout << "无效的题号，请输入有效的题号。" << std::endl;
			break;
		}

		}
	}
	return 0;
}