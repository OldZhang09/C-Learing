//#include<iostream>
//using namespace std;
//#include<string>;
//
//void fun1() {
//
//	//uniqueָ���һ�ݲ��ɸ�ֵ�Ϳ���
//	unique_ptr<int> unique_p (new int(5));
//	unique_ptr<int> unique_p2 = make_unique<int>(5);
//
//	//shareָ����Խ��и�ֵ������
//	//shared_ptrʹ�����ü�����ÿһ��shared_ptr�Ŀ�����ָ����ͬ���ڴ档ÿʹ����һ�Σ��ڲ������ü�����1��ÿ����һ�Σ��ڲ������ü�����1����Ϊ0ʱ��ɾ����ָ��Ķ��ڴ档
//	shared_ptr<int> share_p = make_shared<int>(1);
//	shared_ptr<int> p2(share_p);
//	shared_ptr<int> p3 = share_p;
//
//}
//
//int main() {
//	fun1();
//	system("pause");
//	return 0;
//}