/*************************************************************************
	> File Name: test5_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 04:13:24 PM CST
 ************************************************************************/


// proj2.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Score {
public:
  Score(double *s, int n) : _s(s), _n(n) {}
  double GetScore(int i) const { return _s[i]; }
  void Sort();
private:
  double *_s;
  int _n;
};

void Score::Sort()
{
//********found********
	for (int i = 0; i < _n-1; ++i)
//********found********
      for (int j = _n-1; j > i; j--)
      if ( _s[j] < _s[j-1] )
      {                       // 交换 _s[j] 和 _s[j-1]
        double t = _s[j];
//********found********
		_s[j] = _s[j-1];
//********found********
		_s[j-1] = t;
      }
}

int main()
{
  const int NUM = 10;
  double s[NUM];
  srand(time(0));
  for (int i=0; i<NUM; i++)
    s[i] = double(rand())/RAND_MAX * 100;

  Score ss(s, NUM);
  ss.Sort();
  for (int j=0; j<NUM; j++)
    cout << ss.GetScore(j) << endl;
  return 0;
}
