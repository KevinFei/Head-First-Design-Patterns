#ifndef __TURKEYADAPTER_H__
#define __TURKEYADAPTER_H__

class Duck;
class Turkey;

class TurkeyAdapter: public Duck
{
	Turkey *turkey;

public:
	TurkeyAdapter(Turkey *turkey);
	void quack();
	void fly();
};

#endif

