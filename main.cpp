//
// Created by philipp on 03/05/23.
//
#include <iostream>

int main(int argc, char** argv){
  std::cout << "hello world!\n";
  for (int i = 0; i < argc; ++i)
    std::cout << argv[i] << '\n';
  return 0;
}