//Author: Irvin Neri
//Source file for Space Shooter 7

#include <iostream>
using namespace std;

int authName()
{
        cout << "Irvin";
        return 0;
}

void shipPos(double spos0, double spos1, int xres, int yres)
{
    if (spos0 >= (((double) xres)/2) * .95 && 
        spos0 <= (((double) xres)/2) * 1.05 &&
        spos1 >= (((double) yres)/2) * 0.95 &&
        spos1 <= (((double) yres)/2) * 1.05)
        printf("Ship is in the middle of the screen\n");
}

