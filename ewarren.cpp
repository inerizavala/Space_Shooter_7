//Source file for Evan Warren

#ifndef _evan_w_
#define _evan_w_
class Evan {
	private:
		int flag;
	public:
		Evan(int x);
		void gg_show_name();
};

#endif
// end "header"

#include <stdio.h>
#include <string.h>
#include <iostream>
//class Evan ew("Evan"); //initial instance of class

Evan::Evan(int x = 0)
{
	flag = x;
	std::cout << "Evan Constructor set\n";
}
/*void Evan::gg_show_name()
{
	printf("%s!\n", name);
	return;

}*/


