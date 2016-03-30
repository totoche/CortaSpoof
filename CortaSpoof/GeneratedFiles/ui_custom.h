/********************************************************************************
** Form generated from reading UI file 'custom.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOM_H
#define UI_CUSTOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CustomWinClass
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *Query_Edit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *DeviceId_Edit;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *Manufacturer_Edit;
    QLineEdit *Theme_Edit;
    QLabel *label_12;
    QLabel *label_5;
    QLabel *label_13;
    QLineEdit *Session_Edit;
    QSpinBox *OSSKU_Spin;
    QSpinBox *DTZ_Spin;
    QComboBox *Language_Box;
    QComboBox *NetworkType_Box;
    QComboBox *Dimensions_Box;
    QSpinBox *DeviceScale_Spin;
    QComboBox *SafeSearch_Box;
    QLabel *label_15;
    QComboBox *Touch_Box;
    QPushButton *RandClientSession_B;
    QPushButton *RandDeviceId_B;
    QLineEdit *UserDisplayName_Edit;
    QLabel *label_16;
    QLabel *market_L;
    QComboBox *Market_Box;
    QCheckBox *Dico_Check;
    QLineEdit *MachineId_Edit;
    QPushButton *RandMachineId_B;
    QLabel *label_14;
    QLabel *label_17;
    QLineEdit *CBT_Edit;
    QLabel *label_18;
    QComboBox *DateFormat_Box;
    QLineEdit *Device_Product_Edit;

    void setupUi(QDialog *CustomWinClass)
    {
        if (CustomWinClass->objectName().isEmpty())
            CustomWinClass->setObjectName(QStringLiteral("CustomWinClass"));
        CustomWinClass->resize(383, 610);
        CustomWinClass->setMinimumSize(QSize(383, 560));
        CustomWinClass->setMaximumSize(QSize(383, 610));
        QIcon icon;
        icon.addFile(QStringLiteral("../logo/CortaSpoof.png"), QSize(), QIcon::Normal, QIcon::Off);
        CustomWinClass->setWindowIcon(icon);
        CustomWinClass->setModal(false);
        buttonBox = new QDialogButtonBox(CustomWinClass);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(20, 580, 341, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(CustomWinClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 47, 21));
        Query_Edit = new QLineEdit(CustomWinClass);
        Query_Edit->setObjectName(QStringLiteral("Query_Edit"));
        Query_Edit->setGeometry(QRect(160, 10, 111, 20));
        Query_Edit->setMaxLength(100);
        Query_Edit->setClearButtonEnabled(true);
        label_2 = new QLabel(CustomWinClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 51, 21));
        label_3 = new QLabel(CustomWinClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 310, 111, 21));
        label_4 = new QLabel(CustomWinClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 400, 91, 21));
        DeviceId_Edit = new QLineEdit(CustomWinClass);
        DeviceId_Edit->setObjectName(QStringLiteral("DeviceId_Edit"));
        DeviceId_Edit->setGeometry(QRect(160, 310, 191, 20));
        DeviceId_Edit->setMaxLength(16);
        label_6 = new QLabel(CustomWinClass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 130, 111, 21));
        label_7 = new QLabel(CustomWinClass);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 160, 111, 21));
        label_8 = new QLabel(CustomWinClass);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 190, 111, 21));
        label_9 = new QLabel(CustomWinClass);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 250, 121, 21));
        label_10 = new QLabel(CustomWinClass);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 340, 111, 21));
        label_11 = new QLabel(CustomWinClass);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 370, 141, 21));
        Manufacturer_Edit = new QLineEdit(CustomWinClass);
        Manufacturer_Edit->setObjectName(QStringLiteral("Manufacturer_Edit"));
        Manufacturer_Edit->setGeometry(QRect(160, 370, 191, 20));
        Manufacturer_Edit->setMaxLength(100);
        Theme_Edit = new QLineEdit(CustomWinClass);
        Theme_Edit->setObjectName(QStringLiteral("Theme_Edit"));
        Theme_Edit->setGeometry(QRect(160, 400, 191, 20));
        Theme_Edit->setMaxLength(50);
        label_12 = new QLabel(CustomWinClass);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 430, 141, 21));
        label_5 = new QLabel(CustomWinClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 460, 111, 21));
        label_13 = new QLabel(CustomWinClass);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 550, 141, 21));
        Session_Edit = new QLineEdit(CustomWinClass);
        Session_Edit->setObjectName(QStringLiteral("Session_Edit"));
        Session_Edit->setGeometry(QRect(160, 550, 191, 20));
        Session_Edit->setMaxLength(33);
        OSSKU_Spin = new QSpinBox(CustomWinClass);
        OSSKU_Spin->setObjectName(QStringLiteral("OSSKU_Spin"));
        OSSKU_Spin->setGeometry(QRect(160, 160, 191, 22));
        OSSKU_Spin->setValue(48);
        DTZ_Spin = new QSpinBox(CustomWinClass);
        DTZ_Spin->setObjectName(QStringLiteral("DTZ_Spin"));
        DTZ_Spin->setGeometry(QRect(160, 250, 191, 22));
        DTZ_Spin->setMinimum(-512);
        DTZ_Spin->setMaximum(512);
        DTZ_Spin->setValue(-420);
        DTZ_Spin->setDisplayIntegerBase(10);
        Language_Box = new QComboBox(CustomWinClass);
        Language_Box->setObjectName(QStringLiteral("Language_Box"));
        Language_Box->setGeometry(QRect(160, 40, 81, 22));
        NetworkType_Box = new QComboBox(CustomWinClass);
        NetworkType_Box->setObjectName(QStringLiteral("NetworkType_Box"));
        NetworkType_Box->setGeometry(QRect(160, 190, 191, 22));
        Dimensions_Box = new QComboBox(CustomWinClass);
        Dimensions_Box->setObjectName(QStringLiteral("Dimensions_Box"));
        Dimensions_Box->setGeometry(QRect(160, 430, 191, 22));
        DeviceScale_Spin = new QSpinBox(CustomWinClass);
        DeviceScale_Spin->setObjectName(QStringLiteral("DeviceScale_Spin"));
        DeviceScale_Spin->setGeometry(QRect(160, 340, 191, 22));
        DeviceScale_Spin->setMaximum(100);
        DeviceScale_Spin->setValue(100);
        SafeSearch_Box = new QComboBox(CustomWinClass);
        SafeSearch_Box->setObjectName(QStringLiteral("SafeSearch_Box"));
        SafeSearch_Box->setGeometry(QRect(160, 130, 191, 22));
        label_15 = new QLabel(CustomWinClass);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 520, 141, 21));
        Touch_Box = new QComboBox(CustomWinClass);
        Touch_Box->setObjectName(QStringLiteral("Touch_Box"));
        Touch_Box->setGeometry(QRect(160, 520, 191, 22));
        RandClientSession_B = new QPushButton(CustomWinClass);
        RandClientSession_B->setObjectName(QStringLiteral("RandClientSession_B"));
        RandClientSession_B->setGeometry(QRect(350, 550, 21, 21));
        RandDeviceId_B = new QPushButton(CustomWinClass);
        RandDeviceId_B->setObjectName(QStringLiteral("RandDeviceId_B"));
        RandDeviceId_B->setGeometry(QRect(350, 310, 21, 21));
        UserDisplayName_Edit = new QLineEdit(CustomWinClass);
        UserDisplayName_Edit->setObjectName(QStringLiteral("UserDisplayName_Edit"));
        UserDisplayName_Edit->setGeometry(QRect(160, 220, 191, 20));
        UserDisplayName_Edit->setMaxLength(100);
        label_16 = new QLabel(CustomWinClass);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 220, 121, 21));
        market_L = new QLabel(CustomWinClass);
        market_L->setObjectName(QStringLiteral("market_L"));
        market_L->setGeometry(QRect(10, 70, 51, 21));
        Market_Box = new QComboBox(CustomWinClass);
        Market_Box->setObjectName(QStringLiteral("Market_Box"));
        Market_Box->setGeometry(QRect(160, 70, 41, 22));
        Dico_Check = new QCheckBox(CustomWinClass);
        Dico_Check->setObjectName(QStringLiteral("Dico_Check"));
        Dico_Check->setEnabled(true);
        Dico_Check->setGeometry(QRect(280, 10, 101, 21));
        Dico_Check->setChecked(true);
        MachineId_Edit = new QLineEdit(CustomWinClass);
        MachineId_Edit->setObjectName(QStringLiteral("MachineId_Edit"));
        MachineId_Edit->setGeometry(QRect(160, 280, 191, 20));
        MachineId_Edit->setMaxLength(38);
        MachineId_Edit->setReadOnly(false);
        RandMachineId_B = new QPushButton(CustomWinClass);
        RandMachineId_B->setObjectName(QStringLiteral("RandMachineId_B"));
        RandMachineId_B->setGeometry(QRect(350, 280, 21, 21));
        label_14 = new QLabel(CustomWinClass);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 280, 111, 21));
        label_17 = new QLabel(CustomWinClass);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 490, 141, 21));
        CBT_Edit = new QLineEdit(CustomWinClass);
        CBT_Edit->setObjectName(QStringLiteral("CBT_Edit"));
        CBT_Edit->setGeometry(QRect(160, 490, 191, 20));
        CBT_Edit->setMaxLength(10);
        CBT_Edit->setClearButtonEnabled(false);
        label_18 = new QLabel(CustomWinClass);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 100, 111, 21));
        DateFormat_Box = new QComboBox(CustomWinClass);
        DateFormat_Box->setObjectName(QStringLiteral("DateFormat_Box"));
        DateFormat_Box->setGeometry(QRect(160, 100, 191, 22));
        Device_Product_Edit = new QLineEdit(CustomWinClass);
        Device_Product_Edit->setObjectName(QStringLiteral("Device_Product_Edit"));
        Device_Product_Edit->setGeometry(QRect(160, 460, 191, 20));
        Device_Product_Edit->setMaxLength(100);

        retranslateUi(CustomWinClass);
        QObject::connect(buttonBox, SIGNAL(accepted()), CustomWinClass, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CustomWinClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(CustomWinClass);
    } // setupUi

    void retranslateUi(QDialog *CustomWinClass)
    {
        CustomWinClass->setWindowTitle(QApplication::translate("CustomWinClass", "Custom", 0));
#ifndef QT_NO_WHATSTHIS
        CustomWinClass->setWhatsThis(QApplication::translate("CustomWinClass", "<html><head/><body><p>Exemple of frame send to bing.com :</p><p><br/></p><p><span style=\" font-family:'Courier New,courier';\">GET /AS/API/WindowsCortanaPane/V2/Suggestions?qry=about&amp;cp=5&amp;cvid=ce8c2c3ad6704645bb207c0401d709aa&amp;ig=7fdd08f6d6474ead86e3c71404e36dd6&amp;cc=US&amp;setlang=en-US HTTP/1.1</span></p><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">Accept:                        */*</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-BM-ClientFeatures:           FontV4, OemEnabled</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-Search-SafeSearch:           Moderate</span></pre><pre style=\" mar"
                        "gin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-Device-MachineId:            {73737373-9999-4444-9999-A8A8A8A8A8A8}</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-BM-Market:                   US</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-BM-DateFormat:               M/d/yyyy</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-Device-OSSKU:                48</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:"
                        "0px;\"><span style=\" font-family:'Courier New,courier';\">X-Device-NetworkType:          ethernet</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-BM-DTZ:                      -420</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-BM-UserDisplayName:          Tester</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-DeviceID:                    0100D33317836214</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-BM-DeviceScale:              100</span></pre><pre styl"
                        "e=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-Device-Manufacturer:         innotek GmbH</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-BM-Theme:                    ffffff;005a9e</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-BM-DeviceDimensionsLogical:  320x622</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-BM-DeviceDimensions:         320x622</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px"
                        ";\"><span style=\" font-family:'Courier New,courier';\">X-Device-Product:              VirtualBox</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-BM-CBT:                      1439740000</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-Device-isOptin:              false</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-Device-Touch:                false</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-AIS-AuthToken:               AISToken ApplicationId=25555555-"
                        "ffff-4444-cccc-a7a7a7a7a7a7&amp;ExpiresOn=1440301800&amp;HMACSHA256=CS</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">                               y7XaNyyCE8oAZPeN%2b6IJ4ZrpqDDRZUIJyKvrIKnTA%3d</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-Device-ClientSession:        95290000000000000000000000000000</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-Search-AppId:                Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier"
                        " New,courier';\">X-MSEdge-ExternalExpType:      JointCoord</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">X-MSEdge-ExternalExp:          sup001,pleasenosrm40ct,d-thshld42,d-thshld77,d-thshld78</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">Referer:                       https://www.bing.com/</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">Accept-Language:               en-US</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">Accept-Encoding:               gzip, defl"
                        "ate</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">User-Agent:                    Mozilla/5.0 (Windows NT 10.0; Win64; x64; Trident/7.0; rv:11.0; Cortana 1.4.8.152;</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">                               10.0.0.0.10240.21) like Gecko</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">Host:                          www.bing.com</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">Connection:                    Keep-Alive</span></pre>"
                        "<pre style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';\">Cookie:                        SA_SUPERFRESH_SUPPRESS=SUPPRESS=0&amp;LAST=1439745358300; SRCHD=AF=NOFORM; ...</span></pre><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("CustomWinClass", "text of cortana research", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label->setWhatsThis(QApplication::translate("CustomWinClass", "text of cortana research", 0));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("CustomWinClass", "Query :", 0));
#ifndef QT_NO_WHATSTHIS
        Query_Edit->setWhatsThis(QApplication::translate("CustomWinClass", "text of cortana research", 0));
#endif // QT_NO_WHATSTHIS
        Query_Edit->setText(QApplication::translate("CustomWinClass", "private", 0));
#ifndef QT_NO_WHATSTHIS
        label_2->setWhatsThis(QApplication::translate("CustomWinClass", "language use", 0));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("CustomWinClass", "language :", 0));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("CustomWinClass", "Windows Id", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_3->setWhatsThis(QApplication::translate("CustomWinClass", "windows Id (we didn't find where Windows store it content)", 0));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("CustomWinClass", "X-DeviceID :", 0));
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("CustomWinClass", "colors of Windows theme", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_4->setWhatsThis(QApplication::translate("CustomWinClass", "colors of Windows theme", 0));
#endif // QT_NO_WHATSTHIS
        label_4->setText(QApplication::translate("CustomWinClass", "X-BM-Theme :", 0));
#ifndef QT_NO_WHATSTHIS
        DeviceId_Edit->setWhatsThis(QApplication::translate("CustomWinClass", "windows Id ", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("CustomWinClass", "Filter out adult content", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_6->setWhatsThis(QApplication::translate("CustomWinClass", "Filter out adult content", 0));
#endif // QT_NO_WHATSTHIS
        label_6->setText(QApplication::translate("CustomWinClass", "X-Search-SafeSearch :", 0));
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("CustomWinClass", "The operating system edition is determined by using the OperatingSystemSKU", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_7->setWhatsThis(QApplication::translate("CustomWinClass", "The operating system edition", 0));
#endif // QT_NO_WHATSTHIS
        label_7->setText(QApplication::translate("CustomWinClass", "X-Device-OSSKU :", 0));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("CustomWinClass", "Type of network technologie used", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_8->setWhatsThis(QApplication::translate("CustomWinClass", "Type of network technologie used", 0));
#endif // QT_NO_WHATSTHIS
        label_8->setText(QApplication::translate("CustomWinClass", "X-Device-NetworkType :", 0));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_9->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_9->setText(QApplication::translate("CustomWinClass", "X-BM-DTZ :", 0));
#ifndef QT_NO_TOOLTIP
        label_10->setToolTip(QApplication::translate("CustomWinClass", "scale of the screen", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_10->setWhatsThis(QApplication::translate("CustomWinClass", "scale of the screen", 0));
#endif // QT_NO_WHATSTHIS
        label_10->setText(QApplication::translate("CustomWinClass", "X-BM-DeviceScale :", 0));
#ifndef QT_NO_TOOLTIP
        label_11->setToolTip(QApplication::translate("CustomWinClass", "Manufacturer of the computer", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_11->setWhatsThis(QApplication::translate("CustomWinClass", "Manufacturer of the computer", 0));
#endif // QT_NO_WHATSTHIS
        label_11->setText(QApplication::translate("CustomWinClass", "X-BM-Device-Manufacturer :", 0));
#ifndef QT_NO_WHATSTHIS
        Manufacturer_Edit->setWhatsThis(QApplication::translate("CustomWinClass", "Manufacturer of the computer", 0));
#endif // QT_NO_WHATSTHIS
        Manufacturer_Edit->setText(QApplication::translate("CustomWinClass", "System manufacturer", 0));
#ifndef QT_NO_WHATSTHIS
        Theme_Edit->setWhatsThis(QApplication::translate("CustomWinClass", "colors of Windows theme", 0));
#endif // QT_NO_WHATSTHIS
        Theme_Edit->setText(QApplication::translate("CustomWinClass", "ffffff;005a9e", 0));
#ifndef QT_NO_TOOLTIP
        label_12->setToolTip(QApplication::translate("CustomWinClass", "Screen dimensions", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_12->setWhatsThis(QApplication::translate("CustomWinClass", "Screen dimensions", 0));
#endif // QT_NO_WHATSTHIS
        label_12->setText(QApplication::translate("CustomWinClass", "X-BM-DeviceDimensions :", 0));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("CustomWinClass", "Product use", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_5->setWhatsThis(QApplication::translate("CustomWinClass", "Product use", 0));
#endif // QT_NO_WHATSTHIS
        label_5->setText(QApplication::translate("CustomWinClass", "X-Device-Product :", 0));
#ifndef QT_NO_TOOLTIP
        label_13->setToolTip(QApplication::translate("CustomWinClass", "Client session", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_13->setWhatsThis(QApplication::translate("CustomWinClass", "identifier of session", 0));
#endif // QT_NO_WHATSTHIS
        label_13->setText(QApplication::translate("CustomWinClass", "X-Device-ClientSession :", 0));
#ifndef QT_NO_WHATSTHIS
        Session_Edit->setWhatsThis(QApplication::translate("CustomWinClass", "identifier of session", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        OSSKU_Spin->setWhatsThis(QApplication::translate("CustomWinClass", "The operating system edition", 0));
#endif // QT_NO_WHATSTHIS
        Language_Box->clear();
        Language_Box->insertItems(0, QStringList()
         << QApplication::translate("CustomWinClass", "en-US", 0)
         << QApplication::translate("CustomWinClass", "en-UK", 0)
         << QApplication::translate("CustomWinClass", "fr-FR", 0)
        );
#ifndef QT_NO_WHATSTHIS
        Language_Box->setWhatsThis(QApplication::translate("CustomWinClass", "language use", 0));
#endif // QT_NO_WHATSTHIS
        NetworkType_Box->clear();
        NetworkType_Box->insertItems(0, QStringList()
         << QApplication::translate("CustomWinClass", "ethernet", 0)
         << QApplication::translate("CustomWinClass", "wlan", 0)
        );
#ifndef QT_NO_WHATSTHIS
        NetworkType_Box->setWhatsThis(QApplication::translate("CustomWinClass", "Type of network technologie used", 0));
#endif // QT_NO_WHATSTHIS
        Dimensions_Box->clear();
        Dimensions_Box->insertItems(0, QStringList()
         << QApplication::translate("CustomWinClass", "1360x768", 0)
         << QApplication::translate("CustomWinClass", "1280x1024", 0)
         << QApplication::translate("CustomWinClass", "1280x800", 0)
         << QApplication::translate("CustomWinClass", "1280x768", 0)
         << QApplication::translate("CustomWinClass", "1280x720", 0)
         << QApplication::translate("CustomWinClass", "1024x768", 0)
         << QApplication::translate("CustomWinClass", "800x600", 0)
         << QApplication::translate("CustomWinClass", "350x582", 0)
         << QApplication::translate("CustomWinClass", "344x582", 0)
         << QApplication::translate("CustomWinClass", "320x622", 0)
         << QApplication::translate("CustomWinClass", "320x582", 0)
        );
#ifndef QT_NO_WHATSTHIS
        Dimensions_Box->setWhatsThis(QApplication::translate("CustomWinClass", "Screen dimensions", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        DeviceScale_Spin->setWhatsThis(QApplication::translate("CustomWinClass", "scale of the screen", 0));
#endif // QT_NO_WHATSTHIS
        SafeSearch_Box->clear();
        SafeSearch_Box->insertItems(0, QStringList()
         << QApplication::translate("CustomWinClass", "Strict", 0)
         << QApplication::translate("CustomWinClass", "Moderate", 0)
         << QApplication::translate("CustomWinClass", "Desactivated", 0)
        );
#ifndef QT_NO_WHATSTHIS
        SafeSearch_Box->setWhatsThis(QApplication::translate("CustomWinClass", "Filter out adult content", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        label_15->setToolTip(QApplication::translate("CustomWinClass", "touch screen ?", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_15->setWhatsThis(QApplication::translate("CustomWinClass", "touch screen ?", 0));
#endif // QT_NO_WHATSTHIS
        label_15->setText(QApplication::translate("CustomWinClass", "X-Device-Touch :", 0));
        Touch_Box->clear();
        Touch_Box->insertItems(0, QStringList()
         << QApplication::translate("CustomWinClass", "false", 0)
         << QApplication::translate("CustomWinClass", "true", 0)
        );
#ifndef QT_NO_WHATSTHIS
        Touch_Box->setWhatsThis(QApplication::translate("CustomWinClass", "touch screen ?", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        RandClientSession_B->setWhatsThis(QApplication::translate("CustomWinClass", "randomize value", 0));
#endif // QT_NO_WHATSTHIS
        RandClientSession_B->setText(QApplication::translate("CustomWinClass", "?", 0));
#ifndef QT_NO_WHATSTHIS
        RandDeviceId_B->setWhatsThis(QApplication::translate("CustomWinClass", "randomize value", 0));
#endif // QT_NO_WHATSTHIS
        RandDeviceId_B->setText(QApplication::translate("CustomWinClass", "?", 0));
#ifndef QT_NO_WHATSTHIS
        UserDisplayName_Edit->setWhatsThis(QApplication::translate("CustomWinClass", "username", 0));
#endif // QT_NO_WHATSTHIS
        UserDisplayName_Edit->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_16->setToolTip(QApplication::translate("CustomWinClass", "username", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_16->setWhatsThis(QApplication::translate("CustomWinClass", "username", 0));
#endif // QT_NO_WHATSTHIS
        label_16->setText(QApplication::translate("CustomWinClass", "X-BM-UserDisplayName :", 0));
#ifndef QT_NO_WHATSTHIS
        market_L->setWhatsThis(QApplication::translate("CustomWinClass", "market place", 0));
#endif // QT_NO_WHATSTHIS
        market_L->setText(QApplication::translate("CustomWinClass", "market : ", 0));
        Market_Box->clear();
        Market_Box->insertItems(0, QStringList()
         << QApplication::translate("CustomWinClass", "BE", 0)
         << QApplication::translate("CustomWinClass", "DE", 0)
         << QApplication::translate("CustomWinClass", "FR", 0)
         << QApplication::translate("CustomWinClass", "IE", 0)
         << QApplication::translate("CustomWinClass", "IT", 0)
         << QApplication::translate("CustomWinClass", "UK", 0)
         << QApplication::translate("CustomWinClass", "US", 0)
         << QApplication::translate("CustomWinClass", "SP", 0)
        );
#ifndef QT_NO_WHATSTHIS
        Market_Box->setWhatsThis(QApplication::translate("CustomWinClass", "market place", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        Dico_Check->setWhatsThis(QApplication::translate("CustomWinClass", "Using a dictionary of expressions", 0));
#endif // QT_NO_WHATSTHIS
        Dico_Check->setText(QApplication::translate("CustomWinClass", "use dictionnary", 0));
#ifndef QT_NO_WHATSTHIS
        MachineId_Edit->setWhatsThis(QApplication::translate("CustomWinClass", "windows Id", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        RandMachineId_B->setWhatsThis(QApplication::translate("CustomWinClass", "randomize value", 0));
#endif // QT_NO_WHATSTHIS
        RandMachineId_B->setText(QApplication::translate("CustomWinClass", "?", 0));
#ifndef QT_NO_TOOLTIP
        label_14->setToolTip(QApplication::translate("CustomWinClass", "Windows Id", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_14->setWhatsThis(QApplication::translate("CustomWinClass", "windows Id", 0));
#endif // QT_NO_WHATSTHIS
        label_14->setText(QApplication::translate("CustomWinClass", "X-Device-MachineId :", 0));
#ifndef QT_NO_TOOLTIP
        label_17->setToolTip(QApplication::translate("CustomWinClass", "Manufacturer of the computer", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_17->setWhatsThis(QApplication::translate("CustomWinClass", "CBT (unknow utility)", 0));
#endif // QT_NO_WHATSTHIS
        label_17->setText(QApplication::translate("CustomWinClass", "X-BM-CBT :", 0));
#ifndef QT_NO_WHATSTHIS
        CBT_Edit->setWhatsThis(QApplication::translate("CustomWinClass", "CBT", 0));
#endif // QT_NO_WHATSTHIS
        CBT_Edit->setText(QApplication::translate("CustomWinClass", "1439740000", 0));
#ifndef QT_NO_TOOLTIP
        label_18->setToolTip(QApplication::translate("CustomWinClass", "Filter out adult content", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_18->setWhatsThis(QApplication::translate("CustomWinClass", "writing date format", 0));
#endif // QT_NO_WHATSTHIS
        label_18->setText(QApplication::translate("CustomWinClass", "X-BM-DateFormat :", 0));
        DateFormat_Box->clear();
        DateFormat_Box->insertItems(0, QStringList()
         << QApplication::translate("CustomWinClass", "M/D/yyyy", 0)
         << QApplication::translate("CustomWinClass", "M/d/yyyy", 0)
         << QApplication::translate("CustomWinClass", "dd/MM/yyyy", 0)
         << QApplication::translate("CustomWinClass", "MM/dd/yyyy", 0)
        );
#ifndef QT_NO_WHATSTHIS
        DateFormat_Box->setWhatsThis(QApplication::translate("CustomWinClass", "writing date format", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        Device_Product_Edit->setWhatsThis(QApplication::translate("CustomWinClass", "Product use", 0));
#endif // QT_NO_WHATSTHIS
        Device_Product_Edit->setText(QApplication::translate("CustomWinClass", "System Product Name", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomWinClass: public Ui_CustomWinClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOM_H
