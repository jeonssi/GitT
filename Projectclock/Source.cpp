#include <stdio.h>
#include <Windows.h>

HANDLE hBuffer[2];
int screenIndex;

void IniBuffer();

void Flipbuffer();

void Clearbuffer();

void WriteBuffer(int x, int y, const char* shape, int color);

void ReleaseBuffer();

struct Obj {

	int x;
	int u;
	const char* shape;
};

Obj* player = nullptr;

int main() {
	
	return 0;
}