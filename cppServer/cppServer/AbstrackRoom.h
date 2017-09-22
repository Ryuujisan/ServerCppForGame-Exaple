#pragma once
#include "RoomMenager.h"
#include "Physics.h"

class AbstrackRoom
{

protected:
	int id;
	std::string name;
	//Type type;
	bool run;

	Physics* physics;
	

public:
	AbstrackRoom();
	AbstrackRoom(int id, std::string name);
	virtual void Run();
	~AbstrackRoom();
};

