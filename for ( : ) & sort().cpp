* for ( : )
#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v(10, 3); //10개의 원소를 3으로 초기화
  
  for(int a : v){
    cout << a; 
  }//3333333333
}

* sort()
(1)
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int arr[] = {1, 10, 9, 2, 4, 3, 6, 5, 7, 8};
  
  int length = sizeof(arr)/sizeof(int);
  
  sort(arr, arr+length); // 오름차순 정렬 -> 1 2 3 4 5 6 7 8 9 10
  sort(arr, arr+length, less<int>()); // 오름차순 정렬
  sort(arr, arr+length, greater<int>()); // 내림차순 정렬
}

(2) 접미사 문제
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(string s1, string s2){ // 알아서 2개씩 꺼내서 비교함
    return s1 < s2; // 내림차순 정렬
    //return s1 > s2; // 오름차순 정렬
}

int main() {
    string str;
    cin >> str;

    int len = str.size();
    vector<string> vec;

    for (int i = 0; i < len; i++)
        vec.push_back(str.substr(i, len-i));

    //sort(vec.begin(), vec.end());    
    //sort(vec.begin(), vec.end(), greator<string>());
    //sort(vec.begin(), vec.end(), less<string>());
    sort(vec.begin(), vec.end(), compare);

    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << endl;
}
