#include <iostream>

using namespace std;

int main() {
	//r-value(������ �� ���� ��)�� ���۷����� ����

	int a(5); //lvalue�� a, rvalue�� 5
	
	//int &r1=a; (���۷��� ���� �̿�)
	//int&& r1 = a;//(a�� ������ �� �ִ� ���̹Ƿ� rvalue�� �����ʾƼ� ������ ��)

	//int &r2=a*a; (���۷��� ���� �̿�)
	int&& r2 = a*a;//(rvalue�̿�)

	//int &r3=3; (���۷��� ���� �̿�)
	int&& r3 = 3;//(rvalue�̿�)


}