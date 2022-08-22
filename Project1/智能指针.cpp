//#include<iostream>
//using namespace std;
//#include<string>;
//
//void fun1() {
//
//	//unique指针独一份不可赋值和拷贝
//	unique_ptr<int> unique_p (new int(5));
//	unique_ptr<int> unique_p2 = make_unique<int>(5);
//
//	//share指针可以进行赋值拷贝。
//	//shared_ptr使用引用计数，每一个shared_ptr的拷贝都指向相同的内存。每使用他一次，内部的引用计数加1，每析构一次，内部的引用计数减1，减为0时，删除所指向的堆内存。
//	shared_ptr<int> share_p = make_shared<int>(1);
//	shared_ptr<int> p2(share_p);
//	shared_ptr<int> p3 = share_p;
//
//}
//
//int main() {
//	fun1();
//	system("pause");
//	return 0;
//}