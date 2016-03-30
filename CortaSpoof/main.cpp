#include "cortaspoof.h"
#include <qdebug.h>
#include <iostream>
#include <QtWidgets/QApplication>
#include <crtdbg.h>

#define _CRTDBG_MAP_ALLOC


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CortaSpoof w;

	// Detection fuites memoire
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	std::cout << "start interface";
	w.show();

	return a.exec();
}
