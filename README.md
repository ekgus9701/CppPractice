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
	
	
	
	
	
	
	
	
