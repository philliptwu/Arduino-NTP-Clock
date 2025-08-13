#include "numbers.h"

Numbers::Numbers() {
    // Initialize the frame with zeros    
    uint8_t frame[8][12] = {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
        };
}

void Numbers::drawNumber(int number, int pos) {
    // Draw the number on the frame at the specified position
    if (pos == 0 && number != 1) {
        return; // only draw '1' at position 0
    }
    switch (number) {
        case 0: this->zero(pos); break;
        case 1: this->one(pos); break;
        case 2: this->two(pos); break;
        case 3: this->three(pos); break;
        case 4: this->four(pos); break;
        case 5: this->five(pos); break;
        case 6: this->six(pos); break;
        case 7: this->seven(pos); break;
        case 8: this->eight(pos); break;
        case 9: this->nine(pos); break;
        default: this->clearFrame(); break; // Clear frame if number is invalid
    }
}

void Numbers::clearFrame() {
    // Clear the frame
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 12; j++) {
            frame[i][j] = 0;
        }
    }
}

void Numbers::colon() {
  frame[1][5] = 1;
  frame[3][5] = 1;
}

int Numbers::getOffset(int pos) {
  if (pos == 0) {
    return 0;
  }
  if (pos == 1) {
    return 2;
  }
  if (pos == 2) {
    return 6;
  }
  if (pos == 3) {
    return 9;
  }
  return 0; // Default case, should not happen
}

void Numbers::zero(int pos) {
  int start = getOffset(pos);

  frame[0][0 + start] = 1;
  frame[0][1 + start] = 1;
  frame[0][2 + start] = 1;

  frame[1][0 + start] = 1;
  frame[1][2 + start] = 1;

  frame[2][0 + start] = 1;
  frame[2][2 + start] = 1;

  frame[3][0 + start] = 1;
  frame[3][2 + start] = 1;

  frame[4][0 + start] = 1;
  frame[4][1 + start] = 1;
  frame[4][2 + start] = 1;
}

void Numbers::one(int pos) {
  int start = getOffset(pos);

  frame[0][0 + start] = 1;
  frame[1][0 + start] = 1;
  frame[2][0 + start] = 1;
  frame[3][0 + start] = 1;
  frame[4][0 + start] = 1;
}

void Numbers::two(int pos) {
  int start = getOffset(pos);

  frame[0][0 + start] = 1;
  frame[0][1 + start] = 1;
  frame[0][2 + start] = 1;

  frame[1][2 + start] = 1;

  frame[2][0 + start] = 1;
  frame[2][1 + start] = 1;
  frame[2][2 + start] = 1;

  frame[3][0 + start] = 1;

  frame[4][0 + start] = 1;
  frame[4][1 + start] = 1;
  frame[4][2 + start] = 1;
}

void Numbers::three(int pos) {
  int start = getOffset(pos);

  frame[0][0 + start] = 1;
  frame[0][1 + start] = 1;
  frame[0][2 + start] = 1;

  frame[1][2 + start] = 1;

  frame[2][1 + start] = 1;
  frame[2][2 + start] = 1;

  frame[3][2 + start] = 1;

  frame[4][0 + start] = 1;
  frame[4][1 + start] = 1;
  frame[4][2 + start] = 1;
}

void Numbers::four(int pos) {
  int start = getOffset(pos);

  frame[0][0 + start] = 1;
  frame[0][2 + start] = 1;

  frame[1][0 + start] = 1;
  frame[1][2 + start] = 1;

  frame[2][0 + start] = 1;
  frame[2][1 + start] = 1;
  frame[2][2 + start] = 1;

  frame[3][2 + start] = 1;

  frame[4][2 + start] = 1;
}

void Numbers::five(int pos) {
  int start = getOffset(pos);

  frame[0][0 + start] = 1;
  frame[0][1 + start] = 1;
  frame[0][2 + start] = 1;

  frame[1][0 + start] = 1;

  frame[2][0 + start] = 1;
  frame[2][1 + start] = 1;
  frame[2][2 + start] = 1;

  frame[3][2 + start] = 1;

  frame[4][0 + start] = 1;
  frame[4][1 + start] = 1;
  frame[4][2 + start] = 1;
}

void Numbers::six(int pos) {
  int start = getOffset(pos);

  frame[0][0 + start] = 1;
  frame[0][1 + start] = 1;
  frame[0][2 + start] = 1;

  frame[1][0 + start] = 1;

  frame[2][0 + start] = 1;
  frame[2][1 + start] = 1;
  frame[2][2 + start] = 1;

  frame[3][0 + start] = 1;
  frame[3][2 + start] = 1;

  frame[4][0 + start] = 1;
  frame[4][1 + start] = 1;
  frame[4][2 + start] = 1;
}

void Numbers::seven(int pos) {
  int start = getOffset(pos);

  frame[0][0 + start] = 1;
  frame[0][1 + start] = 1;
  frame[0][2 + start] = 1;

  frame[1][2 + start] = 1;

  frame[2][1 + start] = 1;

  frame[3][0 + start] = 1;

  frame[4][0 + start] = 1;
}

void Numbers::eight(int pos) {
  int start = getOffset(pos);

  frame[0][0 + start] = 1;
  frame[0][1 + start] = 1;
  frame[0][2 + start] = 1;

  frame[1][0 + start] = 1;
  frame[1][2 + start] = 1;

  frame[2][0 + start] = 1;
  frame[2][1 + start] = 1;
  frame[2][2 + start] = 1;

  frame[3][0 + start] = 1;
  frame[3][2 + start] = 1;

  frame[4][0 + start] = 1;
  frame[4][1 + start] = 1;
  frame[4][2 + start] = 1;
}

void Numbers::nine(int pos) {
  int start = getOffset(pos);

  frame[0][0 + start] = 1;
  frame[0][1 + start] = 1;
  frame[0][2 + start] = 1;

  frame[1][0 + start] = 1;
  frame[1][2 + start] = 1;

  frame[2][0 + start] = 1;
  frame[2][1 + start] = 1;
  frame[2][2 + start] = 1;

  frame[3][2 + start] = 1;

  frame[4][0 + start] = 1;
  frame[4][1 + start] = 1;
  frame[4][2 + start] = 1;
}