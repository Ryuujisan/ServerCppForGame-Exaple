#pragma once
#include "AbstrackRoom.h"


class RoomMenager 
{
private:
	std::map<int, AbstrackRoom> roomList;

public:

	void CreateRoom();
	void CreateRoom(std::string name);

	AbstrackRoom * GetRoombyId(int id);
	std::map<int, AbstrackRoom> GetRoomList();

	RoomMenager();
	~RoomMenager();
};


