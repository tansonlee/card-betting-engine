#include "naive.h"
#include <game.h>
#include <player.h>

NaivePlayer::NaivePlayer(int myPlayerId, const std::vector<int> &otherPlayerIds)
    : Player(myPlayerId, otherPlayerIds) {}

void NaivePlayer::play(const PointCards &pointCards,
                       const std::map<int, Bet> &bets,
                       const std::map<int, PlayerState> &state) {}