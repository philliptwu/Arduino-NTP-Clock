#ifndef numbers_h
#define numbers_h

#include <stdint.h>


class Numbers {
public:
    Numbers();
    uint8_t frame[8][12];
    void drawNumber(int number, int pos);
    void clearFrame();
    void colon();
    int getOffset(int pos);
    void zero(int pos);
    void one(int pos);
    void two(int pos);
    void three(int pos);
    void four(int pos);
    void five(int pos);
    void six(int pos);
    void seven(int pos);
    void eight(int pos);
    void nine(int pos);
};

#endif // numbers_h

