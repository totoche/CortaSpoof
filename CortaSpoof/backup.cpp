#include "backup.h"
#include "cortaspoof.h"

/*---------------------------- Constructor CBackup -----------------------------
|	Class CBackup
|	Function CBackup
|
|  Purpose: Constructor of CBackup class, takes as argument a pointer to
|			CortaSpoof class to get all data to write on File "backup"
|
|	Parameters:
|       CortaSpoof * corta (IN) -- pointer on CortaSpoof class
|
*-------------------------------------------------------------------------*/
CBackup::CBackup(CortaSpoof* corta)
{
	m_filename = "backup";
	m_corta = corta;
	m_pfile = fopen(m_filename, "r");
	if (!m_pfile)
	{
		return;
	}
	rewind(m_pfile);
	
}

/*---------------------------- Constructor CBackup -----------------------------
|	Class CBackup
|	Function CBackup
|
|  Purpose: Constructor of CBackup class, takes as argument a pointer to
|			CortaSpoof class to get all data to write on File with the name send
|			in parameters.
|
|	Parameters:
|		char* filename (IN) -- String with file name.
|       CortaSpoof * corta (IN) -- pointer on CortaSpoof class
|
*-------------------------------------------------------------------------*/
CBackup::CBackup(char* filename, CortaSpoof* corta)
{
	m_filename = filename;
	m_corta = corta;
	m_pfile = fopen(m_filename, "r");
	if (!m_pfile)
	{
		return;
	}
	rewind(m_pfile);
	
}

/*---------------------------- Destructor CBackup -----------------------------
|	Class CBackup
|	Function ~CBackup
|
|  Purpose: Destructor of CBackup class
|
*-------------------------------------------------------------------------*/
CBackup::~CBackup()
{
	if (m_pfile)
	{
		fclose(m_pfile);
	}
}

/*---------------------------- File OK -----------------------------
|	Class CBackup
|	Function File_OK
|
|  Purpose: checked if the file was opened properly.
|
|	return : true if opened correctly
*-------------------------------------------------------------------------*/
bool CBackup::File_OK()
{
	if (!m_pfile)
		return false;
	return true;
}

/*---------------------------- backup -----------------------------
|  Function backup
|
|  Purpose:  This function backup all custom variable in file
|
|  Parameters:
|       CortaSpoof * m_corta (In) pointer to CortaSpoof class
|		char* filename (In) name of file to save all data
|
|  Returns:  true if OK, false else
*-------------------------------------------------------------------------*/
bool CBackup::Backup()
{
	if (!m_pfile)
	{
		m_pfile = fopen(m_filename, "wb");
		if (!m_pfile)
			return false;
	}
	int n;

	fwrite(m_corta->get_Query(), sizeof(char), 100, m_pfile);
	fwrite(m_corta->get_Language(), sizeof(char), 10, m_pfile);
	fwrite(m_corta->get_Market(), sizeof(char), 3, m_pfile);
	fwrite(m_corta->get_DateFormat(), sizeof(char), 12, m_pfile);
	fwrite(m_corta->get_SafeSearch(), sizeof(char), 50, m_pfile);
	n = m_corta->get_OSSKU();
	fwrite(&n, sizeof(int), 1, m_pfile);
	fwrite(m_corta->get_NetworkType(), sizeof(char), 50, m_pfile);
	n = m_corta->get_DTZ();
	fwrite(&n, sizeof(int), 1, m_pfile);
	fwrite(m_corta->get_UserDisplayName(), sizeof(char), 100, m_pfile);
	fwrite(m_corta->get_MachineId(), sizeof(char), SIZE_MACHINE_ID, m_pfile);
	fwrite(m_corta->get_DeviceId(), sizeof(char), SIZE_DEVICE_ID, m_pfile);
	n = m_corta->get_DeviceScale();
	fwrite(&n, sizeof(int), 1, m_pfile);
	fwrite(m_corta->get_DeviceManufacturer(), sizeof(char), 100, m_pfile);
	fwrite(m_corta->get_Theme(), sizeof(char), 50, m_pfile);
	fwrite(m_corta->get_DeviceDimensions(), sizeof(char), 10, m_pfile);
	fwrite(m_corta->get_DeviceProduct(), sizeof(char), 100, m_pfile);
	fwrite(m_corta->get_CBT(), sizeof(char), 10, m_pfile);
	fwrite(m_corta->get_Touch(), sizeof(char), 6, m_pfile);
	fwrite(m_corta->get_DeviceSession(), sizeof(char), SIZE_CLIENT_SESSION, m_pfile);

	return true;
}

