//Source file for Evan Warren
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <GL/glx.h>
#include "defs.h"
#include "group.h"
#include "fonts.h"
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

/*
Enemy::Enemy() 
{
	pos[0] = 0.0f;	//(Flt)(gl.xres/2);
	pos[1] = 0.0f;	//(Flt)(gl.yres/2);
	pos[2] = 0.0f;
	VecZero(dir);
	VecZero(vel);
	VecZero(acc);
	angle = 0.0;
	color[0] = color[1] = color[2] = 1.0;
}
*/


void Credits::showPage(int xres, int yres) 
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

}

void Score::increaseScore(int num)
{
	score = score + num;
	score_flag = !score_flag;
}

const int NEW_MAX_BULLETS = 99;
int max_bullet_flag = 0;


void Powerup::setBulletMax(int max)
{
	bullet_num = max;
}

Powerup::Powerup(int max)
{
	setBulletMax(max);
}

void Powerup::flagSet()
{
	max_bullet_flag = !max_bullet_flag;
	if (bullet_num == 5) {
		setBulletMax(NEW_MAX_BULLET);
	} else {
		setBulletMax(5);
	}
	/*
	int timeStart = time(NULL);
	for (timeDifference = 0; timeDifference < 5; timeDifference = time(NULL) - timeStart) {
		//sleep(1);
	}
	max_bullet_flag = !max_bullet_flag;
	*/
}

void ewarrenFunction(int number) 
{
	if (number % 2) {
		std::cout << number << " is odd.\n";
	} else {
		std::cout << number << " is even.\n";
	}
}

int ewarrenFunction2(int num)
{
	if (num < 0) {
		return 1;
	} else {
		return 0;
	}
}
