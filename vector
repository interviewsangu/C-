* 헤더
#include <vector>

* 기본 인트형 벡터 생성
#include <vector>
using namespace std;

int main(){
  vector<int> v; // 디폴트 생성
  vector<int> v1(5); // 0으로 초기화 된 5개의 원소 생성
  vector<int> v2(5, 3); // 3으로 초기화 된 5개의 원소 생성
  vector<int> v3(v); // 복사 생성
}

* 값의 입력
#include <vector>
using namespace std;

(1) 메모리를 미리 확보하고 차례로 채워넣기
int main(){
  int n;
  cin >> n;
  vector<int> vec(n); // 0으로 초기화 된 n개의 원소
  for(int i = 0; i < n; i++){
    cin >> vec[i]; // 각각의 원소를 초기화
  }
}

(2) 메모리를 실시간으로 할당 받으면서 채워넣기 - push back
int main(){
  vector<int> vec;

  for(int i=0; i < n; i++){
    int a;
    cin >> a;
    vec.push_back(a);
  }
}

* 한 개의 원소 추가 및 제거 - push_back(), pop_back()
#include <vector>
using namespace std;

int main(){
  vector<int> vec;
  vec.push_back(2); // 2 추가
  vec.pop_back(); // 가장 최근에 푸쉬한 원소 제거
}

* 특정 인덱스 지정 원소 추가 및 제거 - insert(index, elem), erase(begin+id)
#include <vector>
using namespace std;

int main(){
  vector<int> vec;
  vec.insert(2, 10); // 인덱스 2에 10 추가
  vec.erase(vec.begin() + 5); // index 5 원소 제거
  vec.erase(vec.begin(), vec.begin + 2); // 0 ~ 2 제거
}


* 원소 조회 - front(), back(), empty(), size()
#include <vector>
using namespace std;

int main(){
  vector<int> vec(3, 7); // 7로 초기화된 3개의 원소
  cout<< vec.front() << '\n';
  cout << vec.back() << '\n';
}

* Swap()
#include <vector>
using namespace std;

int main(){
  vector<int> v1;
  vector<int> v2;
  
  v1.swap(v2); //
}

* 값의 출력 
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(5, 1);     // 1로 초기화된 5개의 원소
    
    // 방법1
    for (int i = 0 ; i < vec.size(); i++)
    	cout << vec[i] << endl;
    
    
    // 방법2    
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
        cout << *it << endl;
    
    
    // 방법3
    for (auto it = vec.begin(); it != vec.end(); it++)
        cout << *it << endl;
}

* 2차원 벡터 생성 
vector<int> a[10];         
// 1차원 벡터를 10개 생성. 즉, 2차원 벡터가 됨. {{}, {}, {], ..., {}}
a[0].push_back(3);

vector<vector<int>> a(10); 
// 1차원 벡터를 10개 생성. 즉, 2차원 벡터가 됨. {{}, {}, {], ..., {}}
a[0].push_back(3);

vector<vector<int>> a(10, vector<int>(10,0)); 
// 10*10 2차원 벡터로 0으로 초기화된 것
