#include<iostream>

int inventory[64] = { 0 };//몇번째 인벤토리에 아이템이 몇개 있는지를 저장하는 배열
int score = 0;

/*void getItem(int itemId) {
	inventory[itemId]++;
}

void getItem(int itemId, int cnt) {
	inventory[itemId] += cnt;
}
*/

void getItem(int itemId, int cnt=1, int sc=0) { //cnt, sc에 기본값을 줌으로써 cnt,sc가 인자로 안들어올 때를 고려
	//기본값은 오른쪽부터 시작해서 원하는 만큼 입력해야함
	//void getItem(int itemId, int cnt=1, int sc=0,int a)는 불가!!
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