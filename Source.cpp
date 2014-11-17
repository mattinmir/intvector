#include "intvector.h"
#include <iostream>

int main()
{


	intvector v, v2, v3;

	v.push_back(66);
	v.push_back(342);
	v.push_back(34);
	v.push_back(46);
	v.push_back(50);
	v.push_back(1);

	int x = v.at(3);

	int y = v[3];
	v[3] = 47;
	y = v[3];

	int z = v.find(1);

	v3 = v2 = v;


	
	return 0;
}
