#include "timeStamp.h"
#include <iostream>
using namespace std;
timeStamp::timeStamp(int s, int m, int h)
{
    seconds = s;
    minutes = m;
    hours = h;
}

void timeStamp::print()
{
    cout<<seconds<<":"<<minutes<<":"<<hours<<endl;
}

int timeStamp::total_seconds()
{
    return seconds + (minutes * 60) + (hours * 3600);
}

bool timeStamp::operator < (timeStamp t)
{
    return t.seconds < seconds;
}
