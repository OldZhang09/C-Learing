//#include<iostream>;
//using namespace std;
//
//class Base {
//public:
//	Base() {
//		cout << "Base �Ĺ��캯��ִ��" << endl;
//	}
//
//	void Set() {
//		cout << "Base Set" << endl;
//	}
//
//	~Base() {
//		cout << "Base ����������ִ��" << endl;
//	}
//};
//
//class A :public Base {
//public:
//	A() {
//		cout << "A �Ĺ��캯��ִ��" << endl;
//	}
//	void Set() {
//		cout << "A Set" << endl;
//	}
//
//	~A() {
//		cout << "A ����������ִ��" << endl;
//	}
//};
////�ð����У�p2��Base����ȥ��������ʱp2�����˾�̬�󶨣���ʹp2ʵ����һ��A���󣬵�����Ϊ������̬��������Base
//// ����p2�����Base set,��������ͬ��A���������ﲻ�ᱻ���á�
////���Ϸ����İ�����֮Ϊ��̬ Ϊ�˽����̬������Ҫ�õ��麯�������02
//
// /*************��Ҫ��ʾ��c++�й��캯������ֹʹ�ö�̬������ð�����Base��A�Ĺ��캯������ִ���ˣ����캯�����ڵĶ�̬�����ᷢ�������캯������Ҳ����Ϊ�麯��
// ԭ�������˽���� ��https://zhuanlan.zhihu.com/p/368257182          ***************/
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