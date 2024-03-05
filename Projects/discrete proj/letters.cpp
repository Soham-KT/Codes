#include <iostream>
#include <graphics.h>
using namespace std;

void letter(int x, int y, char lett){
    circle(x, y, 30);
    cout<<&lett<<endl;
    // outtextxy(x - 4, y - 7, &lett);
}

int main(int argc, char const *argv[])
{
    char alphabets[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    initwindow(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN), "", -3, -3);

    for(int i=0, j = 100, k = 100; i<25; i++, k+=100){
        if(k >= 700){
            j += 100;
            k = 100;
        }
        letter(j, k, alphabets[i]);
    }

    getch();
    closegraph();

    return 0;
}

// g++ -o letters letters.cpp -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32