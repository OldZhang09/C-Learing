//#include<iostream>;
//using namespace std;
//
//class Base {
//public:
//	int a;
//	char b;
//};
//
//int main() {
//	Base b; //= new Base;
//	Base* p = &b;
//	void* p_v = &b;
//	int* p_a = &(p->a);
//	char* p_b = &(p->b);
//	printf("Base���Ͷ���b�ĵ�ַΪ%p\n",p);
//	printf("Base���Ͷ���b�ĵ�ַ++Ϊ%p\n", ++p);
//	printf("Void*���Ͷ���b�ĵ�ַΪ%p\n", p_v);
//	//���벻������Ϊvoid* ���Ͳ��߱�ָ����Ծ����
//	//printf("Void*���Ͷ���b�ĵ�ַ++Ϊ%p\n", ++p);
//	printf("Base ��Աa�ĵ�ַΪ%p\n", p_a);
//	printf("Base ��Աa�ĵ�ַ++Ϊ%p\n", ++p_a);
//	printf("Base ��Աb�ĵ�ַΪ%p\n", p_b);
//	printf("Base ��Աb�ĵ�ַ++Ϊ%p\n", ++p_b);
//	printf("����b�Ĵ�СΪ%u\n",sizeof(b));
//	system("pause");
//	return 0;
//}