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
//		cout << "ִ�зǾ�̬��Ա����fun3" << endl;
//	};
//};
//
//void fun3(){
//
//};
////�Ǿ�̬��Ա����ָ��ֻ�����ں������ã����������
//int main() {
//	A a1;
//	//���庯��ָ��p
//	void(*p)(void);
//	p = &A::fun2;
//	cout << "��̬��Ա����ָ��" << p << endl;
//	p = &fun3;
//	cout << "��ͨ����ָ��" << p << endl;
//	a1.fun3();
//
//
//	//ͨ��typedef���� �Ǿ�̬��Ա����ָ��
//	typedef void(A::* PathOfFun)(void);
//	//������ӡ1Ϊʲô��
//	PathOfFun p3 = &A::fun3;
//	cout << "��ͨ��Ա����ָ��" << p3 << endl;
//	A a2;
//	//ͨ��������� �⺯��ָ��
//	(a2.*p3)();//�൱��a2.fun3();
//	//ͨ����ָ�����
//	A *p_a3 = new A;
//	(p_a3->*p3)();
//	
//	system("pause");
//	return 0;
//}