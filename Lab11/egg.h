#pragma once
#ifdef EGG_EXPORTS
#define EGG_API __declspec(dllexport)
#else
#define EGG_API __declspec(dllimport)
#endif
#include <string>

int size;
int weight;

extern "C" EGG_API bool crash(std::string who);
extern "C" EGG_API void say(std::string text);