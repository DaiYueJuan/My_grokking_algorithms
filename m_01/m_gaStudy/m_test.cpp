#include "m_test.h"

// 4.1 [2/13/2025 DaiYueJuan]
int Sum(vector<int>& arr,int sum)
{
	//int sum;
	if (arr.size()==0){
		return sum;
	} 
	else{
		int temp = arr.size() - 1;
		int a = arr[temp];
		arr.pop_back();
		//sum += a;
		sum = a + Sum(arr,sum);
	}
}


// 这个好很多！ [2/13/2025 DaiYueJuan]
template <typename T>
T sum(std::vector<T> arr) {
	if (arr.empty()) return 0;

	T last_num = arr.back(); // save last number value
	arr.pop_back();  // and remove it from array for next recursive call
	return last_num + sum(arr);
}

