//���� ��� for��
#include <iostream>

using namespace std;
int main() {
	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "";
	}
	cout << endl;
	//���� �ǹ�
	for (int n : arr) {//arr�� �ִ� ��� n�� ����
		cout << n << "";
		n++; //n�� ����
	}
	cout << endl;

	for (int n : arr) {
		cout << n << ""; //������Ų �� ����� ������ ��ȭ�� ���� 
		//(���� for���� 6��° �����־��ٸ� int n=arr[6]���� �����̱� �����̴�.)
		//n�� ������Ų�ٰ� arr[6]�� ������������
		
	}
	cout << endl;

	//������Ű���� �̷��� �ڵ带 ¥�����
	for (int &n : arr) {//���۷��� ���� �̿�(���� for���� 6��° �����־��ٸ� n�� arr[6]�� ����Ŵ)
		cout << n << "";
		n++; //n�� ����
	}
	cout << endl;


}