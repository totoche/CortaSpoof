#include "cortaspoof.h"
#include <iostream>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <QDebug>
#include <regex>
#include "backup.h"
#include <QMessageBox.h>

/*---------------------------- Random String -----------------------------
|  Function Ramdom_String
|
|  Purpose:  This functin return a random string with lower caracters and numbers
|
|  Parameters:
|       char* str (IN/OUT) -- string to randomize.
|		int size (IN) -- length of the string
|
|  Returns:  return true if OK, false else.
*-------------------------------------------------------------------------*/
bool Random_String_Low(char str[], int size)
{
	int i;
	if (str == NULL)
	{
		return false;
	}

	srand(time(0));
	str[size - 1] = '\0';
	for (i = 0; i < size - 1; i++)
	{
		char c;
		c = rand() % 36;
		if (c < 26)
		{
			str[i] = c + 97;
		}
		else
		{
			str[i] = c + 22;
		}
	}
	return true;
}

/*---------------------------- Random String UP -----------------------------
|  Function Ramdom_String_UP
|
|  Purpose:  This functin return a random string with upper caracters and numbers
|
|  Parameters:
|       char* str (IN/OUT) -- string to randomize.
|		int size (IN) -- length of the string
|
|  Returns:  return true if OK, false else.
*-------------------------------------------------------------------------*/
bool Random_String_UP(char str[], int size)
{
	int i;
	if (str == NULL)
	{
		return false;
	}
	srand(time(0));
	str[size - 1] = '\0';
	for (i = 0; i < size - 1; i++)
	{
		char c;
		c = rand() % 16;
		if (c < 6)
		{
			str[i] = c + 65;
		}
		else
		{
			str[i] = c + 42;
		}
	}
	return true;
}

/*---------------------------- Go Spoof -----------------------------
|  Function Go_Spoof
|
|  Purpose:  This function prepare headers and params with options and send it
|
|  Parameters:
|       LPVOID lpParameter (IN) -- pointer to CortaSpoof object
|
|  Returns:  0 if OK
*-------------------------------------------------------------------------*/
DWORD WINAPI Go_Spoof(LPVOID lpParameter)
{
	CortaSpoof& win = *((CortaSpoof*)lpParameter);
	CSpoof spoof = CSpoof(&win);
	spoof.Spoof();

	return 0;
}

/*------------------- getter and setter of class CortaSpoof ------------------------*/
bool CortaSpoof::get_Start()
{
	return m_start;
}
int CortaSpoof::get_Speed()
{
	return m_speed;
}
bool* CortaSpoof::get_Choice()
{
	return m_choice;
}
char* CortaSpoof::get_Query()
{
	return m_query;
}
void CortaSpoof::set_Query(const char* str)
{
	if (strlen(str) > 100)
		return;
	strcpy(m_query, str);
}
bool CortaSpoof::get_Dico()
{
	return m_dico;
}
void CortaSpoof::set_Dico(bool useDico)
{
	m_dico = useDico;
}
char* CortaSpoof::get_Language()
{
	return m_language;
}
void CortaSpoof::set_Language(const char* str)
{
	if (strlen(str) > 10)
		return;
	strcpy(m_language, str);
}
char* CortaSpoof::get_Market()
{
	return m_market;
}
void CortaSpoof::set_Market(const char* str)
{
	if (strlen(str) > 3)
		return;
	strcpy(m_market, str);
}

