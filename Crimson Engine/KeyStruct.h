#pragma once
struct Key
{
	Key(char keyChar) : KeyChar(keyChar) {}
	char KeyChar;
	bool isPressed = false;
};