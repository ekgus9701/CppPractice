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
