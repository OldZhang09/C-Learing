//#include<iostream>
//using namespace std;
//
//class Base {
//public:
//	void look() {
//		cout << "Base look" << endl;
//	}
//
//	virtual void show() {
//		cout << "Base show" << endl;
//	}
//};
////��д��Base��look������δ������̬
////��д��Base���麯��show��û��дvirtual���������Եļ̳�Ϊ�麯��
//class Son :public Base {
//public:
//	void look() {
//		cout << "Son look" << endl;
//	}
//
//	void show() {
//		cout << "Son show" << endl;
//	}
//};
//
//class SonSon :public Son {
//public:
//	void look() {
//		cout << "SonSon look" << endl;
//	}
//
//	void show() {
//		cout << "Sonson Show" << endl;
//	}
//};
//
//int main() {
//	Base *b = new Son;
//	Base* s = new SonSon;
//	b->look();
//	s->look();
//	b->show();
//	s->show();
//	system("pause");
//	return 0;
//}