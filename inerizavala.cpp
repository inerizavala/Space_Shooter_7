//Author: Irvin Neri
//Source file for Space Shooter 7

//#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include "defs.h"
#include "group.h"
#include <iostream>
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

void Enemy::enemy1(float e_xpos, float e_ypos, float s_xpos, float s_ypos){
    //if(health >= 0){
        float theta;
        glColor3f(1,0,0);
        glBegin(GL_POLYGON);

        for(int i=0; i < 360; i++){
            theta =i*PI/180;
            glVertex2f(e_xpos + 20*cos(theta), e_ypos + 20*sin(theta));
        }
        glEnd();
        if((s_xpos+10) >= (e_xpos-20) && (s_xpos-10) <= (e_xpos+20)){
            if((s_ypos+15) >= (e_ypos-20) && (s_ypos-15) <= (e_ypos+20)){
                printf("In enemy");
            }
        }
    //}


}
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

