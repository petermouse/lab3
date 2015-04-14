#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
int main(void)
{
  int number;
  int tmp;
  int weight=0;
  ifstream infile("file.in",ios::in);
  infile >> number;
  vector<int>cow;
  while(infile >> tmp)
    cow.push_back(tmp);

  sort(cow.begin(),cow.end());
  for(int i=cow.size()-1;i>=cow.size()-5;i--)
    weight=weight+cow[i];

  cout << weight << endl;
}
