//#include <iostream>
//#include <vector>
//using namespace std;
//
////vector强调的是通过随机存取的效率。
////list强调的是插入和删除元素的效率。
////迭代器（iterator）可以理解为指针：
////vector<类型名>::iterator 变量名;
//int main() {
//	vector<int> v;
//	//初始化容器
//	for (int n = 0; n < 5; ++n) {
//		//push_back在队列尾部添加
//		v.push_back(n);
//	}
//	//一般写法 it相当于容器首部的指针
//	vector<int>::iterator it = v.begin();
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << *(it + i) << " "<< endl;
//	}
//	//优雅写法
//	for (vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
//		//这里像指针一样解引用
//		cout << *i << " " << endl;;
//	}
//
//	//c++11引入了auto,可以在声明变量的时候根据变量初始值的类型自动为此变量选择匹配的类型
//	//于是上面代码可以这样写 更加简洁
//	for (auto i = v.begin(); i != v.end(); ++i) {
//		cout << *i << " " << endl;;
//	}
//	
//	system("pause");
//	return 0;
//}