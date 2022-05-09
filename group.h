#include "defs.h"

#ifndef group_h_
#define group_h_

/*
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
*/

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

class Score {
	public:
		int score_flag = 0;
		int score = 0;
		void increaseScore(int num);
    void changeShipColor(int score);
};

void shipPos(double spos0, double spos1, int xres, int yres);
class ShipStop{
	public:
        void easeX(Vec vel);
        void easeY(Vec vel);
};

class Enemy{
    public:
	void enemy1(float e_xpos, float e_ypos, float s_xpos, float s_ypos);
        //void pathing1(float xpos, float ypos);
};

int ewarrenFunction2(int num);

int jpereyraFunctionTwo(int bullets);


#endif
