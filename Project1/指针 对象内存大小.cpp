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
//	printf("Base类型对象b的地址为%p\n",p);
//	printf("Base类型对象b的地址++为%p\n", ++p);
//	printf("Void*类型对象b的地址为%p\n", p_v);
//	//编译不过，因为void* 类型不具备指针跳跃能力
//	//printf("Void*类型对象b的地址++为%p\n", ++p);
//	printf("Base 成员a的地址为%p\n", p_a);
//	printf("Base 成员a的地址++为%p\n", ++p_a);
//	printf("Base 成员b的地址为%p\n", p_b);
//	printf("Base 成员b的地址++为%p\n", ++p_b);
//	printf("对象b的大小为%u\n",sizeof(b));
//	system("pause");
//	return 0;
//}