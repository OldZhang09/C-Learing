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
////���ۣ�Base��Ŀ�ָ�룬�ڴ�Ҳ�Ǹ���������һ����ַ�����Ե��ó�Ա���������ǳ�Ա�����ﲻ���г�Ա������������Ϊthis->�ı�����ָ��ƫ�ƣ�
////this�����������׵�ַ��this->ƫ�Ʋ����κ�һ����Ч�ĳ�Ա�����ĵ�ַ����������ʱ�򱨴������벻�ᱨ��
//int main() {
//	//�����͵Ŀ�ָ��
//	Base* obj = nullptr;
//	//obj->Show();������
//	//obj->ShowAndSet();����
//	Base::ShowAndSet2();
//	cout << &obj << endl;
//	cout << sizeof(obj) << endl;
//
//	//�ն���Ĵ�СΪ1���Ǳ�������������Ĵ�С
//	Base2 obj2;
//	Base2* p_obj2 = &obj2;
//	printf("%s %d\n", "Class Car Size:", sizeof(obj2));
//
//	//Base* obj2 = new Base;
//	//obj2->Show();
//	system("pause");
//	return 0;
//}