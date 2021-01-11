//범위 기반 for문
#include <iostream>

using namespace std;
int main() {
	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "";
	}
	cout << endl;
	//같은 의미
	for (int n : arr) {//arr에 있는 모든 n을 본다
		cout << n << "";
		n++; //n을 증가
	}
	cout << endl;

	for (int n : arr) {
		cout << n << ""; //증가시킨 후 출력을 했지만 변화가 없다 
		//(만약 for문이 6번째 돌고있었다면 int n=arr[6]같은 개념이기 때문이다.)
		//n을 증가시킨다고 arr[6]이 증가되지않음
		
	}
	cout << endl;

	//증가시키려면 이렇게 코드를 짜줘야함
	for (int &n : arr) {//레퍼런스 변수 이용(만약 for문이 6번째 돌고있었다면 n은 arr[6]을 가리킴)
		cout << n << "";
		n++; //n을 증가
	}
	cout << endl;


}