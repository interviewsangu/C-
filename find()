* 헤더
#include <algorithm>

* 함수 설명
Iterator find (InputIterator first, InputIterator last, const T& val)
- val 값이 존재하는 위치를 Iterator로 반환.
- 일치하는 값이 없을 경우 end() 반환

* 예시
(1)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int a[] = {1, 2, 3, 4, 5};
  vector<int> v(a, a+5);
  
  auto it = find(v.begin(), v.end(), 1);
  
  if(it == v.end()){
    cout << "존재하지 않음" << endl;
  }else{
    cout<< (it - v.begin()) << endl; //형식이며 1이 존재하는 인덱스 0 반환
  }
  return 0;
}

(2)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  string s;
  cin >> s;
  
  for(int i = 'a'; i<='z'; i++){
    auto it = find(s.begin(), s.end(), i);
    if(it == s.end()){
      cout << "존재하지 않음" << endl;
    }else{
      cout << (it - begin()) << ' ';
    }
  }
}
