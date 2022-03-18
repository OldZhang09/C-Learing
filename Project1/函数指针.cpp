//#include<iostream>;
//using namespace std;
//
//class A {
//public:
//	int a1;
//	int a2;
//	virtual void fun1() {}
//	static void fun2() {};
//	void fun3() {
//		cout << "执行非静态成员函数fun3" << endl;
//	};
//};
//
//void fun3(){
//
//};
////非静态成员函数指针只能用于函数调用，不能输出？
//int main() {
//	A a1;
//	//定义函数指针p
//	void(*p)(void);
//	p = &A::fun2;
//	cout << "静态成员函数指针" << p << endl;
//	p = &fun3;
//	cout << "普通函数指针" << p << endl;
//	a1.fun3();
//
//
//	//通过typedef定义 非静态成员函数指针
//	typedef void(A::* PathOfFun)(void);
//	//这样打印1为什么？
//	PathOfFun p3 = &A::fun3;
//	cout << "普通成员函数指针" << p3 << endl;
//	A a2;
//	//通过对象调用 解函数指针
//	(a2.*p3)();//相当于a2.fun3();
//	//通过类指针调用
//	A *p_a3 = new A;
//	(p_a3->*p3)();
//	
//	system("pause");
//	return 0;
//}