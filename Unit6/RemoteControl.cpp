#include "RemoteControl.h"
#include "Command.h"

RemoteControlWithUndo::RemoteControlWithUndo()
{
    onCommands = new Command*[7];
    offCommands = new Command*[7];

    Command *noCommand = new NoCommand();
    for(int i=0; i<7; i++)
    {
        onCommands[i] = noCommand;
        offCommands[i] = noCommand;
    }
    undoCommand = noCommand;
}

void RemoteControlWithUndo::setCommand(int slot, Command *onCommand, Command *offCommand)
{
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}

void RemoteControlWithUndo::onButtonWasPushed(int slot)
{
    onCommands[slot]->execute();
    undoCommand = onCommands[slot];
}

void RemoteControlWithUndo::offButtonWasPushed(int slot)
{
    offCommands[slot]->execute();
    undoCommand = offCommands[slot];
}

void RemoteControlWithUndo::undoButtonWasPushed()
{
    undoCommand->undo();
}

