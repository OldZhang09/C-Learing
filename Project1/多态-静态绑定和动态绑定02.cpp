//#include<iostream>;
//using namespace std;
//
//class Base {
//public:
//	Base() {
//		cout << "Base �Ĺ��캯��ִ��" << endl;
//	}
//
//	virtual void Set() {
//		cout << "Base Set" << endl;
//	}
//
//	virtual ~Base() {
//		cout << "Base ����������ִ��" << endl;
//	}
//
//	void Fun() {
//		cout << "Base Fun" << endl;
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
//
//	void Fun() {
//		cout << "A Fun" << endl;
//	}
//};
////�������ǰѸ���Base��Set���������������ֱ����virtual�� ��Ȱ���1�����Ƿ��ִ�ʱ����A��set����������������ִ����,�����麯��Fun��Ȼִ��Base Fun��
////�������̣�������Base��������p2��p2ʵ���Ǹ�A���󣬴�ʱ�麯����Set�������������� �����˶�̬�󶨣����˶�̬���ͣ����ú��������ڶ���Ķ�̬���ͣ���
////����ʱ������A��������Fun���ھ�̬����Ȼ��Base funִ��
//// ��⣺��ĳ��virtual����ͨ��ָ������õ���ʱ�������������Ĵ���ֱ������ʱ����ȷ��Ӧ�õ����ĸ��汾�ĺ�����
//// �����õĺ�������󶨵�ָ��������ϵĶ���Ķ�̬������ƥ�����һ����
//// ��Ҫע����ǣ���̬��ֻ�е�����ͨ��ָ������õ����麯��ʱ�Żᷢ����
//// non-virtual�����Ǿ�̬�󶨣���ˡ��������¶���̳ж�����non-virtual��������
//// ��Ϊ�����ᵼ�º����ĵ��������ɶ�������ʱ�ľ�̬����ȷ������������������˹�ϵ��
//// �����Effective C++������36.
//void test() {
//	//Base* p = new Base;
//	//p->Set();
//	Base* p2 = new A;
//	p2->Set();
//	p2->Fun();
//	delete p2;
//}
//int main() {
//	test();
//	system("pause");
//	return 0;
//}