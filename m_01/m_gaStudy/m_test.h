#include<iostream>
#include <vector>
using namespace std;

// 4.1用递归实现对数组的求和 [2/13/2025 DaiYueJuan]
int Sum(vector<int>& arr,int sum);

// 4.2编写一个递归函数来计算列表包含的元素数。 [2/13/2025 DaiYueJuan]
template <typename T>
int Count(vector<T>& arr)
{
	if (arr.empty()) return 0;
	arr.pop_back();
	return 1 + Count(arr);
}

// 4.3找出列表中最大的数字 [2/13/2025 DaiYueJuan]
template <typename T>
T Max(vector<T>& arr) {
	if (arr.empty()) {
		cout << "arr is NULL" << endl;
		return 0;
	}
	T max = arr.back();
	arr.pop_back();
	return max > Max(arr) ? max : Max(arr);
}
// 这两句写得比我好 [2/13/2025 DaiYueJuan]
//if (arr.empty()) throw std::invalid_argument("Cannot select max value from empty sequence");
//if (arr.size() == 1) return arr.at(0);

/*std::invalid_argument 是标准库中的异常类，用来表示参数错误。在这种情况下，空数组被认为是无效的输入。
throw 关键字用于抛出异常，让程序跳转到相应的 catch 块中处理异常。*/

//  [2/13/2025 DaiYueJuan]