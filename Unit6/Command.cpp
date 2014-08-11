#include "Command.h"
#include "CeilingFan.h"

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan *ceilingFan)
{
	this->ceilingFan = ceilingFan;
}

void CeilingFanHighCommand::execute()
{
	prevSpeed = ceilingFan->getSpeed();
	ceilingFan->high();
}

void CeilingFanHighCommand::undo()
{
	switch(prevSpeed)
	{
	case CeilingFan::HIGH:
		ceilingFan->high();
		break;
	case CeilingFan::MEDIUM:
		ceilingFan->medium();
		break;
	case CeilingFan::LOW:
		ceilingFan->low();
		break;
	case CeilingFan::OFF:
		ceilingFan->off();
		break;
	default:
		ceilingFan->off();
	}
}

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan *ceilingFan)
{
	this->ceilingFan = ceilingFan;
}

void CeilingFanMediumCommand::execute()
{
	prevSpeed = ceilingFan->getSpeed();
	ceilingFan->medium();
}

void CeilingFanMediumCommand::undo()
{
	switch(prevSpeed)
	{
	case CeilingFan::HIGH:
		ceilingFan->high();
		break;
	case CeilingFan::MEDIUM:
		ceilingFan->medium();
		break;
	case CeilingFan::LOW:
		ceilingFan->low();
		break;
	case CeilingFan::OFF:
		ceilingFan->off();
		break;
	default:
		ceilingFan->off();
	}
}

CeilingFanLowCommand::CeilingFanLowCommand(CeilingFan *ceilingFan)
{
	this->ceilingFan = ceilingFan;
}

void CeilingFanLowCommand::execute()
{
	prevSpeed = ceilingFan->getSpeed();
	ceilingFan->low();
}

void CeilingFanLowCommand::undo()
{
	switch(prevSpeed)
	{
	case CeilingFan::HIGH:
		ceilingFan->high();
		break;
	case CeilingFan::MEDIUM:
		ceilingFan->medium();
		break;
	case CeilingFan::LOW:
		ceilingFan->low();
		break;
	case CeilingFan::OFF:
		ceilingFan->off();
		break;
	default:
		ceilingFan->off();
	}
}

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan *ceilingFan)
{
	this->ceilingFan = ceilingFan;
}

void CeilingFanOffCommand::execute()
{
	prevSpeed = ceilingFan->getSpeed();
	ceilingFan->off();
}

void CeilingFanOffCommand::undo()
{
	switch(prevSpeed)
	{
	case CeilingFan::HIGH:
		ceilingFan->high();
		break;
	case CeilingFan::MEDIUM:
		ceilingFan->medium();
		break;
	case CeilingFan::LOW:
		ceilingFan->low();
		break;
	case CeilingFan::OFF:
		ceilingFan->off();
		break;
	default:
		ceilingFan->off();
	}
}

