//#include<iostream>;
//using namespace std;
//
//class Base {
//public:
//	int No;
//	void ShowAndSet() {
//		this->No = 1;
//	}
//	void Show() {
//		//cout << No << endl;
//	}
//
//	static void ShowAndSet2() {
//
//	}
//};
//
//class Base2 {
//
//};
//
////结论：Base类的空指针，内存也是给他分配了一个地址，可以调用成员函数，但是成员函数里不能有成员变量，这是因为this->的本质是指针偏移，
////this是这个对象的首地址，this->偏移不到任何一个有效的成员变量的地址，所以运行时候报错，但编译不会报错。
//int main() {
//	//有类型的空指针
//	Base* obj = nullptr;
//	//obj->Show();不报错
//	//obj->ShowAndSet();报错
//	Base::ShowAndSet2();
//	cout << &obj << endl;
//	cout << sizeof(obj) << endl;
//
//	//空对象的大小为1，是编译器给他分配的大小
//	Base2 obj2;
//	Base2* p_obj2 = &obj2;
//	printf("%s %d\n", "Class Car Size:", sizeof(obj2));
//
//	//Base* obj2 = new Base;
//	//obj2->Show();
//	system("pause");
//	return 0;
//}