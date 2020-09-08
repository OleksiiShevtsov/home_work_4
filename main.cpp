#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main() {

	HANDLE hFileFrom = 0;
	HANDLE hFileTo = 0;

	DWORD lpBuffer = NULL;
	DWORD lpNumberOfBytesRead = NULL;

	hFileFrom = CreateFileA("E:\\programming\\C++\\System programming\\Junior\\4)APPI\\home_work_4\\test_from.txt",
		GENERIC_WRITE | GENERIC_READ,//достуа к файлу
		0,//разрешение на доступ к файлу другому по
		NULL,//на структуру безопасности 
		OPEN_ALWAYS,//как открыть файл
		FILE_ATTRIBUTE_NORMAL,//Дескриптор базового файла для наслед. атрибутов
		NULL);

	hFileTo = CreateFileA("E:\\programming\\C++\\System programming\\Junior\\4)APPI\\home_work_4\\test_to.txt",
		GENERIC_WRITE | GENERIC_READ,
		0,
		NULL,
		OPEN_ALWAYS,
		FILE_ATTRIBUTE_NORMAL,
		NULL);


	//копирование:
		ReadFile(
			hFileFrom,
			&lpBuffer,
			4,
			&lpNumberOfBytesRead,
			NULL);

		WriteFile(
			hFileTo,
			&lpBuffer,
			4,
			&lpNumberOfBytesRead,
			NULL);

	CloseHandle(hFileFrom);
	CloseHandle(hFileTo);

	return 0;
}