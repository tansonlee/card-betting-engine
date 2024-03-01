#pragma once

#include <vector>

// A single card
struct Card {
  int value;
};

struct PlayerState {
  std::vector<Card> cards; // Cards they have in their hand.
  int score;               // Total number of points so far.
};

struct Bet {
  std::vector<Card> cards; // Cards being bet.
};

struct PointCards {
  std::vector<Card> cards; // Points on the table to be won.
};
