/*#include <iostream>
using namespace std;

namespace a {
	int n;
}

namespace b {
	int n;
}
int main() {
	//namespace의 효과(n이라는 이름의 성을 만들어주는 것과 같음)
	a::n = 10;
	b::n = 20;

	//출력하기(cout)
	std::cout << "Hello,World!" << std::endl; //endl은 줄바꿈
	std::cout << "Hello,World!" <<10<<"c"<< std::endl; //<<는 data 분리 효과

	//std를 없애기위해 최상단에 using namespace std;선언
	cout << "Hello,World!" << endl; //endl은 줄바꿈


}*/