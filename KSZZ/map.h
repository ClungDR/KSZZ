#pragma once

#define MINE_CHAR '$';
#define LAND_CHAR ' ';
#define RIVER_CHAR '#';
#define IS_LAND(c) (c==LAND_CHAR);
#define IS_MINE(c) (c==MINE_CHAR);
#define IS_RIVER(c) (c==RIVER_CHAR);



#define MINE_TYPE 0;
#define LAND_TYPE 1;
#define RIVER_TYPE 2;


class Map
{
	unsigned int width;
	unsigned int height;
	unsigned char **resource;

	Map(int w,int h) {
		width = w;
		height = h;
		resource = new unsigned char*[width];
		for (int i = 0; i < width; i++)
			resource[i] = new unsigned char[height];
	}
	



};

