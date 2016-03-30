#ifndef BACKUP_H
#define BACKUP_H

#include <iostream>
#include "cortaspoof.h"

#define SIZE_BACKUP_FILE 695

/*---------------------------- Class CBackup -----------------------------
|  Purpose: This class is use to save value of CortaSpoof headers on a file
|
|	Author : Paul HERNAULT
|			 Thomas AUBIN
*-------------------------------------------------------------------------*/

class CortaSpoof;
class CBackup
{

public:
	CBackup(CortaSpoof * corta);
	CBackup(char *filename, CortaSpoof * corta);
	~CBackup();

	bool File_OK();
	bool Backup();
	bool Load_Backup();

protected:
	FILE* m_pfile;
	char* m_filename;
	CortaSpoof *m_corta;

};

#endif 