//#include<iostream>;
//using namespace std;
//
//class Base {
//public:
//	/*int aa;
//	int bb;*/
//
//	virtual void f() {
//		cout <<"Base::f"<< endl;
//	}
//	virtual void g() {
//		cout << "Base::g" << endl;
//	}
//	virtual void h() {
//		cout << "Base::h" << endl;
//	}
//
//};
//
//int main() {
//	typedef void(*Fun)(void);
//	Base b;
//	Fun pfun = NULL;
//	//下面的p和p2是同一地址，都是对象b的地址，同时，由于虚函数指针在对象的内存中是从头部开始的，p和p2同时也是虚函数表的地址
//	// 那么我们是否可以用 *p或*p2 解出虚函数表的实际内容
//	//因为指针p指派了类型，限定了指针的跳跃能力，即只能跳跃Base类型对象的内存长度
//	//指针p2 没有指派类型，所有类型的指针都能被赋值给p2;
//	//虽然p和p2指向了同一地址，但是当我们*p输出是不被允许的，因为它是Base类型，只有强制转换后（int*）,p指向的虚函数表地址才能被输出
//	//而p2同理
//	Base* p = &b;
//	void* p2 = &b;
//	//cout << "对象b的地址：" << p << endl;
//	//cout << *(long*)p << endl;//虚函数表地址
//	//cout << *(long*)p2 << endl;//虚函数表地址 这里解出来是10进制
//	//cout << (long*)*(long*)p2 << endl;//虚函数表地址 强转为地址类型，16进制
//	//cout << *(long*)*(long*)&b << endl;//解虚函数表地址，得到虚函数地址
//	//pfun = (Fun) *(long*)*(long*)&b;//再用声明好的函数指针把这个虚函数地址存下，顺便强转一下
//	//cout << "第一个虚函数f()的地址 :" << pfun << endl;
//	//每个地址占一个字节，所以下一个虚函数地址就是虚函数f（）的地址+1；
//	// 顺便，指针+1的结果为，按本指针所指向类型的大小为步长进行增加。这也是为何void*不能++的原因
//	//Fun gfun = (Fun) * ((int*)*(int*)p2 + 1);
//	//cout << "第二个虚函数g()的地址 :" << gfun << endl;
//	//Fun hfun = (Fun) * ((int*)*(int*)p2 + 2);
//	//cout << "第三个虚函数h()的地址 :" << hfun << endl;
//	//Fun hfun2 = (Fun) * ((int*)*(int*)p2 + 3);//在虚函数表最后位置有一个字节用来标志虚函数表的结束
//	//cout << "第三个虚函数h()的地址 :" << hfun2 << endl;
//	system("pause");
//	return 0;
//}