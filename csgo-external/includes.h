//--------------------includes-------------------------------------
#pragma once
#include <iostream>
#include "windows.h"
#include "sdk/skCrypter.h"
#include "sdk/memory.h"
#include "sdk/csgo.hpp"
#include "chrono"
#include "thread"
//--------------------namespaces-----------------------------------
using namespace hazedumper;
using namespace netvars;
using namespace signatures;
//-----------------random-console-window-name----------------------
std::string random_string(int length)
{
	const char* charmap = crypt ("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	std::string result;
	srand(time(NULL));
	for (int i = 0; i < length; ++i)
	{
		result += charmap[rand() % 52];
    }
	return result;
}
//------------------------------objects---------------------------
p_module client_dll;
memory mem;