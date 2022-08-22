//#include<iostream>;
//using namespace std;
//
//class Base {
//public:
//	Base() {
//		cout << "Base 的构造函数执行" << endl;
//	}
//
//	virtual void Set() {
//		cout << "Base Set" << endl;
//	}
//
//	virtual ~Base() {
//		cout << "Base 的析构函数执行" << endl;
//	}
//
//	void Fun() {
//		cout << "Base Fun" << endl;
//	}
//};
//
//class A :public Base {
//public:
//	A() {
//		cout << "A 的构造函数执行" << endl;
//	}
//	void Set() {
//		cout << "A Set" << endl;
//	}
//
//	~A() {
//		cout << "A 的析构函数执行" << endl;
//	}
//
//	void Fun() {
//		cout << "A Fun" << endl;
//	}
//};
////现象：我们把父类Base的Set函数和析构函数分别加上virtual， 相比案例1，我们发现此时子类A的set函数和析构函数被执行了,而非虚函数Fun依然执行Base Fun。
////分析过程：我们以Base类型声明p2，p2实际是个A对象，此时虚函数：Set函数、析构函数 发生了动态绑定，绑定了动态类型，即该函数依赖于对象的动态类型，即
////运行时的类型A，而函数Fun由于静态绑定依然以Base fun执行
//// 理解：当某个virtual函数通过指针或引用调用时，编译器产生的代码直到运行时才能确定应该调用哪个版本的函数。
//// 被调用的函数是与绑定到指针或引用上的对象的动态类型相匹配的那一个。
//// 需要注意的是：动态绑定只有当我们通过指针或引用调用虚函数时才会发生。
//// non-virtual函数是静态绑定：因此“绝不重新定义继承而来的non-virtual函数”，
//// 因为这样会导致函数的调用类型由对象声明时的静态类型确定，而与对象本身脱离了关系。
//// 详见《Effective C++》条款36.
//void test() {
//	//Base* p = new Base;
//	//p->Set();
//	Base* p2 = new A;
//	p2->Set();
//	p2->Fun();
//	delete p2;
//}
//int main() {
//	test();
//	system("pause");
//	return 0;
//}