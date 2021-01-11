# cpp_practice

C 와 C++ 을 동시에 배워보자 - 두들낙서의 C/C++를 듣고 작성한 코드

https://www.inflearn.com/course/c%EC%96%B8%EC%96%B4-%EB%91%90%EB%93%A4%EB%82%99%EC%84%9C/dashboard

## 49강
```
1. #include <iostream>
 #include <stdio.h>와 같은 효과
 
2. namespace
 //namespace의 효과(n이라는 이름의 성을 만들어주는 것과 같음)
 a::n = 10;
 b::n = 20;
  
3.출력하기(cout)
 std::cout << "Hello,World!" << std::endl; //endl은 줄바꿈
 std::cout << "Hello,World!" <<10<<"c"<< std::endl; //<<는 data 분리 효과
  
4. using namespace std;
 cout이나 cin 등 앞에 std를 없애기위해 최상단에 using namespace std;선언
 
5. 입력받기(cin)
 int a, b;
 cin >> a >> b;
  
6. String
 //String 쉽게 연결할 수 있음
 string message = "안녕하세요, " + name + "님";
 ```
  
## 50강 
```
1. c++스타일 변수 선언하기
 //int a=10;과 같은 표현
 int a(10);
 a = 5; //a(5);는 불가능(a가 함수일 수도 있기 때문)
 int b(a+5);

2. 범위 기반 for문
 for (int n : arr) {//arr에 있는 모든 n을 본다
 cout << n << "";
 }

3. 범위기반 for문을 이용해 arr을 증가시키기
 for (int &n : arr) {//레퍼런스 변수 이용(만약 for문이 6번째 돌고있었다면 n은 arr[6]을 가리킴)
 cout << n << "";
 n++; //n을 증가
 } 
 
4. 범위기반 for문을 사용해 이차원 배열 출력
 for (int(&ln)[3]:arr) {
 	for (int& col : ln) {
		cout<<col<<" "; 
	}
	cout << endl;
 }
	
 for (auto(&ln) : arr) {
	for (auto& col : ln) {
		cout << col << " ";
	}
	cout << endl;
 }
 
 5. r-value
 //수정할 수 없는 값
 //레퍼런스를 제공
 
 //int &r2=a*a; (레퍼런스 변수 이용)
 int&& r2 = a*a;//(rvalue이용)

 //int &r3=3; (레퍼런스 변수 이용)
 int&& r3 = 3;//(rvalue이용)
 ```
 
## 51강
 ```
1.overload(함수 오버로딩)
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
 }
 
2. 인자에 기본값 주기
 void getItem(int itemId, int cnt=1, int sc=0) { 
        //cnt, sc에 기본값을 줌으로써 cnt,sc가 인자로 안들어올 때를 고려
	//기본값은 오른쪽부터 시작해서 원하는 만큼 입력해야함
	//void getItem(int itemId, int cnt=1, int sc=0,int a)는 불가!!
	inventory[itemId] += cnt;
	score += sc;
 }
``` 
	
	
	
	
	
	
	
	
