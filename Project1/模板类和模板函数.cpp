//#include<iostream>
//using namespace std;
//#include<string>;
//
//
////ģ����
//template<class T1, class T2> class Person {
//public:
//	Person(T1 age, T2 name) {
//		this->age = age;
//		this->name = name;
//		//cout << "���캯��" << endl;
//	}
//	void showPerson() {
//		cout << "name:" << this->name << endl;
//	}
//	T1 age;
//	T2 name;
//};
//
////ģ�庯��
//template<typename T, typename G> void Func(T& a, G& b) {
//	cout << "�β� a������Ϊ" << typeid(a).name() << endl;
//	cout << "�β� b������Ϊ" << typeid(b).name() << endl;
//};
//
////��ͨ���� �β���ָ�����͵�ģ����
//void Func2(Person<int, string>& p) {
//	p.showPerson();
//	//cout << "�β� p������Ϊ" << typeid(p).name() << endl;
//}
//
////ģ�庯�� �β���δָ�����͵�ģ����
//template<typename T3, typename T4> void Func3(Person<T3, T4>& p) {
//	p.showPerson();
//}
//
////ģ�庯�� �β�����
//template<class P> void Func4(P& p) {
//	p.showPerson();
//}
//
//void test1() {
//	//ʹ��ģ����
//	Person<int, string>p(100, "�����");
//	p.showPerson();
//
//	//ʹ��ģ�庯��
//	int a = 100;
//	string b = "�����";
//	//1).�Զ������Ƶ�
//	Func(a, b);
//	//2).��ʾָ������
//	Func<int, string>(a, b);
//
//	//ͬʱʹ����ģ��ͺ���ģ��
//	//1)��ģ��Ķ�����Ϊ��ͨ�����Ĳ���
//	Func2(p);
//	//2)��ģ��Ķ�����Ϊ����ģ��Ĳ���
//	Func3(p);
//	//3)��ģ��Ķ�����Ϊ����ģ��Ĳ���
//	Func4(p);
//
//}
//
//int main() {
//	test1();
//	system("pause");
//	return 0;
//}
