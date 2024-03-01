#pragma once

#include <map>
#include <player.h>

class NaivePlayer : public Player {
public:
  NaivePlayer(int myPlayerId, const std::vector<int> &otherPlayerIds);
  void play(const PointCards &pointCards, const std::map<int, Bet> &bets,
            const std::map<int, PlayerState> &state) override;
};