#include<iostream>

int inventory[64] = { 0 };//���° �κ��丮�� �������� � �ִ����� �����ϴ� �迭
int score = 0;

/*void getItem(int itemId) {
	inventory[itemId]++;
}

void getItem(int itemId, int cnt) {
	inventory[itemId] += cnt;
}
*/

void getItem(int itemId, int cnt=1, int sc=0) { //cnt, sc�� �⺻���� �����ν� cnt,sc�� ���ڷ� �ȵ��� ���� ���
	//�⺻���� �����ʺ��� �����ؼ� ���ϴ� ��ŭ �Է��ؾ���
	//void getItem(int itemId, int cnt=1, int sc=0,int a)�� �Ұ�!!
	inventory[itemId] += cnt;
	score += sc;
}

int main() {
	getItem(6, 5);
	getItem(3, 2);
	getItem(3);
	getItem(11, 34, 7000);

	for (int i = 0; i < 16; i++) {
		std::cout << inventory[i] << " ";

	}
	std::cout << std::endl;
	std::cout <<score<< std::endl;
}