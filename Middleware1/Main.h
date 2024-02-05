#pragma once
#include <stdio.h>
#include "BaseObject.h"

class Main
{
public:
	Main() {
		printf("%s\n", __func__);
	}
	virtual ~Main() {
		printf("%s\n", __func__);
	}

	void initialize() {
		printf("%s\n", __func__);
	}
	void run() {
		printf("%s\n", __func__);

		BaseObject* pBaseObject = new BaseObject(1, "BaseObject", "pBaseObject");
		printf("%d %s %d %s\n", 
			pBaseObject->getIdClass(), pBaseObject->getNameClass(), pBaseObject->getIdObject(), pBaseObject->getNameObject());
		
	}
	void finalize() {
		printf("%s\n", __func__);
	}
};

