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

class Menu {
    public:
        int credits_flag = 0;
        int menu_flag = 0;
        int help_flag = 0;
        void showCredits(int xres, int yres);
        void showMenu(int xres, int yres);
        void showHelp(int xres, int yres);
        void btate(int creditsFlag, int helpFlag, int menuFlag);
};

void shipPos(double spos0, double spos1, int xres, int yres);

int ewarrenFunction2(int num);

int jpereyraFunctionTwo(int bullets);

#endif
