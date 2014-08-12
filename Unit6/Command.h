#ifndef __COMMAND_H__
#define __COMMAND_H__

class CeilingFan;

class Command
{
public:
    virtual ~Command(){}
	virtual void execute() = 0;
	virtual void undo() = 0;
};

class NoCommand: public Command
{
public:
	void execute(){}
	void undo(){}
};

class CeilingFanHighCommand: public Command
{
	CeilingFan *ceilingFan;
	int prevSpeed;

public:
	CeilingFanHighCommand(CeilingFan *ceilingFan);
	void execute();
	void undo();
};

class CeilingFanMediumCommand: public Command
{
	CeilingFan *ceilingFan;
	int prevSpeed;

public:
	CeilingFanMediumCommand(CeilingFan *ceilingFan);
	void execute();
	void undo();
};

class CeilingFanLowCommand: public Command
{
	CeilingFan *ceilingFan;
	int prevSpeed;

public:
	CeilingFanLowCommand(CeilingFan *ceilingFan);
	void execute();
	void undo();
};

class CeilingFanOffCommand: public Command
{
	CeilingFan *ceilingFan;
	int prevSpeed;

public:
	CeilingFanOffCommand(CeilingFan *ceilingFan);
	void execute();
	void undo();
};

#endif

