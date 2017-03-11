/*
 * Singleton.h
 *
 *  Created on: Mar 10, 2017
 *      Author: Robert Larson
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_

class Singleton {

public:
	static Singleton * GetInstance();

private:
	Singleton();
	virtual ~Singleton();

	static Singleton * instance;
};

#endif /* SINGLETON_H_ */
