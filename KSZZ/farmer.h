#pragma once
#include "common.h"

#define ID_FIELD "id"



class Farmer:public Obj {
public:
	int blood;//Ѫ������
	Pos pos;
public:
	Farmer();
	Farmer(int id,int blood);
	Farmer(int id, int blood, int x, int y);
	Farmer(int id,int blood,Pos p);
	~Farmer();

	//����
	char* Move(Pos pos);
	//�ɿ�
	char* Pick(int targetId);
};