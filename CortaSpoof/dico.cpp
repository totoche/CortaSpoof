#include "dico.h"
#include <string.h>
#include <time.h>
#include <fstream>
#include <iostream>

/*---------------------------- Constructor CDico -----------------------------
|	Class CDico
|	Function CDico
|
|  Purpose: Constructor of CDico class, use all language for expression
|
|	TO DO : gestion de tous les dico en même temps
|
|	Parameters:
|       CortaSpoof * corta (IN) -- pointer on CortaSpoof class
|
*-------------------------------------------------------------------------*/
CDico::CDico()
{
	m_language = NULL;
	char c;
	char filename[50];

	m_expression = NULL;
	m_nbLines = 0;
	srand(time(0));

	sprintf(filename, "dico/fr-FR.txt");
	m_pfile = fopen(filename, "r");
	if (!m_pfile)
	{
		return;
	}
	while ((c = getc(m_pfile)) != EOF){
		if (c == '\n')
			m_nbLines++;
	}
	rewind(m_pfile);
}

/*---------------------------- Constructor CDico -----------------------------
|	Class CDico
|	Function CDico
|
|  Purpose: Constructor of CDico class, use language in parameter
|
|	TO DO : gestion de tous les dico en même temps
|
|	Parameter:
|       char* language (IN) -- expressions language
|
*-------------------------------------------------------------------------*/
CDico::CDico(char* language)
{
	char c;
	char filename[50];

	m_language = new char[strlen(language) + 1];
	strcpy(m_language, language);

	m_expression = NULL;
	m_nbLines = 0;
	srand(time(0));

	sprintf(filename, "dico/%s.txt", language);
	m_pfile = fopen(filename, "r");
	if (!m_pfile)
	{
		return;
	}
	while ((c = getc(m_pfile)) != EOF){
		if (c == '\n')
			m_nbLines++;
	}
	rewind(m_pfile);
}

/*---------------------------- File OK -----------------------------
|	Class CDico
|	Function File_OK
|
|  Purpose: checked if the file was opened properly.
|
|	return : true if opened correctly
*-------------------------------------------------------------------------*/
bool CDico::File_OK()
{
	if (!m_pfile)
		return false;
	return true;
}

/* getter and setter */
void CDico::set_Expression(char* expression)
{
	strcpy(m_expression, expression);
}
char* CDico::get_Expression()
{
	return m_expression;
}
void CDico::set_Size(int size)
{
	m_size = size;
}
int CDico::get_Size()
{
	return m_size;
}


/*---------------------------- Random Expression -----------------------------
|	Class CDico
|	Function Random_Expression
|
|  Purpose: search in file a random line and return this one
|
|	return : pointer to string with expression
*-------------------------------------------------------------------------*/
char* CDico::Random_Expression()
{
	int numLine;
	int i;
	char c;

	if(m_expression != NULL)
		delete [] (m_expression);
	
	numLine = rand() % m_nbLines;

	for (i = 0; i < numLine; i++)
	{
		while ((char)fgetc(m_pfile) != '\n'){}
	}
	m_size = 0;
	while ((c = (char)fgetc(m_pfile)) != '\n' && c != EOF)
	{
		m_size++;
	}
	m_size++;
	fseek(m_pfile,-m_size-1,SEEK_CUR);
	m_expression = new char[m_size];
	fgets(m_expression, m_size, m_pfile);
	rewind(m_pfile);

	return m_expression;
}

/*---------------------------- Destructor CDico -----------------------------
|	Class CDico
|	Function ~CDico
|
|  Purpose: deallocate memory for strings and close file
|
*-------------------------------------------------------------------------*/
CDico::~CDico()
{
	if (m_language)
	{
		delete [] m_language;
	}
	if (m_expression)
	{
		delete [] m_expression;
	}
	fclose(m_pfile);
}