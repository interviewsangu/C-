* 헤더
#include <algorithm>

* count()
int count(InputIterator first, InputIterator last, const T& val)
- Iterable한 것에서 val의 개수 반환

* iterator
#include <iostream>

int main(void){
  string s = "jeon";
  
  cout << *s.begin() << endl; // j
  cout << *(s.begin() + 1) << endl; // e
  cout << *(s.end() - 1) << endl; // n
  cout << *s.end() << endl; // none
}

* count 예시 - 특정 값의 개수 찾기
(1)
int a[] = {1, 2, 3, 4, 5, 5, 6, 7, 8, 8}; 
cout << count(a, a+10, 8) << endl; // 8이 2개 있으므로 2 출력 10은 원소의 개수

(2)
vector<int> v(a, a+10);
int cnt = count(v.begin(), b.end(), 8); // 배열을 그대로 복사
cout << cnt << endl; // 2출력

(3) - string
string s;
s = "jeon";

for(int i = 'a'; i<= 'z' ; i++){
  cout << count(s.begin(), s.end(), i) << ' '; // a~z 각 원소 개수 
}
