#include <game.h>
#include <iostream>
#include <naive.h>
#include <vector>

int main() {
  std::cout << "hello world" << std::endl;
  std::vector<int> players = {1, 2};

  NaivePlayer p(1, players);
  return 0;
}