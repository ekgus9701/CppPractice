//범위기반 for문을 사용해 이차원 배열 출력

#include<iostream>

using namespace std;

int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	for (int* n : arr) {
		cout << *n << " "; // 1 4 출력
	}
	for (int* n : arr) {
		for (int i = 0; i < 3;i++) {
			cout << n[i] << " "; 
		}
	}

	//정답
	for (int(&ln)[3]:arr) {
		for (int& col : ln) {
			cout<<col<<" "; 
		}
		cout << endl;
	}

	//정답
	for (auto(&ln) : arr) {
		for (auto& col : ln) {
			cout << col << " ";
		}
		cout << endl;
	}
}