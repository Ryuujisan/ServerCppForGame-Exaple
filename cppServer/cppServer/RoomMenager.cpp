#include "stdafx.h"
#include "RoomMenager.h"


void RoomMenager::CreateRoom()
{
}

void RoomMenager::CreateRoom(std::string name)
{
}

AbstrackRoom* RoomMenager::GetRoombyId(int id)
{
	return &roomList[id];
}

std::map<int, AbstrackRoom> RoomMenager::GetRoomList()
{
	return std::map<int, AbstrackRoom>();
}

RoomMenager::RoomMenager()
{
}


RoomMenager::~RoomMenager()
{
}
