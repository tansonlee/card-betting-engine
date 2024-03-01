#pragma once

#include "game.h"
#include <map>
#include <vector>

class Player {
public:
  Player(int myPlayerId, const std::vector<int> &otherPlayerIds);
  virtual void play(const PointCards &pointCards,
                    const std::map<int, Bet> &bets,
                    const std::map<int, PlayerState> &state);

private:
  int myPlayerId;
  std::vector<int> otherPlayerIds;
};