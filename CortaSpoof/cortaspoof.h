#ifndef CORTASPOOF_H
#define CORTASPOOF_H

#include <QtWidgets/QMainWindow>
#include "ui_cortaspoof.h"
#include "spoof.h"
#include "backup.h"
#include "custom.h"
/*---------------------------- Class CortaSpoof -----------------------------
|  Purpose: This software aims to spoof the microsoft database.
|			So that Microsoft does not know what information is accurate.
|
|	Author : Paul HERNAULT
|			 Thomas AUBIN
*-------------------------------------------------------------------------*/


#define SIZE_MACHINE_ID 39
#define SIZE_DEVICE_ID 17
#define SIZE_CLIENT_SESSION 33
#define SIZE_CVID_IG 33

bool Random_String_UP(char str[], int size);

class CBackup;
class CCustom;
class CortaSpoof : public QMainWindow
{
	Q_OBJECT

public:
	CortaSpoof(QWidget *parent = 0);
	~CortaSpoof();

	bool get_Start();
	int get_Speed();
	bool* get_Choice();
	char* get_Query();
	void set_Query(const char* str);
	bool get_Dico();
	void set_Dico(bool useDico);
	char* get_Language();
	void set_Language(const char* str);
	char* get_Market();
	void set_Market(const char* str);
	char* get_DateFormat();
	void set_DateFormat(const char* str);
	char* get_SafeSearch();
	void set_SafeSearch(const char* str);
	int get_OSSKU();
	void set_OSSKU(int nb);
	char* get_NetworkType();
	void set_NetworkType(const char* str);
	int get_DTZ();
	void set_DTZ(int nb);
	char* get_UserDisplayName();
	void set_UserDisplayName(const char* str);
	char* get_MachineId();
	void set_MachineId(const char* str);
	char* get_DeviceId();
	void set_DeviceId(const char* str);
	int get_DeviceScale();
	void set_DeviceScale(int nb);
	char* get_DeviceManufacturer();
	void set_DeviceManufacturer(const char* str);
	char* get_Theme();
	void set_Theme(const char* str);
	char* get_DeviceDimensions();
	void set_DeviceDimensions(const char* str);
	char* get_DeviceProduct();
	void set_DeviceProduct(const char *str);
	char* get_CBT();
	void set_CBT(const char *str);
	char* get_Touch();
	void set_Touch(const char *str);
	char* get_DeviceSession();
	void set_DeviceSession(const char *str);
	int get_NbSend();
	void set_NbSend(int nb);

	char* Find_Key_Register(HKEY hkey, char* path, char* key, int sizeKey);
	bool Find_Machine_ID();
	bool Randomize_Machine_Id();

public slots:
	bool Is_CortaSpoof_Ready();
	bool Display_Machine_ID();
	bool Spoof();
	bool Network_Speed(int k);
	bool Custom();
	void Init();

protected:
	Ui::CortaSpoofClass ui;
	CCustom *m_custom;
	CBackup *m_backup;

	bool m_start; //condition stop spoof
	int m_speed; // sending speed
	bool m_choice[4]; // values of check box
	int m_nbSend; // number of packets send

	//variables in headers
	char* m_query;
	char* m_language;
	char* m_market;
	char* m_DateFormat;
	char* m_safeSearch;
	int m_OSSKU;
	char* m_networkType;
	int m_DTZ;
	char* m_userDisplayName;
	char* m_machineId;
	bool m_BMachineID;
	char* m_deviceId;
	int m_deviceScale;
	char* m_deviceManufacturer;
	char* m_theme;
	char* m_deviceDimensions;
	char* m_deviceProduct;
	char* m_CBT;
	char* m_touch;
	char* m_deviceSession;

	bool m_dico; //use dictionary of expressions or not to spoof
	
	HANDLE m_handle; //thread spoof
};
#endif // CORTASPOOF_H


