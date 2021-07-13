#ifndef TIMESTAMP_H
#define TIMESTAMP_H

class timeStamp
{
private:
    int seconds;
    int minutes;
    int hours;

public:
    timeStamp(int, int, int);
    void print();
    int total_seconds();
    bool operator < (timeStamp t1);
};

#endif // TIMESTAMP_H
