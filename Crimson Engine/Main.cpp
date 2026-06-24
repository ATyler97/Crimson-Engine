#include "Main.h"
#include "Application.h"
#include "Logging.h"

Application app;
int main()
{
	Logging::Log(true, 0);
	app.Start();
    return 0;
};

/*
* This class's whole job is to create application and then run application.Start()
*/