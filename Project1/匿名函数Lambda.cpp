//#include<iostream>;
//using namespace std;
//
//
//void fun(const int& i ) {
//	
//	printf("第二次输出%u\n", i);
//	auto f = [=] {
//		return i;
//	};
//	int x = f();
//	printf("第三次输出%u\n", x);
//	//cout << f << endl;
//}
//
//int main() {
//	const int i = 100;
//	printf("第一次输出%u\n", i);
//	fun(i);
//	printf("第四次输出%u\n", i);
//	system("pause");
//	return 0;
//}