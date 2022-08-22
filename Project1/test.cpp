//#include<iostream>;
//using namespace std;
//
//class Sheep {
//public:
//	virtual void f() {
//		cout << "Base::f" << endl;
//	}
//	virtual void g() {
//		cout << "Base::g" << endl;
//	}
//	virtual void h() {
//		cout << "Base::h" << endl;
//	}
//};
//class Sheep1 {
//public:
//	virtual void f() {
//		cout << "Base::f" << endl;
//	}
//	virtual void g() {
//		cout << "Base::g" << endl;
//	}
//	virtual void h() {
//		cout << "Base::h" << endl;
//	}
//};
//
//class SheepA:public Sheep,public Sheep1 {
//public:
//	virtual void f1() {
//		cout << "Base::f" << endl;
//	}
//	virtual void g2() {
//		cout << "Base::g" << endl;
//	}
//	virtual void h2() {
//		cout << "Base::h" << endl;
//	}
//};
//
//int main() {
//	typedef void(*Fun)(void);
//	Fun pfun = NULL;
//	Sheep sheep;
//	void* p = &sheep;
// //这里在x64下回报错，暂时不知道原因
//	Fun p2 = (Fun)*(unsigned  long*)*(unsigned  long*)p;
//	printf("%p\n", *p2);
//	system("pause");
//	//pfun = (Fun) * (unsigned  long*)*(unsigned  long*) p;
//	return 0;
//}