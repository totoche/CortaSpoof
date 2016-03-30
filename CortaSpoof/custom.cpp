#include "custom.h"
#include "cortaspoof.h"
#include <time.h>
#include <iostream>
#include <QDebug>

/*---------------------------- Create_Connects -----------------------------
|	Function Create_Connects
|
|  Purpose: connects all QT object with his function
|
|	Parameters:
|       Ui::CustomWinClass ui_custom (IN) -- QDialog interface
|		CCustom * Win (IN) -- pointer to CCustom class
|
*-------------------------------------------------------------------------*/
void Create_Connects(Ui::CustomWinClass ui_custom, CCustom * Win)
{
	QObject::connect(ui_custom.RandClientSession_B, SIGNAL(pressed()), Win, SLOT(Random_Device_Session()));
	QObject::connect(ui_custom.RandDeviceId_B, SIGNAL(pressed()), Win, SLOT(Random_Device_Id()));
	QObject::connect(ui_custom.RandMachineId_B, SIGNAL(pressed()), Win, SLOT(Random_Machine_Id()));
	QObject::connect(ui_custom.MachineId_Edit, SIGNAL(textChanged(const QString & )), Win, SLOT(Check_Machine_Id(const QString &)));
	QObject::connect(ui_custom.DeviceId_Edit, SIGNAL(textChanged(const QString &)), Win, SLOT(Check_Device_Id(const QString &)));
	QObject::connect(ui_custom.Session_Edit, SIGNAL(textChanged(const QString &)), Win, SLOT(Check_Device_Session(const QString &)));
	QObject::connect(ui_custom.Theme_Edit, SIGNAL(textChanged(const QString &)), Win, SLOT(Check_Theme_Edit(const QString &)));
	QObject::connect(ui_custom.CBT_Edit, SIGNAL(textChanged(const QString &)), Win, SLOT(Check_CBT_Edit(const QString &)));
	
}

/*---------------------------- Constructor CCustom -----------------------------
|	Class CCustom
|	Function CCustom
|
|  Purpose: Constructor of CCustom class, initialize QDialog
|
|	Parameters:
|       CortaSpoof * corta (IN) -- pointer on CortaSpoof class
|
*-------------------------------------------------------------------------*/
CCustom::CCustom(CortaSpoof * corta) : QDialog()
{
	m_corta = corta;
	ui_custom.setupUi(this);
	
	ui_custom.MachineId_Edit->setValidator(new QRegExpValidator(QRegExp("[{]{1}[0-9A-F]{8}-[0-9A-F]{4}-[0-9A-F]{4}-[0-9A-F]{4}-[0-9A-F]{12}[}]{1}"), this));
	ui_custom.DeviceId_Edit->setValidator(new QRegExpValidator(QRegExp("[0-9A-F]{16}$"), this));
	ui_custom.Session_Edit->setValidator(new QRegExpValidator(QRegExp("[0-9A-F]{32}$"), this));
	ui_custom.Theme_Edit->setValidator(new QRegExpValidator(QRegExp("[0-9a-f]{6};[0-9a-f]{6}$"), this));
	ui_custom.CBT_Edit->setValidator(new QRegExpValidator(QRegExp("[0-9]{10}"), this));
	
	Create_Connects(ui_custom, this);
}

