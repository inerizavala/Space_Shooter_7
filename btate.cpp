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

void Menu::showMenu(int xres, int yres) 
{
	
	Rect r;
	r.bot = yres - 300;
	r.left = xres / 2;
	r.center = 1;
	ggprint16(&r, 32, 0x00800000, "S - Start Game");
	ggprint16(&r, 32, 0x00800000, "H - How To Play");
	ggprint16(&r, 32, 0x00800000, "C - Credits");
	
	// S1
	glBegin(GL_QUADS);
		glVertex3f(xres / 2 - 100, yres - 100, 0);
		glVertex3f(xres / 2 + 50, yres - 100, 0);
		glVertex3f(xres / 2 + 50, yres - 120, 0);
		glVertex3f(xres / 2 - 50, yres - 120, 0);

		glVertex3f(xres / 2 - 50, yres - 100, 0);
		glVertex3f(xres / 2 - 50, yres - 150, 0);
		glVertex3f(xres / 2 - 20, yres - 150, 0);
		glVertex3f(xres / 2 - 20, yres - 100, 0);

		glVertex3f(xres / 2 - 50, yres - 150, 0);
		glVertex3f(xres / 2 + 50, yres - 150, 0);
		glVertex3f(xres / 2 + 50, yres - 170, 0);
		glVertex3f(xres / 2 - 50, yres - 170, 0);

		glVertex3f(xres / 2 + 20, yres - 150, 0);
		glVertex3f(xres / 2 + 20, yres - 200, 0);
		glVertex3f(xres / 2 + 50, yres - 200, 0);
		glVertex3f(xres / 2 + 50, yres - 150, 0);

		glVertex3f(xres / 2 - 50, yres - 220, 0);
		glVertex3f(xres / 2 - 50, yres - 200, 0);
		glVertex3f(xres / 2 + 50, yres - 200, 0);
		glVertex3f(xres / 2 + 50, yres - 220, 0);
	glEnd();

	// S2
	glBegin(GL_QUADS);
		glVertex3f(xres / 2 - 300, yres - 100, 0);
		glVertex3f(xres / 2 - 150, yres - 100, 0);
		glVertex3f(xres / 2 - 150, yres - 120, 0);
		glVertex3f(xres / 2 - 250, yres - 120, 0);

		glVertex3f(xres / 2 - 250, yres - 100, 0);
		glVertex3f(xres / 2 - 250, yres - 150, 0);
		glVertex3f(xres / 2 - 220, yres - 150, 0);
		glVertex3f(xres / 2 - 220, yres - 100, 0);
	
		glVertex3f(xres / 2 - 250, yres - 150, 0);
		glVertex3f(xres / 2 - 150, yres - 150, 0);
		glVertex3f(xres / 2 - 150, yres - 170, 0);
		glVertex3f(xres / 2 - 250, yres - 170, 0);

		glVertex3f(xres / 2 - 180, yres - 150, 0);
		glVertex3f(xres / 2 - 180, yres - 200, 0);
		glVertex3f(xres / 2 - 150, yres - 200, 0);
		glVertex3f(xres / 2 - 150, yres - 150, 0);
	
		glVertex3f(xres / 2 - 250, yres - 220, 0);
		glVertex3f(xres / 2 - 250, yres - 200, 0);
		glVertex3f(xres / 2 - 150, yres - 200, 0);
		glVertex3f(xres / 2 - 150, yres - 220, 0);
	glEnd();

	// 7
	glBegin(GL_TRIANGLES);
		glVertex3f(xres - 200, yres - 100, 0);
		glVertex3f(xres - 170, yres - 100, 0);
		glVertex3f(xres - 260, yres - 220, 0);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(xres - 270, yres - 100, 0);
		glVertex3f(xres - 200, yres - 100, 0);
		glVertex3f(xres - 190, yres - 120, 0);
		glVertex3f(xres - 270, yres - 120, 0);

		glVertex3f(xres - 260, yres - 150, 0);
		glVertex3f(xres - 190, yres - 150, 0);
		glVertex3f(xres - 190, yres - 160, 0);
		glVertex3f(xres - 260, yres - 160, 0);
	glEnd();		
	
	// Lines
	glBegin(GL_LINES);
		glVertex2f(650, 770);
		glVertex2f(710, 770);

		glVertex2f(650, 750);
		glVertex2f(690, 750);

		glVertex2f(650, 730);
		glVertex2f(670, 730);

		glVertex2f(100, 770);
		glVertex2f(40, 770);

		glVertex2f(100, 750);
		glVertex2f(60, 750);

		glVertex2f(100, 730);
		glVertex2f(80, 730);

	glEnd();
}

void Menu::showCredits(int xres, int yres) 
{
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

void Menu::showHelp(int xres, int yres) 
{
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


void Menu::btate(int creditsFlag, int helpFlag, int menuFlag) 
{
	if (creditsFlag == 1)
        	cout << "Credits flag has been set" << endl;
 	if (helpFlag == 1)
        	cout << "Help flag has been set" << endl;
	if (menuFlag == 1)
        	cout << "Menu flag has been set" << endl;
}
