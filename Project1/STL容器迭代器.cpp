//#include <iostream>
//#include <vector>
//using namespace std;
//
////vectorǿ������ͨ�������ȡ��Ч�ʡ�
////listǿ�����ǲ����ɾ��Ԫ�ص�Ч�ʡ�
////��������iterator���������Ϊָ�룺
////vector<������>::iterator ������;
//int main() {
//	vector<int> v;
//	//��ʼ������
//	for (int n = 0; n < 5; ++n) {
//		//push_back�ڶ���β�����
//		v.push_back(n);
//	}
//	//һ��д�� it�൱�������ײ���ָ��
//	vector<int>::iterator it = v.begin();
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << *(it + i) << " "<< endl;
//	}
//	//����д��
//	for (vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
//		//������ָ��һ��������
//		cout << *i << " " << endl;;
//	}
//
//	//c++11������auto,����������������ʱ����ݱ�����ʼֵ�������Զ�Ϊ�˱���ѡ��ƥ�������
//	//������������������д ���Ӽ��
//	for (auto i = v.begin(); i != v.end(); ++i) {
//		cout << *i << " " << endl;;
//	}
//	
//	system("pause");
//	return 0;
//}