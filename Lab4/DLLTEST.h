#ifndef _DLLTEST_H_
#define _DLLTEST_H_ 

#include <iostream>

using namespace std;
#include <stdio.h>
#include <windows.h> 

extern "C" __declspec(dllexport) void Number();

#endif