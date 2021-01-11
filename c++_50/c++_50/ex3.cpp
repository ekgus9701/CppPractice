#include <iostream>

using namespace std;

int main() {
	//r-value(수정할 수 없는 값)는 레퍼런스를 제공

	int a(5); //lvalue는 a, rvalue는 5
	
	//int &r1=a; (레퍼런스 변수 이용)
	//int&& r1 = a;//(a는 수정할 수 있는 값이므로 rvalue에 맞지않아서 오류가 남)

	//int &r2=a*a; (레퍼런스 변수 이용)
	int&& r2 = a*a;//(rvalue이용)

	//int &r3=3; (레퍼런스 변수 이용)
	int&& r3 = 3;//(rvalue이용)


}