char* CortaSpoof::get_DateFormat()
{
	return m_DateFormat;
}
void CortaSpoof::set_DateFormat(const char* str)
{
	if (strlen(str) > 12)
		return;
	strcpy(m_DateFormat, str);
}
char* CortaSpoof::get_SafeSearch()
{
	return m_safeSearch;
}
void CortaSpoof::set_SafeSearch(const char* str)
{
	if (strlen(str) > 50)
		return;
	strcpy(m_safeSearch, str);
}
int CortaSpoof::get_OSSKU()
{
	return m_OSSKU;
}
void CortaSpoof::set_OSSKU(int nb)
{
	m_OSSKU = nb;
}
char* CortaSpoof::get_NetworkType()
{
	return m_networkType;
}
void CortaSpoof::set_NetworkType(const char* str)
{
	if (strlen(str) > 50)
		return;
	strcpy(m_networkType, str);
}
int CortaSpoof::get_DTZ()
{
	return m_DTZ;
}
void CortaSpoof::set_DTZ(int nb)
{
	m_DTZ = nb;
}
char* CortaSpoof::get_UserDisplayName()
{
	return m_userDisplayName;
}
void CortaSpoof::set_UserDisplayName(const char* str)
{
	if (strlen(str) > 100)
		return;
	strcpy(m_userDisplayName, str);
}
char* CortaSpoof::get_MachineId()
{
	return m_machineId;
}
void CortaSpoof::set_MachineId(const char* str)
{
	if (!std::regex_match(str, std::regex("[{][0-9A-F]{8}-[0-9A-F]{4}-[0-9A-F]{4}-[0-9A-F]{4}-[0-9A-F]{12}[}]$")))
		return;
	strcpy(m_machineId, str);
	m_BMachineID = true;
	ui.MachineId_L->setText(m_machineId);
	ui.Devicde_Desc_L->setText("Custom X-Device-Machine-ID");
	ui.Randomize_B->setText("Find my ID !");
}
char* CortaSpoof::get_DeviceId()
{
	return m_deviceId;
}
void CortaSpoof::set_DeviceId(const char* str)
{
	if (!std::regex_match(str, std::regex("[0-9A-F]{16}$")))
		return;
	strcpy(m_deviceId, str);
}
int CortaSpoof::get_DeviceScale()
{
	return m_deviceScale;
}
void CortaSpoof::set_DeviceScale(int nb)
{
	if (nb > 100)
		return;
	m_deviceScale = nb;
}
char* CortaSpoof::get_DeviceManufacturer()
{
	return m_deviceManufacturer;
}
void CortaSpoof::set_DeviceManufacturer(const char* str)
{
	if (strlen(str) > 100)
		return;
	strcpy(m_deviceManufacturer, str);
}
char* CortaSpoof::get_Theme()
{
	return m_theme;
}
void CortaSpoof::set_Theme(const char* str)
{
	if (!std::regex_match(str, std::regex("[0-9a-f]{6};[0-9a-f]{6}$")))
		return;
	strcpy(m_theme, str);
}
char* CortaSpoof::get_DeviceDimensions()
{
	return m_deviceDimensions;
}
void CortaSpoof::set_DeviceDimensions(const char* str)
{
	if (strlen(str) > 10)
		return;
	strcpy(m_deviceDimensions, str);
}
char* CortaSpoof::get_DeviceProduct()
{
	return m_deviceProduct;
}
void CortaSpoof::set_DeviceProduct(const char *str)
{
	if (strlen(str) > 100)
		return;
	strcpy(m_deviceProduct, str);
}
char* CortaSpoof::get_CBT()
{
	return m_CBT;
}
void CortaSpoof::set_CBT(const char *str)
{
	if (!std::regex_match(str, std::regex("[0-9]{10}")))
		return;
	strcpy(m_CBT, str);
}
char* CortaSpoof::get_Touch()
{
	return m_touch;
}
void CortaSpoof::set_Touch(const char *str)
{
	if (strlen(str) > 6)
		return;
	strcpy(m_touch, str);
}
char* CortaSpoof::get_DeviceSession()
{
	return m_deviceSession;
}
void CortaSpoof::set_DeviceSession(const char *str)
{
	if (!std::regex_match(str, std::regex("[0-9A-F]{32}$")))
		return;
	strcpy(m_deviceSession, str);
}
int CortaSpoof::get_NbSend()
{
	return m_nbSend;
}
void CortaSpoof::set_NbSend(int nb)
{
	m_nbSend = nb;
	if (nb == 0)
	{
		ui.NbSend_L->setText("");
	}
	else
	{
		char str[10];
		sprintf(str, "Sent : %d", m_nbSend);
		ui.NbSend_L->setText(str);
	}
}

