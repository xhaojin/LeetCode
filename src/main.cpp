#include "Array/053.h"
#include <iostream>

int main() {
	std::cout<<"LeetCode Hot 100 测试程序"<<std::endl;
	int n;
	while (std::cin>>n) {
		switch (n) {
			case 53: {
				std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
				Solution_053 solution;
				int result = solution.maxSubArray(nums);
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