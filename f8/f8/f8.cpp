/*
* FILE : f8.cpp
* PROJECT : SENG1000- focused assignment 8
* PROGRAMMER : Bhawanjeet Kaur Gill
* FIRST VERSION : 2024-03-29
* DESCRIPTION : Write a program to give you practice at working with C-style strings, files, command-line arguments,
*               and structs.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)

#define kMaximumLength 21
struct MyData
{
	int howMany = 0;
	char theText[kMaximumLength] = "";
	char directoryPath[kMaximumLength] = "";
	char filename[kMaximumLength] = "";
};

int main(int argc, char* argv[])
{
	if (argc != 5)
	{
		printf("Error: The program requires four arguments only.\n");
		return 1;
	}
	struct MyData myArgs;
	myArgs.howMany = atoi(argv[1]);
	strncpy(myArgs.theText, argv[2], kMaximumLength - 1);
	myArgs.theText[kMaximumLength - 1] = '\0';
	strncpy(myArgs.directoryPath, argv[3], kMaximumLength - 1);
	myArgs.directoryPath[kMaximumLength - 1] = '\0';
	strncpy(myArgs.filename, argv[4], kMaximumLength - 1);
	myArgs.filename[kMaximumLength - 1] = '\0';

	char fullPath[kMaximumLength];
	snprintf(fullPath, sizeof(fullPath), "%s\%s", myArgs.directoryPath, myArgs.filename);

	return 0;
}