//#include<iostream>
//using namespace std;
//#include<string>;
//
////ģ����Base
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
////ģ����ĺ���������ʵ�֣�Ҳ������ģ�庯��
////���캯��
//template<class T>
//Base<T>:: Base(T t1) {
//	cout << "ģ����Base�Ĺ��캯��������ʵ��,T����=" << typeid(t1).name() <<endl;
//}
//
////��Ա���� ע��д�� ˼������T������˭���� ��Ϊ��Base������ShowSelf��ʱ����Ѿ�ָ����T��������Դ��Base���󴴽���ʱ��
//template<class T>
//void Base<T>::ShowSelf(T t2) {
//	cout << "ģ����Base�ĳ�Ա����������ʵ��,T����="  << typeid(t2).name() << ",���� = " << t2 << endl;;
//}
//
////����̳�ģ�������ָ������
//class Son :public Base<int> {
//
//};
////����Ҳ��ģ���� ��Son2�Ķ��󴴽���ʱ��T2������Ϊ������������
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
//		cout << "Son2 �вι��캯������Ա����obj����=" << typeid(this->m1).name() << endl;
//		cout << "Son2 �вι��캯������Ա����m1����=" <<typeid(this->obj).name() << endl;
//	}
//	T1 obj;
//};
//
//
//
//void test() {
//	Son2<int,char> p(199,'B');
//	//˼�����ֵ
//	p.ShowSelf(100);
//}
//
//int main() {
//	test();
//	system("pause");
//	return 0;
//}