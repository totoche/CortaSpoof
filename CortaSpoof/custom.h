#ifndef CUSTOM_H
#define CUSTOM_H

#include <QDialog>
#include <QtWidgets/QMainWindow>
#include "cortaspoof.h"
#include "ui_custom.h"

#define SIZE_BACKUP_FILE 695

/*---------------------------- Class CCustom -----------------------------
|  Purpose: This class is a QDialog interface who allows user to change value 
|			in headers of CortaPane frame. 
|
|	Author : Paul HERNAULT
|			 Thomas AUBIN
*-------------------------------------------------------------------------*/

class CortaSpoof;
class CCustom : public QDialog
{
	Q_OBJECT
public:
	CCustom(CortaSpoof * corta);
	void load();
	void customize();

public slots:
	bool Random_Device_Id();
	bool Random_Machine_Id();
	bool Random_Device_Session();
	void Check_Machine_Id(const QString & str);
	void Check_Device_Id(const QString & str);
	void Check_Device_Session(const QString & str);
	void Check_Theme_Edit(const QString & str); 
	void Check_CBT_Edit(const QString & str);

protected:
	QDialog diag;
	Ui::CustomWinClass ui_custom;
	CortaSpoof *m_corta;

};

#endif 