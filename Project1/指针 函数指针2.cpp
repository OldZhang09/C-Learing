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
//	void fun4(int a , int b) {
//		this->a1 = a;
//		this->a2 = b;
//		cout << "执行非静态成员函数fun4" << endl;
//	};
//};
//
////int main() {
////	typedef void(A::* PathOfFun4)(int a, int b);
////	PathOfFun4 p4 = &A::fun4;
////	//cout << "普通成员函数fun4指针" << p4 << endl;
////	printf("%p\n", p4);
////	system("pause");
////	return 0;
////}
//
//void fun3(){
//
//};
//
//// 稍微再复杂一点点，返回值是一个函数指针：(光是普通函数返回函数指针，语法就有点费劲。我们一步一步来：)
////// 首先搞一个返回void的普通函数：
////void f() {};
////// 假设返回一个函数指针，这个函数指针返回值和参数都为空。我们用一个函数指针替换掉返回值void就可以了
////// 感觉应该写成这样：void (*fp)() f();
////// 但是这个样子显然过不了编译的，得要变一下：
//void (*f())();         //这就是一个参数为空，返回函数指针的函数。
//void (*(*f_ptr)())();    //把f替换成(*f_ptr)，这就成了返回函数指针的函数指针。
////以上这种方法定义太抽象，所以我们使用typedef，请看函数指针2，深入请看https://zhuanlan.zhihu.com/p/168627944
////非静态成员函数指针只能用于函数调用，不能输出？
//int main() {
//	A a1;
//	//定义函数指针p
//	//你可以将一种类型的函数指针转换成另一种函数指针类型，但你不可以将一个函数指针指向一个void *型的数据指针。
//	void(*p)(void);
//	p = &A::fun2;
//	cout << "静态成员函数指针" << p << endl;
//	p = &fun3;
//	cout << "普通函数指针" << p << endl;
//	a1.fun3();
//
//	//非静态成员函数指针
//	void(A:: * PathOfFun1)(void);
//	PathOfFun1 = &A::fun3;
//	//通过typedef定义 非静态成员函数指针
//	typedef void(A::* PathOfFun)(void);
//	typedef void(A::* PathOfFun4)(int a,int b);
//	
//	//这样打印1为什么？因为成员函数只有在被调用的时候 C++才会结合this指针通过固定的偏移量找到函数的真实地址调用。
//	// 直接输出p3 没有提供任何this指针，输出1应该是编译器给了一个默认值
//	/*与静态函数不同，成员函数在被调用时，必须要提供this指针。
//	因为在它被调用之前，自己也不知道哪个对象的此函数被调用。所以通过& 拿到的不是实际的内存地址。
//	只有调用的时候，C++才会结合this指针通过固定的偏移量找到函数的真实地址调用。
//	*/
//	PathOfFun p3 = &A::fun3;
//	//cout << "普通成员函数fun3指针" << p3 << endl;
//	printf("普通成员函数fun3指针%p\n", p3);
//	cout << "普通成员函数fun3指针的大小为" << sizeof(p3) << endl;
//		
//	PathOfFun4 p4 = &A::fun4;
//	printf("普通成员函数fun4指针%p\n", p4);
//	cout << "普通成员函数fun4指针的大小为" << sizeof(p4) << endl;
//
//	A a2;
//	//通过对象调用 解函数指针
//	(a2.*p3)();//相当于a2.fun3();
//	(a2.*p4)(3,4);
//	//通过类指针调用 前面的（）是必要的，因为调用()的优先级高于->*
//	A *p_a3 = new A;
//	(p_a3->*p3)();
//
//	
//	system("pause");
//	return 0;
//}