#include <cstring>
#include <climits>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>


using namespace std;

template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
  os << "[";
  for (T i : v) {
    os << i << " ";
  }
  os << "]";
  return os;
}

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:
    vector<string> fizzBuzz(int n) {
      vector<string> s;
      for (int i = 1; i <= n; ++i) {
        if (i % 15 == 0)
          s.push_back("FizzBuzz");
        else if (i % 5 == 0)
          s.push_back("Buzz");
        else if (i % 3 == 0)
          s.push_back("Fizz");
        else
          s.push_back(to_string(i));
      }
      return s;  
    }
};

void test1() {
  Solution S;
  vector<string> v =  S.fizzBuzz(15);
  cout << " 15? " << v << endl;
}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}

