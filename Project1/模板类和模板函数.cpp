//#include<iostream>
//using namespace std;
//#include<string>;
//
//
////模板类
//template<class T1, class T2> class Person {
//public:
//	Person(T1 age, T2 name) {
//		this->age = age;
//		this->name = name;
//		//cout << "构造函数" << endl;
//	}
//	void showPerson() {
//		cout << "name:" << this->name << endl;
//	}
//	T1 age;
//	T2 name;
//};
//
////模板函数
//template<typename T, typename G> void Func(T& a, G& b) {
//	cout << "形参 a的类型为" << typeid(a).name() << endl;
//	cout << "形参 b的类型为" << typeid(b).name() << endl;
//};
//
////普通函数 形参是指定类型的模板类
//void Func2(Person<int, string>& p) {
//	p.showPerson();
//	//cout << "形参 p的类型为" << typeid(p).name() << endl;
//}
//
////模板函数 形参是未指定类型的模板类
//template<typename T3, typename T4> void Func3(Person<T3, T4>& p) {
//	p.showPerson();
//}
//
////模板函数 形参是类
//template<class P> void Func4(P& p) {
//	p.showPerson();
//}
//
//void test1() {
//	//使用模板类
//	Person<int, string>p(100, "孙悟空");
//	p.showPerson();
//
//	//使用模板函数
//	int a = 100;
//	string b = "孙悟空";
//	//1).自动类型推导
//	Func(a, b);
//	//2).显示指定类型
//	Func<int, string>(a, b);
//
//	//同时使用类模板和函数模板
//	//1)类模板的对象作为普通函数的参数
//	Func2(p);
//	//2)类模板的对象作为函数模板的参数
//	Func3(p);
//	//3)类模板的对象作为函数模板的参数
//	Func4(p);
//
//}
//
//int main() {
//	test1();
//	system("pause");
//	return 0;
//}
