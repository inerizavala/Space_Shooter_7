//Bradley Tate
//Personal Source file for SS7
//Start Date: February 24th

#include <iostream>
#include <GL/glx.h>
#include <stdio.h>
#include <cmath>
#include "defs.h"
#include "group.h"
#include "fonts.h"

using namespace std;

void Menu::showMenu(int xres, int yres) {
	Rect r;
	r.bot = yres - 50;
	r.left = xres / 2;
	r.center = 1;
	ggprint16(&r, 16, 0x00800000, "Space Shooter 7");
	ggprint8b(&r, 16, 0x00800000, "S - Start Game");
	ggprint8b(&r, 16, 0x00800000, "H - How To Play");
	ggprint8b(&r, 16, 0x00800000, "C - Credits");
}

void Menu::showCredits(int xres, int yres) {
	Rect r;
	r.bot = yres - 50;
	r.left = xres / 2;
	r.center = 1;
	ggprint16(&r, 16, 0x00ffffff, "CREDITS:");
	ggprint8b(&r, 16, 0x00ffffff, "BRADLEY TATE");
	ggprint8b(&r, 16, 0x00ffffff, "EVAN WARREN");
	ggprint8b(&r, 16, 0x00ffffff, "IRVIN NERI");
	ggprint8b(&r, 16, 0x00ffffff, "JULIAN PEREYRA");
	ggprint8b(&r, 16, 0x00ffffff, "");
	ggprint8b(&r, 16, 0x00ffffff, "C - Return to Menu");


}

void Menu::showHelp(int xres, int yres) {
	Rect r;
	r.bot = yres - 50;
	r.left = xres / 2;
	r.center = 1;
	ggprint16(&r, 16, 0x00ffffff, "HOW TO PLAY:");
	ggprint8b(&r, 16, 0x00ffffff, "ARROW KEYS: MOVE");
	ggprint8b(&r, 16, 0x00ffffff, "SPACE: SHOOT");
	ggprint8b(&r, 16, 0x00ffffff, "ESC: QUIT");
	ggprint8b(&r, 16, 0x00ffffff, "");
	ggprint8b(&r, 16, 0x00ffffff, "H - Return to Menu");

}
