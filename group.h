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


#endif
