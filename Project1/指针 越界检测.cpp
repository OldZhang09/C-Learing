////程序A 
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> a;
//	a.reserve(13);
//	for (int i = 0; i < 10; i++) a.push_back(i);
//	//end()取到的是最后一个元素的后一个元素
//	vector<int>::iterator it = a.end();
//	//会报错，因为越界了？
//	//it++;
//	//没问题
//	it--;
//	system("Pause");
//	return 0;
//}