/*---------------------------- load -----------------------------
|	Class CCustom
|	Function load
|
|  Purpose: load each value of CortaSpoof and put the right one in the widget
|
*-------------------------------------------------------------------------*/
void CCustom::load()
{
	int index;
	ui_custom.Query_Edit->setText(m_corta->get_Query());
	ui_custom.Dico_Check->setChecked(m_corta->get_Dico());
	index = ui_custom.Language_Box->findText(m_corta->get_Language());
	ui_custom.Language_Box->setCurrentIndex(index);
	index = ui_custom.Market_Box->findText(m_corta->get_Market());
	ui_custom.Market_Box->setCurrentIndex(index);
	index = ui_custom.DateFormat_Box->findText(m_corta->get_DateFormat());
	ui_custom.DateFormat_Box->setCurrentIndex(index);
	index = ui_custom.SafeSearch_Box->findText(m_corta->get_SafeSearch());
	ui_custom.SafeSearch_Box->setCurrentIndex(index);
	ui_custom.OSSKU_Spin->setValue(m_corta->get_OSSKU());
	index = ui_custom.NetworkType_Box->findText(m_corta->get_NetworkType());
	ui_custom.NetworkType_Box->setCurrentIndex(index);
	ui_custom.DTZ_Spin->setValue(m_corta->get_DTZ());
	ui_custom.UserDisplayName_Edit->setText(m_corta->get_UserDisplayName());
	ui_custom.MachineId_Edit->setText(m_corta->get_MachineId());
	ui_custom.DeviceId_Edit->setText(m_corta->get_DeviceId());
	ui_custom.DeviceScale_Spin->setValue(m_corta->get_DeviceScale());
	ui_custom.Manufacturer_Edit->setText(m_corta->get_DeviceManufacturer());
	ui_custom.Theme_Edit->setText(m_corta->get_Theme());
	index = ui_custom.Dimensions_Box->findText(m_corta->get_DeviceDimensions());
	ui_custom.Dimensions_Box->setCurrentIndex(index);
	ui_custom.Device_Product_Edit->setText(m_corta->get_DeviceProduct());
	ui_custom.CBT_Edit->setText(m_corta->get_CBT());
	ui_custom.Session_Edit->setText(m_corta->get_DeviceSession());
	index = ui_custom.Touch_Box->findText(m_corta->get_Touch());
	ui_custom.Touch_Box->setCurrentIndex(index);
}

/*---------------------------- customize -----------------------------
|	Class CCustom
|	Function customize
|
|  Purpose: set each widget value in CortaSpoof
|
*-------------------------------------------------------------------------*/
void CCustom::customize()
{
	m_corta->set_Query(ui_custom.Query_Edit->text().toStdString().c_str());
	m_corta->set_Dico(ui_custom.Dico_Check->isChecked());
	m_corta->set_Language(ui_custom.Language_Box->currentText().toStdString().c_str());
	m_corta->set_Market(ui_custom.Market_Box->currentText().toStdString().c_str());
	m_corta->set_DateFormat(ui_custom.DateFormat_Box->currentText().toStdString().c_str());
	m_corta->set_SafeSearch(ui_custom.SafeSearch_Box->currentText().toStdString().c_str());
	m_corta->set_OSSKU(ui_custom.OSSKU_Spin->value());
	m_corta->set_NetworkType(ui_custom.NetworkType_Box->currentText().toStdString().c_str());
	m_corta->set_DTZ(ui_custom.DTZ_Spin->value());
	m_corta->set_UserDisplayName(ui_custom.UserDisplayName_Edit->text().toStdString().c_str());
	m_corta->set_MachineId(ui_custom.MachineId_Edit->text().toStdString().c_str());
	m_corta->set_DeviceId(ui_custom.DeviceId_Edit->text().toStdString().c_str());
	m_corta->set_DeviceScale(ui_custom.DeviceScale_Spin->value());
	m_corta->set_DeviceManufacturer(ui_custom.Manufacturer_Edit->text().toStdString().c_str());
	m_corta->set_Theme(ui_custom.Theme_Edit->text().toStdString().c_str());
	m_corta->set_DeviceDimensions(ui_custom.Dimensions_Box->currentText().toStdString().c_str());
	m_corta->set_DeviceProduct(ui_custom.Device_Product_Edit->text().toStdString().c_str());
	m_corta->set_CBT(ui_custom.CBT_Edit->text().toStdString().c_str());
	m_corta->set_Touch(ui_custom.Touch_Box->currentText().toStdString().c_str());
	m_corta->set_DeviceSession(ui_custom.Session_Edit->text().toStdString().c_str());
}

/*---------------------------- Random Machine Id -----------------------------
|	Class CCustom
|	Function Random_Machine_id
|
|  Purpose: make ramdom Machine Id string and display it in custom interface
|
|  Return true if OK, false else
*-------------------------------------------------------------------------*/
bool CCustom::Random_Machine_Id()
{
	char* newMachineId = new char[SIZE_MACHINE_ID];
	int i;

	srand(time(0));
	newMachineId[0] = '{';
	newMachineId[SIZE_MACHINE_ID - 2] = '}';
	newMachineId[SIZE_MACHINE_ID - 1] = '\0';
	for (i = 1; i < SIZE_MACHINE_ID - 2; i++)
	{
		if (i == 9 || i == 14 || i == 19 || i == 24)
		{
			newMachineId[i] = '-';
		}
		else
		{
			char c;
			c = rand() % 16;
			if (c < 6)
			{
				newMachineId[i] = c + 65;
			}
			else
			{
				newMachineId[i] = c + 42;
			}
		}
	}

	ui_custom.MachineId_Edit->setText(newMachineId);
	free(newMachineId);
	return true;
}

