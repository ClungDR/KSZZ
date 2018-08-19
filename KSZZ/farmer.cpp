#include "farmer.h"


Farmer::Farmer()
{
}

Farmer::Farmer(int id, int blood)
{
	this->id = id;
	this->blood = blood;
}

Farmer::Farmer(int id, int blood, Pos p):Farmer(id,blood,p.x,p.y)
{
}

Farmer::Farmer(int id, int blood, int x, int y):Farmer(id,blood)
{
	this->pos.x = x;
	this->pos.y = y;
}

Farmer::~Farmer()
{	
}

char * Farmer::Move(Pos pos)
{
	cJSON *farmer = cJSON_CreateObject();
	cJSON_AddNumberToObject(farmer, "id", this->id);
	cJSON_AddStringToObject(farmer, "action", "move");
	cJSON_AddItemToObject(farmer, "position", createPos(pos));
	return cJSON_Print(farmer);
}

char * Farmer::Pick(int targetId)
{
	cJSON *farmer = cJSON_CreateObject();
	cJSON_AddNumberToObject(farmer, "id", this->id);
	cJSON_AddStringToObject(farmer, "action","");
	cJSON_AddNumberToObject(farmer, "target", targetId);
	return cJSON_Print(farmer);
}
