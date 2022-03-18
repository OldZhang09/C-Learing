//#include<iostream>;
//using namespace std;
//
//class Base {
//public:
//	Base() {
//		cout << "Base 的构造函数执行" << endl;
//	}
//
//	void Set() {
//		cout << "Base Set" << endl;
//	}
//
//	~Base() {
//		cout << "Base 的析构函数执行" << endl;
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
//};
////该案例中，p2以Base类型去声明，此时p2发生了静态绑定，即使p2实际上一个A对象，但是因为他被静态绑定了类型Base
//// 所以p2会调用Base set,析构函数同理，A的析构这里不会被调用。
////以上发生的案例称之为多态 为了解决多态我们需要用到虚函数，详见02
//
// /*************重要提示，c++中构造函数被禁止使用多态，例如该案例中Base和A的构造函数都被执行了，构造函数体内的多态都不会发生，构造函数本身也不能为虚函数
// 原因深入了解参照 ：https://zhuanlan.zhihu.com/p/368257182          ***************/
//void test() {
//	//Base* p = new Base;
//	//p->Set();
//	Base* p2 = new A;
//	p2->Set();
//	delete p2;
//}
//int main() {
//	test();
//	system("pause");
//	return 0;
//}