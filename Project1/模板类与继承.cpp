//#include<iostream>
//using namespace std;
//#include<string>;
//
////模板类Base
//template <class T> class Base {
//public:
//	Base() {};
//	Base(T t1);
//
//	T m1;
//
//	void ShowSelf(T t0);
//};
//
////模板类的函数在类外实现，也必须是模板函数
////构造函数
//template<class T>
//Base<T>:: Base(T t1) {
//	cout << "模板类Base的构造函数在类外实现,T类型=" << typeid(t1).name() <<endl;
//}
//
////成员函数 注意写法 思考这里T类型由谁决定 因为在Base中声明ShowSelf的时候就已经指定了T的类型来源于Base对象创建的时候
//template<class T>
//void Base<T>::ShowSelf(T t2) {
//	cout << "模板类Base的成员函数在类外实现,T类型="  << typeid(t2).name() << ",参数 = " << t2 << endl;;
//}
//
////子类继承模板类必须指定类型
//class Son :public Base<int> {
//
//};
////子类也是模板类 ，Son2的对象创建的时候，T2类型作为参数给到父类
//template <class T1,class T2> class Son2 :public Base<T2> {
//public:
//	Son2() {
//		/*this->obj = obj;
//		this->m1 = m;*/
//		cout << typeid(this->m1).name() << endl;
//		cout << typeid(this->obj).name() << endl;
//	}
//	Son2(T1 obj,T2 m) {
//		this->obj = obj;
//		this->m1 = m;
//		cout << "Son2 有参构造函数，成员变量obj类型=" << typeid(this->m1).name() << endl;
//		cout << "Son2 有参构造函数，成员变量m1类型=" <<typeid(this->obj).name() << endl;
//	}
//	T1 obj;
//};
//
//
//
//void test() {
//	Son2<int,char> p(199,'B');
//	//思考输出值
//	p.ShowSelf(100);
//}
//
//int main() {
//	test();
//	system("pause");
//	return 0;
//}