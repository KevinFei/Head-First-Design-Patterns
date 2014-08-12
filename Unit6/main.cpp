#include <iostream>

#include "CeilingFan.h"
#include "Command.h"
#include "RemoteControl.h"

using namespace std;

int main()
{
	RemoteControlWithUndo *remoteControl = new RemoteControlWithUndo();
	CeilingFan *ceilingFan = new CeilingFan("Living Room");

	Command *ceilingFanMedium = new CeilingFanMediumCommand(ceilingFan);
	Command *ceilingFanHigh = new CeilingFanHighCommand(ceilingFan);
	Command *ceilingFanOff = new CeilingFanOffCommand(ceilingFan);

	remoteControl->setCommand(0, ceilingFanMedium, ceilingFanOff);
	remoteControl->setCommand(1, ceilingFanHigh, ceilingFanOff);

	remoteControl->onButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);
	remoteControl->undoButtonWasPushed();

	remoteControl->onButtonWasPushed(1);
	remoteControl->undoButtonWasPushed();

    delete remoteControl;
    delete ceilingFan;
    delete ceilingFanMedium;
    delete ceilingFanHigh;
    delete ceilingFanOff;

	return 0;
}

