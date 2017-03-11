/*
 * Singleton.cpp
 *
 *  Created on: Mar 10, 2017
 *      Author: Robert Larson
 */

#include "Singleton.h"

Singleton * Singleton::instance = 0;

Singleton::Singleton() {
}

Singleton::~Singleton() {
}


Singleton * Singleton::GetInstance()
{
	if(instance == 0)
	{
		instance = new Singleton();
	}

	return instance;
}
