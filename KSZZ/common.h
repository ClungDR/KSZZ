#pragma once
#include<stdio.h>
#include "cJSON.h"

//���嶯����ش���
#define ACT "action"
#define ACT_PICK "pick"
#define ACT_MOVE "move"
#define ACT_ATTACK "attack"

//����JSON���ôʻ�
#define JS_POSITION "position"//λ����Ϣ
#define JS_ID "id"//Ԫ��ID





class Obj {
public:
	int id;
	Obj() {};
	Obj(int i) { id = i; };
	virtual ~Obj() {};
};

struct Pos
{
	int x;
	int y;
};

cJSON* createPos(Pos &pos) {
	cJSON *pJson = cJSON_CreateObject();
	cJSON_AddNumberToObject(pJson, "x", pos.x);
	cJSON_AddNumberToObject(pJson, "y", pos.y);
	return pJson;
}