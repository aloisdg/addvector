//
// main.cpp for main in /home/degouv_a/Code/c++/Linscii/toro
//
// Made by alois de gouvello
// Login   <degouv_a@epitech.net>
//
// Started on  Mon Jan 27 20:13:49 2014 alois de gouvello
// Last update Mon Jan 27 20:59:40 2014 alois de gouvello
//

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "AddVector.hpp"

void printLine(const std::string &);
void printLine(const std::string &line)
{
  std::cout << line << std::endl;
}

int main()
{
  std::vector<std::string> sample;
  std::vector<std::string> data;
  std::vector<int> res;
  std::vector<int> sum;

  sample.push_back("foo");
  data.push_back("bar");

  sample += data;

  data.clear();

  data.push_back("sample");
  sample = sample + data;

  for_each (sample.begin(), sample.end(), printLine);

  sum.push_back(42);
  res += sum;
  std::cout << res[0] << std::endl;
}
