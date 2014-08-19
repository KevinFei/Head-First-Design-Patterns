#ifndef __REMOTECONTROL_H__
#define __REMOTECONTROL_H__

class Command;

class RemoteControlWithUndo
{
private:
    Command **onCommands;
    Command **offCommands;
    Command *undoCommand;

public:
    RemoteControlWithUndo();
    void setCommand(int slot, Command *onCommand, Command *offCommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);
    void undoButtonWasPushed();
};

#endif

