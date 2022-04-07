//Julian Pereyra 
//Source file for Space Shooter 7
//Start Date: February 24th
//End Date: TBD
//

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <GL/glx.h>
#include <cmath>
#include "defs.h"
#include "group.h"
#include "fonts.h"
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <ctime>
#include <cmath>


#define PI 3.141592653589793

using namespace std;

void jpereyraFunction(int argc) 
{
    if (argc >= 1) {
        cout << "\nERROR: Need a command line argument!";
        cout << "Example: ./ss7 <command>";
    } else {
        cout << "Succesfully entered a command!" << endl;    
    }
};

void jpereyraFunctionTwo(int score)
{
    if (score >= 7 || score <= 10) {
        cout << "\nCongrats! You passed!" << endl;
        cout << "You got at least a C+" << endl;
    } else {
        cout << "Darn, you failed." << endl;
        cout << "Study for next time! Here are some resources..." << endl;
    }
};



void Movement::moveLeft(int angle, Vec vel) 
{
		//apply thrust
		//convert ship angle to radians
		Flt rad = ((angle+180.0) / 360.0f) * PI * 2.0;
		//convert angle to a vector
		Flt xdir = cos(rad);
		Flt ydir = sin(rad);
		vel[0] += xdir*0.1f;
		vel[1] += ydir*0.1f;
		Flt speed = sqrt(vel[0]*vel[0]+
				vel[1]*vel[1]);
		if (speed > 1.0f) {
			speed = 1.0f;
			//normalize2d(g.ship.vel);
			vel[0] *= speed;
			vel[1] *= speed;
		}
};


void Movement::moveRight(int angle, Vec vel) 
{
		//apply thrust
		//convert ship angle to radians
		Flt rad = ((angle+0.0) / 360.0f) * PI * 2.0;
		//convert angle to a vector
		Flt xdir = cos(rad);
		Flt ydir = sin(rad);
		vel[0] += xdir*0.1f;
		vel[1] += ydir*0.1f;
		Flt speed = sqrt(vel[0]*vel[0]+
				vel[1]*vel[1]);
		if (speed > 1.0f) {
			speed = 1.0f;
			//normalize2d(g.ship.vel);
			vel[0] *= speed;
			vel[1] *= speed;
		}
};


void Movement::moveUp(int angle, Vec vel) 
{
		//apply thrust
		//convert ship angle to radians
		Flt rad = ((angle+90.0) / 360.0f) * PI * 2.0;
		//convert angle to a vector
		Flt xdir = cos(rad);
		Flt ydir = sin(rad);
		vel[0] += xdir*0.1f;
		vel[1] += ydir*0.1f;
		Flt speed = sqrt(vel[0]*vel[0]+
				vel[1]*vel[1]);
		if (speed > 1.0f) {
			speed = 1.0f;
			//normalize2d(g.ship.vel);
			vel[0] *= speed;
			vel[1] *= speed;
		}
};


void Movement::moveDown(int angle, Vec vel) 
{
		//apply thrust
		//convert ship angle to radians
		Flt rad = ((angle+270.0) / 360.0f) * PI * 2.0;
		//convert angle to a vector
		Flt xdir = cos(rad);
		Flt ydir = sin(rad);
		vel[0] += xdir*0.1f;
		vel[1] += ydir*0.1f;
		Flt speed = sqrt(vel[0]*vel[0]+
				vel[1]*vel[1]);
		if (speed > 1.0f) {
			speed = 1.0f;
			//normalize2d(g.ship.vel);
			vel[0] *= speed;
			vel[1] *= speed;
		}
};
