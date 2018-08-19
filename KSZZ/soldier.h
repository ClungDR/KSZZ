#pragma once
#include "common.h"

class Soldier :public Obj {
public:
	int blood;
	Pos pos;
public:
	Soldier();

	~Soldier();

	char* Move(Pos p);
	char* Attack(int targetId);
	char* Protect(int targetId);
};