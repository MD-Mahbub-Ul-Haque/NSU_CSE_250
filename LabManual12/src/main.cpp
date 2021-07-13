#include <iostream>
#include "timeStamp.h"
#include "sortedtype.cpp"

using namespace std;
void print(SortedType<int> s){
    int n;
    for(int i=0; i<s.LengthIs(); i++){
        s.GetNextItem(n);
        int h = n/3600; n = n%3600;
        int m = n/60; n = n%60;
        int s = n;

        printf("%2d : %2d : %2d\n", s, m, h);
    }
    return;
}

int main()
{
    int s, m, h;
    SortedType<int> tL;

    cout<<"Please enter time in order of SEC MIN HOURE for each time stamp  : "<<endl;
    for(int i=0; i<5; i++){
        cin>>s>>m>>h;
        timeStamp t(s, m, h);
        tL.InsertItem(t.total_seconds());
    }

    timeStamp ti(25, 36, 17);

    tL.DeleteItem(ti.total_seconds());

    print(tL);

    return 0;
}


