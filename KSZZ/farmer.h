#pragma once
#include "common.h"

#define ID_FIELD "id"



class Farmer:public Obj {
public:
	int blood;//—™¡øº∆À„
	Pos pos;
public:
	Farmer();
	Farmer(int id,int blood);
	Farmer(int id, int blood, int x, int y);
	Farmer(int id,int blood,Pos p);
	~Farmer();

	//Ã”≈‹
	char* Move(Pos pos);
	//≤…øÛ
	char* Pick(int targetId);
};