/*---------------------------- Is CortaSpoof Ready -----------------------------*
|	Class CortaSpoof
|	Function Is_CortaSpoof_Ready
|
|  Purpose:  verify if user check a trame to spoof
|
|  Return true if OK, false else
*-------------------------------------------------------------------------------*/
bool CortaSpoof::Is_CortaSpoof_Ready()
{
	bool enable = false;
	if (m_start == true)
	{
		ui.LoveMicrosoft_B->setEnabled(true);
		return false;
	}

	ui.LoveMicrosoft_B->setEnabled(false);

	if (ui.ManifestSpoof->isChecked() == true)
	{
		enable = true;
		m_choice[0] = true;
	}
	else
	{
		m_choice[0] = false;
	}

	if (ui.CortaSpoof->isChecked() == true)
	{
		enable = true;
		m_choice[1] = true;
	}
	else
	{
		m_choice[1] = false;
	}

	if (ui.InitSpoof->isChecked() == true)
	{
		enable = true;
		m_choice[2] = true;
	}
	else
	{
		m_choice[2] = false;
	}

	if (ui.ZincSpoof->isChecked() == true)
	{
		enable = true;
		m_choice[3] = true;
	}
	else
	{
		m_choice[3] = false;
	}

	if (enable == true)
	{
		ui.LoveMicrosoft_B->setEnabled(true);
	}
	return true;
}

/*---------------------------- Randomize Machine Id -----------------------------
|	Class CortaSpoof
|	Function Randomize_Machine_Id
|
|  Purpose:  make a ramdom Machine_Id and display it
|
|  Return true if OK, false else
*-------------------------------------------------------------------------*/
bool CortaSpoof::Randomize_Machine_Id()
{
	//exemple : {9F9007B9-2BED-48C1-88AC-BB29EB7D1CB6}
	if (!m_machineId)
		m_machineId = new char[SIZE_MACHINE_ID];
	int i;
	srand(time(0));
	m_machineId[0] = '{';
	m_machineId[SIZE_MACHINE_ID - 2] = '}';
	m_machineId[SIZE_MACHINE_ID - 1] = '\0';
	for (i = 1; i < SIZE_MACHINE_ID -2; i++)
	{
		if (i == 9 || i == 14 || i == 19 || i == 24)
		{
			m_machineId[i] = '-';
		}
		else
		{
			char c;
			c = rand() % 16;
			if (c < 6)
			{
				m_machineId[i] = c + 65;
			}
			else
			{
				m_machineId[i] = c + 42;
			}
		}
	}
	ui.MachineId_L->setText(m_machineId);//contient maintenant ta valeur.

	return true;
}

/*---------------------------- Find Machine Id -----------------------------
|	Class CortaSpoof
|	Function Find_Machine_Id
|
|  Purpose: Find in windows register the value of the machine Id
|
|  Return true if OK, false else
*-------------------------------------------------------------------------*/
char* CortaSpoof::Find_Key_Register(HKEY hkey, char* path, char* key, int sizeKey)
{
	HKEY hKey;
	if (RegOpenKeyExA(hkey, path, 0, KEY_READ | KEY_WOW64_64KEY, &hKey) == ERROR_SUCCESS)
	{
		DWORD type = REG_SZ;
		LPBYTE val = new BYTE[sizeKey];
		DWORD dwSize = sizeof(BYTE) * sizeKey;
		if (RegQueryValueExA(hKey, key , NULL, &type, val, &dwSize) == ERROR_SUCCESS)
		{
			//qDebug() << "value is : " << val;
			return (char*)val;
		}
		else
		{
			MessageBox(0, L"Error Opening Registry Key", L"Error", MB_OK | MB_TOPMOST);
		}
		RegCloseKey(hKey);
	}
	else
	{
		MessageBox(0, L"Error Opening Registry Key", L"Error", 0);
	}
	return NULL;
}

