#ifndef DICO_H
#define DICO_H

#include <stdlib.h>
#include <stdio.h>

/*---------------------------- Class CDico -----------------------------
|  Purpose: load a text file to expression and allows user to find random one
|
|	Author : Paul HERNAULT
|			 Thomas AUBIN
*-------------------------------------------------------------------------*/

class CDico
{
public:
	CDico();
	CDico(char * language);
	~CDico();
	char* Random_Expression(); //retourne la chaine de caractère
	bool File_OK();

	void set_Expression(char* expression);
	char* get_Expression();
	void set_Size(int size);
	int get_Size();

protected:
	char* m_language;
	FILE* m_pfile;
	int m_nbLines;
	char* m_expression;
	int m_size;
};

#endif 