/*---------------------------- Random Device Id -----------------------------
|	Class CortaSpoof
|	Function Random_Device_id
|
|  Purpose: make ramdom device Id string and display it in custom interface
|
|  Return true if OK, false else
*-------------------------------------------------------------------------*/
bool CCustom::Random_Device_Id()
{
	char* newDeviceId = new char[SIZE_DEVICE_ID];
	if (Random_String_UP(newDeviceId, SIZE_DEVICE_ID) == false)
		return false;

	ui_custom.DeviceId_Edit->setText(newDeviceId);
	free(newDeviceId);
	return true;
}

/*---------------------------- Random Client Session -----------------------------
|	Class CCustom
|	Function Random_Client_Session
|
|  Purpose: make ramdom Client Session string and display it in custom interface
|
|  Return true if OK, false else
*-------------------------------------------------------------------------*/
bool CCustom::Random_Device_Session()
{
	char* newDeviceSession = new char[SIZE_CLIENT_SESSION];
	if (Random_String_UP(newDeviceSession, SIZE_CLIENT_SESSION) == false)
		return false;

	ui_custom.Session_Edit->setText(newDeviceSession);
	free(newDeviceSession);
	return true;
}

/*---------------------------- Check Machine Id -----------------------------
|	Class CCustom
|	Function Check_Machine_id
|
|  Purpose: check the format of the Machine Id, if wrong format it change the
|			color of text in red
|
*-------------------------------------------------------------------------*/
void CCustom::Check_Machine_Id(const QString & str)
{
	if (ui_custom.MachineId_Edit->hasAcceptableInput())
		ui_custom.MachineId_Edit->setStyleSheet("color: black");
	else
		ui_custom.MachineId_Edit->setStyleSheet("color: red");
}

/*---------------------------- Check Device Id -----------------------------
|	Class CCustom
|	Function Check_Devicee_id
|
|  Purpose: check the format of the Device Id, if wrong format it change the
|			color of text in red
|
*-------------------------------------------------------------------------*/
void CCustom::Check_Device_Id(const QString & str)
{
	if (ui_custom.DeviceId_Edit->hasAcceptableInput())
		ui_custom.DeviceId_Edit->setStyleSheet("color: black");
	else
		ui_custom.DeviceId_Edit->setStyleSheet("color: red");

}

/*---------------------------- Check Device Session -----------------------------
|	Class CCustom
|	Function Check_Device_Session
|
|  Purpose: check the format of the Device Session text, if wrong format it change the
|			color of text in red
|
*-------------------------------------------------------------------------*/
void CCustom::Check_Device_Session(const QString & str)
{
	if (ui_custom.Session_Edit->hasAcceptableInput())
		ui_custom.Session_Edit->setStyleSheet("color: black");
	else
		ui_custom.Session_Edit->setStyleSheet("color: red");

}

/*---------------------------- Check Theme Edit -----------------------------
|	Class CCustom
|	Function Check_Theme_Edit
|
|  Purpose: check the format of the Theme Edit box, if wrong format it change the
|			color of text in red
|
*-------------------------------------------------------------------------*/
void CCustom::Check_Theme_Edit(const QString & str)
{
	if (ui_custom.Theme_Edit->hasAcceptableInput())
		ui_custom.Theme_Edit->setStyleSheet("color: black");
	else
		ui_custom.Theme_Edit->setStyleSheet("color: red");
}

/*---------------------------- Check CBT Edit -----------------------------
|	Class CCustom
|	Function Check_CBT_Edit
|
|  Purpose: check the format of the CBT Edit box, if wrong format it change the
|			color of text in red
|
*-------------------------------------------------------------------------*/
void CCustom::Check_CBT_Edit(const QString & str)
{
	if (ui_custom.CBT_Edit->hasAcceptableInput())
		ui_custom.CBT_Edit->setStyleSheet("color: black");
	else
		ui_custom.CBT_Edit->setStyleSheet("color: red");
}