/*---------------------------- Find Machine Id -----------------------------
|	Class CortaSpoof
|	Function Find_Machine_Id
|
|  Purpose: Find in windows register the value of the machine Id
|
|  Return true if OK, false else
*-------------------------------------------------------------------------*/
bool CortaSpoof::Find_Machine_ID()
{
	char* value = Find_Key_Register(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\SQMClient", "MachineId", SIZE_MACHINE_ID);
	if (value == NULL)
		return false;
	ui.MachineId_L->setText(value);//contient maintenant ta valeur.
	m_machineId = value;
	return true;
}

/*---------------------------- Display Machine Id -----------------------------
|	Class CortaSpoof
|	Function Display_Machine_Id
|
|  Purpose: choose to display random or real machine ID
|
|  Return true if OK, false else
*-------------------------------------------------------------------------*/
bool CortaSpoof::Display_Machine_ID()
{
	if (m_BMachineID)
	{
		if (!Find_Machine_ID())
			return false;
		m_BMachineID = false;
		ui.Devicde_Desc_L->setText("Your X-Device-Machine-ID");
		ui.Randomize_B->setText("Randomize my ID !");
	}
	else
	{
		if (!Randomize_Machine_Id())
			return false;
		m_BMachineID = true;
		ui.Devicde_Desc_L->setText("Random X-Device-Machine-ID");
		ui.Randomize_B->setText("Find my ID !");
	}
	return true;
}

/*---------------------------- Spoof -----------------------------
|	Class CortaSpoof
|	Function Spoof
|
|  Purpose: m_start or stop spoofing if user click on the button m_start spoofing 
|			or stop spoofing
|
|  Return true if OK, false else
*-------------------------------------------------------------------------*/
bool CortaSpoof::Spoof()
{
	DWORD myThreadID;
	m_handle = NULL;
	if (m_start == false)
	{
		MessageBox(NULL, TEXT("start spoofing !"), TEXT("CortaSpoof"), MB_OK | MB_TOPMOST | MB_TASKMODAL);
		m_start = true;
		set_NbSend(0);
		m_handle = CreateThread(0, 0, Go_Spoof,this , 0, &myThreadID);

		ui.LoveMicrosoft_B->setText("Stop spoofing");
		return true;
	}
	else
	{
		m_start = false;
		if (m_handle != NULL)
		{
			WaitForSingleObject(m_handle, INFINITE);
			CloseHandle(m_handle);
		}
		MessageBox(NULL, TEXT("Stop Spoofing"), TEXT("CortaSpoof"), MB_OK | MB_TOPMOST | MB_TASKMODAL);
		ui.LoveMicrosoft_B->setText("Love Microsoft");
		
		Is_CortaSpoof_Ready();
		return true;
	}
}

/*---------------------------- Network Speed -----------------------------
|	Class CortaSpoof
|	Function network_Speed
|
|  Purpose: change the time between two sending and display it
|
|	Parameters:
|       int k (IN) -- value of the slide bar
|
|  Return true if OK, false else
*-------------------------------------------------------------------------*/
bool CortaSpoof::Network_Speed(int k)
{
	char str[30];
	
	m_speed = (int)exp((log(3600) / 999)*(k-1));
	if (m_speed > 60)
	{
		sprintf(str, "%d / hour", (int)3600/m_speed);
	}
	else if (m_speed  > 1 && m_speed <= 60)
	{
		sprintf(str, "%d / min", (int)60/m_speed);
	}
	else
	{
		sprintf(str, "%d / sec", (int)1/m_speed);
	}
	ui.Network_L_Speed->setText(str);
	return true;
}

/*---------------------------- Custom -----------------------------
|	Class CortaSpoof
|	Function Custom
|
|  Purpose: display the custom window and initialize it
|
|  Return true if OK, false else
*-------------------------------------------------------------------------*/
bool CortaSpoof::Custom()
{
	m_custom->load();
	if (m_custom->exec() == QDialog::Accepted)
		m_custom->customize();

	return true;
}

/*---------------------------- Create_Connects -----------------------------
|	Function Create_Connects
|
|  Purpose: connects all QT object with his function
|
|	Parameters:
|       CortaSpoofClass ui (IN) -- main interface
|		CortaSpoof * Win (IN) -- pointer to CortaSpoof class
|
*-------------------------------------------------------------------------*/
void Create_Connects(Ui::CortaSpoofClass ui,  CortaSpoof * Win)
{
	QObject::connect(ui.ManifestSpoof,SIGNAL(toggled(bool)),Win,SLOT(Is_CortaSpoof_Ready()));
	QObject::connect(ui.CortaSpoof,SIGNAL(toggled(bool)),Win,SLOT(Is_CortaSpoof_Ready()));
	QObject::connect(ui.InitSpoof, SIGNAL(toggled(bool)), Win, SLOT(Is_CortaSpoof_Ready()));
	QObject::connect(ui.ZincSpoof, SIGNAL(toggled(bool)), Win, SLOT(Is_CortaSpoof_Ready()));
	QObject::connect(ui.NetworkSlide, SIGNAL(valueChanged(int)), Win, SLOT(Network_Speed(int)));
	QObject::connect(ui.Randomize_B, SIGNAL(pressed()), Win, SLOT(Display_Machine_ID()));
	QObject::connect(ui.LoveMicrosoft_B, SIGNAL(pressed()), Win, SLOT(Spoof()));
	QObject::connect(ui.Custom_B, SIGNAL(pressed()), Win, SLOT(Custom()));
}

/*---------------------------- Init -----------------------------
|	Class CortaSpoof
|	Function Init
|
|  Purpose: initialize all variable
|
*-------------------------------------------------------------------------*/
void CortaSpoof::Init()
{
	char* value;
	sprintf(m_query, "privacy");
	value = Find_Key_Register(HKEY_CURRENT_USER, "Control Panel\\International\\User Profile", "Languages", 12);
	if (value == NULL)
		set_Language("en-US"); //valeur par defaut
	else
		set_Language(value);
	free(value);

	std::smatch m;
	std::string s(get_Language());
	std::regex regex("[A-Z]\+");
	regex_search(s,m,regex);
	sprintf(m_market, m[0].first._Ptr);

	value = Find_Key_Register(HKEY_CURRENT_USER, "Control Panel\\International", "sShortDate", 12);
	if (value == NULL)
		set_DateFormat("dd/MM/yyyy"); //valeur par defaut
	else
		set_DateFormat(value);
	free(value);

	sprintf(m_safeSearch, "Moderate");


	/*search SKU*/
	value = Find_Key_Register(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack\\SettingsRequests\\utc.app", "ETagQueryParameters", 200);
	if (value == NULL)
		m_OSSKU = 48; //valeur par defaut
	else
	{
		std::smatch m;
		std::string s(value);
		std::regex regex("&sku=([0-9]{2})&");
		regex_search(s, m, regex);
		m_OSSKU = atoi(m[1].first._Ptr);
	}
	free(value);

	

	sprintf(m_networkType, "ethernet");

	m_DTZ = -420;

	value = Find_Key_Register(HKEY_CURRENT_USER, "Volatile Environment", "USERNAME", 100);
	if (value == NULL)
		set_UserDisplayName("user"); //valeur par defaut
	else
		set_UserDisplayName(value);
	free(value);

	sprintf(m_deviceId, "0100BADF00D00666");
	m_deviceScale = 100;
	Random_String_UP(m_deviceSession, SIZE_CLIENT_SESSION);

	sprintf(m_theme, "ffffff;0078d7");

	sprintf(m_deviceDimensions, "350x582");

	value = Find_Key_Register(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\SystemInformation", "SystemManufacturer", 100);
	if (value == NULL)
		set_DeviceManufacturer("System manufacturer"); //valeur par defaut
	else
		set_DeviceManufacturer(value);
	free(value);

	value = Find_Key_Register(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\SystemInformation", "SystemProductName", 100);
	if (value == NULL)
		set_DeviceProduct("System Product Name"); //valeur par defaut
	else
		set_DeviceProduct(value);
	free(value);

	sprintf(m_CBT, "1439740000");

	//sprintf(m_touch, "false");
	value = Find_Key_Register(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Wisp\\Touch", "PanningDisabled", 5);
	if (value == NULL)
	{
		sprintf(m_touch, "false");
	}
	else
	{
		if (value[0] == '1')
			sprintf(m_touch, "true");
		else
			sprintf(m_touch, "false");
	}


	free(value);
}

/*---------------------------- Constructor CortaSpoof -----------------------------
|	Class CortaSpoof
|	Function CortaSpoof
|
|  Purpose: Constructor of CortaSpoof class, initialize interfaces
|
*-------------------------------------------------------------------------*/
CortaSpoof::CortaSpoof(QWidget *parent)
	: QMainWindow(parent)
{
	int i;

	ui.setupUi(this);
	m_custom = new CCustom(this);

	m_start = false;
	for (i = 0; i < 4; i++)
		m_choice[i] = true;

	m_speed = 1;
	m_nbSend = 0;
	Find_Machine_ID();
	m_BMachineID = false;
	m_query = new char[100];
	m_dico = true;
	m_language = new char[10];
	m_market = new char[3];
	m_DateFormat = new char[12];
	m_safeSearch = new char[50];
	m_networkType = new char[50];
	m_userDisplayName = new char[100];
	m_deviceId = new char[SIZE_DEVICE_ID];
	m_deviceSession = new char[SIZE_CLIENT_SESSION];
	m_deviceManufacturer = new char[100];
	m_theme = new char[14];
	m_deviceDimensions = new char[10];
	m_deviceProduct = new char[100];
	m_CBT = new char[11];
	m_touch = new char[6];

	m_backup = new CBackup("backup", this);

	if (m_backup->File_OK())
	{
		int reponse = QMessageBox::question(this, "load", "Do you want to load previous data ?", QMessageBox::Yes | QMessageBox::No);
		if (reponse == QMessageBox::Yes)
		{
			if (m_backup->Load_Backup() == false)
			{
				QMessageBox::warning(this, "erreur",
					"Impossible to charge old backup", QMessageBox::Ok);
				Init();
			}
		}
		else
		{
			Init();
		}
	}
	else
	{
		Init();
	}
	
	


	Create_Connects(ui, this);	
}

/*---------------------------- CortaSpoof Destructor -----------------------------
|	Class CortaSpoof
|	Function ~CortaSpoof
|
|  Purpose: free all variable
|
*-------------------------------------------------------------------------*/
CortaSpoof::~CortaSpoof()
{
	if (m_start == true)
	{
		m_start = false;
		if (m_handle != NULL)
		{
			WaitForSingleObject(m_handle, INFINITE);
			CloseHandle(m_handle);
		}
	}
	

	m_backup->Backup();


	delete[] (m_query);
	delete[] (m_language);
	delete[] (m_market);
	delete[] (m_DateFormat);
	delete[] (m_safeSearch);
	delete[] (m_networkType);
	delete[] (m_userDisplayName);
	delete[] (m_machineId);
	delete[] (m_deviceId);
	delete[] (m_deviceManufacturer);
	delete[] (m_theme);
	delete[] (m_deviceDimensions);
	delete[] (m_deviceProduct);
	delete[] (m_touch);
	delete[] (m_CBT);
	delete[] (m_deviceSession);

	delete m_backup;
	delete m_custom;
}