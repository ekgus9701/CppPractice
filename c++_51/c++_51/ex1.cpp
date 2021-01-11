//over load(함수 오버로딩)
#include<iostream>

//c++언어는 매개변수의 형이 달라도 함수이름이 같아도 괜찮
//매개변수에 따라 알아서 함수를 찾아서 실행

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

void swap(int* (&a), int* (&b)) {
	int* tmp = a;
	a = b;
	b = tmp;
}


int main() {
	int a = 20, b = 30;
	double da = 2.222, db = 3.333;
	int* pa = &a, * pb = &b;
	
	swap(a, b);
	swap(da, db);
	swap(pa, pb);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "da: " << da << std::endl;
	std::cout << "db: " << db << std::endl;
	std::cout << "*pa: " << *pa << std::endl; 
	std::cout << "*pb: " << *pb << std::endl;
	
}