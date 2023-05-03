//
// Created by philipp on 03/05/23.
//
#include <iostream>
#include <memory>

void cpy(int* src, int* dst, size_t n){
  for (size_t i = 0; i <= n; ++i)
    dst[i] = src[i];
}

int main(int argc, char** argv){
  std::cout << "hello world!\n";
  for (int i = 0; i < argc; ++i)
    std::cout << argv[i] << '\n';

  auto src = std::make_unique<int[]>(10);
  auto dst = std::make_unique<int[]>(10);

  cpy(src.get(), dst.get(), 10);

  return 0;
}