//Author: Irvin Neri
//Source file for Space Shooter 7

//#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include "defs.h"
#include "group.h"
#include <iostream>
//#include <time.h>
using namespace std;

#define PI 3.141592653589793

void ShipStop::easeX(Vec vel)
{
    float speed = vel[0];
	if(speed > 0) {
        while (speed > 0) {
            speed *= 0.95;
            speed -= speed*0.1;
            if(speed < 0.05) {
                speed = 0;
            }
            vel[0] = speed;
        }
    } else if(speed < 0) {
        while (speed < 0) {
            speed *= 0.95;
            speed -= speed*0.1;
            if(speed > -0.05) {
                speed = 0;
            }
            vel[0] = speed;
        }
    }
};

void ShipStop::easeY(Vec vel)
{
    float speed = vel[1];
	if(speed > 0) {
        while (speed > 0) {
            speed *= 0.95;
            speed -= speed*0.01;
            if(speed < 0.05) {
                speed = 0;
            }
            vel[1] = speed;
        }
    } else if(speed < 0) {
        while (speed < 0) {
            speed *= 0.95;
            speed -= speed*0.01;
            if(speed > -0.05) {
                speed = 0;
            }
            vel[1] = speed;
        }
    }
};

void Enemy::enemy1(float xres, float yres, float s_xpos, float s_ypos, 
		float *color)
{  
    float theta, e_xpos, e_ypos;
    //float tmp[3] = {color[0], color[1], color[3]};

    e_xpos = xres/2;
    e_ypos = yres - yres/8;

    glColor3f(1,0,0);
    glBegin(GL_POLYGON);

    for(int i=0; i < 360; i++){
        theta =i*PI/180;
        glVertex2f(e_xpos + 20*cos(theta), e_ypos + 20*sin(theta));
    }
    glEnd();
    if((s_xpos+10) >= (e_xpos-20) && (s_xpos-10) <= (e_xpos+20) 
		    && (s_ypos+15) >= (e_ypos-20) && (s_ypos-15) <= (e_ypos+20)){
	    color[0] = 255;
	    color[1] = 0;
	    color[2] = 0;
    } /*else {
	    color[0] = tmp[0];
		color[1] = tmp[1];
		color[2] = tmp[2];
    }*/	
};
/*
void Enemy::e1Health(){
	int health = 5;

}
*/

/*
void Enemy::pathing1(float xpos, float ypos){
	//printf("x:%f\n", xpos);
	//printf("y:%f\n", ypos);
}
*/

