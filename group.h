#include "defs.h"


#ifndef group_h_
#define group_h_

class Enemy {
          public:
                  Vec pos;
                  Vec dir;
                  Vec vel;
                  Vec acc;
                  float angle;
                  float color[3];
		  Enemy();
  };

class Credits {
	public:
		int credit_flag = 0;
		void showPage(int xres, int yres);
};

class Movement {
	public:
		void moveLeft(int angle, Vec vel);
		void moveRight(int angle, Vec vel);
		void moveUp(int angle, Vec vel);
		void moveDown(int angle, Vec vel);

};


#endif
