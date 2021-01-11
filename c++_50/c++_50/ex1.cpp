#include<iostream>

using namespace std;

int main() {
	//int a=10;과 같은 표현
	int a(10);
	a = 5; //a(5);는 불가능(a가 함수일 수도 있기 때문)
	int b(a+5);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;





}