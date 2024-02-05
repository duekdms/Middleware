#pragma once

#include <string.h>

#define LENGTH_NAME 20

class BaseObject
{
private:
	// object id counter
	static int g_idObject;

	// attributes
	int idClass;
	char nameClass[LENGTH_NAME];

	int idObject;
	char nameObject[LENGTH_NAME];
public:
	// constructors and destructors
	BaseObject(int idClass, const char* nameClass, const char* nameObject) {
		this->idClass = idClass;
		strcpy_s(this->nameClass, nameClass);
		this->idObject = g_idObject++;
		strcpy_s(this->nameObject, nameObject);
	}
	virtual ~BaseObject() {}

	virtual void initialize() {}
	virtual void finalize() {}

	// getters and setters
	int getIdClass() { return this->idClass; }
	char* getNameClass() { return this->nameClass; }

	int getIdObject() { return this->idObject; }
	char* getNameObject() { return this->nameObject; }
};

