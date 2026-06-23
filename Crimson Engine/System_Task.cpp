#include "System_Task.h"
#include <vector>
#include "Application_Task.h"
#include "Graphics_Task.h"

std::vector<Application_Task> ATasks;
std::vector<Graphics_Task> GTasks;

void System_Task::Initialize()
{
	ATasks = std::vector<Application_Task>();
	GTasks = std::vector<Graphics_Task>();

}

void System_Task::Update()
{

}

