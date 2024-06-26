#pragma once
#include <Windows.h>
#include <WinUser.h>

#include "Utils.h"

using namespace System;
using namespace System::Windows::Forms;

public ref class Room {

private:
	array<unsigned char>^ img;
	String^ roomCode;
	String^ building;
	String^ status;
	String^ roomType;
	String^ boardType;
	bool^ tv;
	bool^ ac;

public:

	Room() : roomCode(nullptr), building(nullptr),
		status(nullptr), roomType(nullptr), 
		boardType(nullptr), tv(false), ac(false) {}

	~Room() {}

	/*--------------------------------------------------------------------------------------GETTER---------------------------------------------------------------------------*/

	array<unsigned char>^ getImg(void) { return img; }

	String^ getRoomCode(void) { return roomCode; }

	String^ getBuilding(void) { return building; }

	String^ getStatus(void) { return status; }

	String^ getRoomType(void) { return roomType; }

	String^ getBoardType(void) { return boardType; }

	bool^ getTv(void) { return tv; }

	bool^ getAc(void) { return ac; }

	/*--------------------------------------------------------------------------------------SETTER---------------------------------------------------------------------------*/

	void setImg(array<unsigned char>^ IMG) { img = IMG; }

	void setRoomCode(String^ ROOM_CODE) { roomCode = ROOM_CODE; }

	void setBuilding(String^ BUILDING) { building = BUILDING; }

	void setStatus(String^ STATUS) { status = STATUS; }

	void setRoomType(String^ ROOM_TYPE) { roomType = ROOM_TYPE; }

	void setBoardType(String^ BOARD_TYPE) { boardType = BOARD_TYPE; }

	void setTv(bool^ TV) { tv = TV; }

	void setAc(bool^ AC) { ac = AC; }

	/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};