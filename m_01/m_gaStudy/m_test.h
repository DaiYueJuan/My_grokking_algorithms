#include<iostream>
#include <vector>
using namespace std;

// 4.1�õݹ�ʵ�ֶ��������� [2/13/2025 DaiYueJuan]
int Sum(vector<int>& arr,int sum);

// 4.2��дһ���ݹ麯���������б������Ԫ������ [2/13/2025 DaiYueJuan]
template <typename T>
int Count(vector<T>& arr)
{
	if (arr.empty()) return 0;
	arr.pop_back();
	return 1 + Count(arr);
}

// 4.3�ҳ��б����������� [2/13/2025 DaiYueJuan]
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
// ������д�ñ��Һ� [2/13/2025 DaiYueJuan]
//if (arr.empty()) throw std::invalid_argument("Cannot select max value from empty sequence");
//if (arr.size() == 1) return arr.at(0);

/*std::invalid_argument �Ǳ�׼���е��쳣�࣬������ʾ������������������£������鱻��Ϊ����Ч�����롣
throw �ؼ��������׳��쳣���ó�����ת����Ӧ�� catch ���д����쳣��*/

//  [2/13/2025 DaiYueJuan]