/*---------------------------- backup -----------------------------
|  Function backup
|
|  Purpose:  This function load a backup file
|
|  Parameters:
|       CortaSpoof * m_corta (In/Out) pointer to CortaSpoof class
|		char* filename (In) name of file to load all data
|
|  Returns:  true if OK, false else
*-------------------------------------------------------------------------*/
bool CBackup::Load_Backup()
{
	int result;
	char* buffer;
	int n;
	int size;

	if (!m_pfile)
		return false;

	// allocate memory to contain the whole file:
	buffer = (char*)malloc(sizeof(char) * 100);
	if (buffer == NULL) { return false; }

	//verify size file
	/*fseek(m_pfile, 0, SEEK_END);
	size = ftell(m_pfile);
	if (size != SIZE_BACKUP_FILE)
		return false;
	rewind(m_pfile);*/

	// read each variable in file:
	result = fread(buffer, sizeof(char), 100, m_pfile);
	if (result != 100)
		return false;
	m_corta->set_Query(buffer);

	result = fread(buffer, sizeof(char), 10, m_pfile);
	if (result != 10)
		return false;
	m_corta->set_Language(buffer);

	result = fread(buffer, sizeof(char), 3, m_pfile);
	if (result != 3)
		return false;
	m_corta->set_Market(buffer);

	result = fread(buffer, sizeof(char), 12, m_pfile);
	if (result != 12)
		return false;
	m_corta->set_DateFormat(buffer);

	result = fread(buffer, sizeof(char), 50, m_pfile);
	if (result != 50)
		return false;
	m_corta->set_SafeSearch(buffer);

	result = fread(&n, sizeof(int), 1, m_pfile);
	if (result != 1)
		return false;
	m_corta->set_OSSKU(n);

	result = fread(buffer, sizeof(char), 50, m_pfile);
	if (result != 50)
		return false;
	m_corta->set_NetworkType(buffer);

	result = fread(&n, sizeof(int), 1, m_pfile);
	if (result != 1)
		return false;
	m_corta->set_DTZ(n);

	result = fread(buffer, sizeof(char), 100, m_pfile);
	if (result != 100)
		return false;
	m_corta->set_UserDisplayName(buffer);

	result = fread(buffer, sizeof(char), SIZE_MACHINE_ID, m_pfile);
	if (result != SIZE_MACHINE_ID)
		return false;
	m_corta->set_MachineId(buffer);

	result = fread(buffer, sizeof(char), SIZE_DEVICE_ID, m_pfile);
	if (result != SIZE_DEVICE_ID)
		return false;
	m_corta->set_DeviceId(buffer);

	result = fread(&n, sizeof(int), 1, m_pfile);
	if (result != 1)
		return false;
	m_corta->set_DeviceScale(n);

	result = fread(buffer, sizeof(char), 100, m_pfile);
	if (result != 100)
		return false;
	m_corta->set_DeviceManufacturer(buffer);

	result = fread(buffer, sizeof(char), 50, m_pfile);
	if (result != 50)
		return false;
	m_corta->set_Theme(buffer);

	result = fread(buffer, sizeof(char), 10, m_pfile);
	if (result != 10)
		return false;
	m_corta->set_DeviceDimensions(buffer);

	result = fread(buffer, sizeof(char), 100, m_pfile);
	if (result != 100)
		return false;
	m_corta->set_DeviceProduct(buffer);

	memset(buffer, 0, 100);
	result = fread(buffer, sizeof(char), 10, m_pfile);
	if (result != 10)
		return false;
	m_corta->set_CBT(buffer);

	result = fread(buffer, sizeof(char), 6, m_pfile);
	if (result != 6)
		return false;
	m_corta->set_Touch(buffer);

	result = fread(buffer, sizeof(char), SIZE_CLIENT_SESSION, m_pfile);
	if (result != SIZE_CLIENT_SESSION)
		return false;
	m_corta->set_DeviceSession(buffer);

	free(buffer);

	return true;
}
