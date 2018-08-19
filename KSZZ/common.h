#pragma once
#include<stdio.h>
#include "cJSON.h"

//定义动作相关词语
#define ACT "action"
#define ACT_PICK "pick"
#define ACT_MOVE "move"
#define ACT_ATTACK "attack"

//定义JSON常用词汇
#define JS_POSITION "position"//位置信息
#define JS_ID "id"//元素ID





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