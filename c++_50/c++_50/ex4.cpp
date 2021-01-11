//������� for���� ����� ������ �迭 ���

#include<iostream>

using namespace std;

int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	for (int* n : arr) {
		cout << *n << " "; // 1 4 ���
	}
	for (int* n : arr) {
		for (int i = 0; i < 3;i++) {
			cout << n[i] << " "; 
		}
	}

	//����
	for (int(&ln)[3]:arr) {
		for (int& col : ln) {
			cout<<col<<" "; 
		}
		cout << endl;
	}

	//����
	for (auto(&ln) : arr) {
		for (auto& col : ln) {
			cout << col << " ";
		}
		cout << endl;
	}
}