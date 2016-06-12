/********************************************************************************
** Form generated from reading UI file 'cortaspoof.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORTASPOOF_H
#define UI_CORTASPOOF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CortaSpoofClass
{
public:
    QWidget *centralWidget;
    QPushButton *LoveMicrosoft_B;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line;
    QCheckBox *ManifestSpoof;
    QSlider *NetworkSlide;
    QLabel *Names_L;
    QPushButton *Randomize_B;
    QCheckBox *InitSpoof;
    QLabel *Spoofing_L;
    QLabel *Title_L;
    QLabel *MachineId_L;
    QCheckBox *CortaSpoof;
    QLabel *Network_L;
    QLabel *Devicde_Desc_L;
    QPushButton *Custom_B;
    QLabel *Network_L_Speed;
    QLabel *NbSend_L;
    QCheckBox *ZincSpoof;

    void setupUi(QMainWindow *CortaSpoofClass)
    {
        if (CortaSpoofClass->objectName().isEmpty())
            CortaSpoofClass->setObjectName(QStringLiteral("CortaSpoofClass"));
        CortaSpoofClass->setEnabled(true);
        CortaSpoofClass->resize(311, 572);
        CortaSpoofClass->setMinimumSize(QSize(311, 512));
        CortaSpoofClass->setMaximumSize(QSize(311, 572));
        QIcon icon;
        QString iconThemeName = QStringLiteral("CortaSpoof");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("../logo/CortaSpoof.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        CortaSpoofClass->setWindowIcon(icon);
        CortaSpoofClass->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #ca0619);\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #3"
                        "43434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #b1b1b"
                        "1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0,"
                        " x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"     image: url(:/down_arrow.png"
                        ");\n"
"}\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"      subcon"
                        "trol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradi"
                        "ent( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical,"
                        " QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232"
                        ", stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the t"
                        "ool bar */\n"
"     background: url(:/images/handle.png);\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
" "
                        "   margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
""
                        "}\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #ffaa00,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        centralWidget = new QWidget(CortaSpoofClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        LoveMicrosoft_B = new QPushButton(centralWidget);
        LoveMicrosoft_B->setObjectName(QStringLiteral("LoveMicrosoft_B"));
        LoveMicrosoft_B->setEnabled(true);
        LoveMicrosoft_B->setGeometry(QRect(80, 520, 131, 28));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 220, 261, 20));
        QFont font;
        font.setPointSize(11);
        line_2->setFont(font);
        line_2->setLineWidth(1);
        line_2->setMidLineWidth(0);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(20, 380, 261, 16));
        line_3->setFont(font);
        line_3->setLineWidth(1);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 100, 261, 16));
        line->setFont(font);
        line->setLineWidth(1);
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        ManifestSpoof = new QCheckBox(centralWidget);
        ManifestSpoof->setObjectName(QStringLiteral("ManifestSpoof"));
        ManifestSpoof->setGeometry(QRect(40, 300, 191, 20));
        ManifestSpoof->setChecked(true);
        NetworkSlide = new QSlider(centralWidget);
        NetworkSlide->setObjectName(QStringLiteral("NetworkSlide"));
        NetworkSlide->setGeometry(QRect(40, 430, 221, 19));
        NetworkSlide->setMinimum(1);
        NetworkSlide->setMaximum(1000);
        NetworkSlide->setSingleStep(1);
        NetworkSlide->setOrientation(Qt::Horizontal);
        NetworkSlide->setInvertedControls(false);
        Names_L = new QLabel(centralWidget);
        Names_L->setObjectName(QStringLiteral("Names_L"));
        Names_L->setGeometry(QRect(120, 70, 61, 20));
        Names_L->setTextFormat(Qt::RichText);
        Names_L->setOpenExternalLinks(true);
        Names_L->setTextInteractionFlags(Qt::TextBrowserInteraction);
        Randomize_B = new QPushButton(centralWidget);
        Randomize_B->setObjectName(QStringLiteral("Randomize_B"));
        Randomize_B->setGeometry(QRect(80, 180, 141, 31));
        InitSpoof = new QCheckBox(centralWidget);
        InitSpoof->setObjectName(QStringLiteral("InitSpoof"));
        InitSpoof->setEnabled(true);
        InitSpoof->setGeometry(QRect(40, 270, 81, 20));
        InitSpoof->setMouseTracking(true);
        InitSpoof->setChecked(true);
        Spoofing_L = new QLabel(centralWidget);
        Spoofing_L->setObjectName(QStringLiteral("Spoofing_L"));
        Spoofing_L->setGeometry(QRect(40, 240, 55, 16));
        Title_L = new QLabel(centralWidget);
        Title_L->setObjectName(QStringLiteral("Title_L"));
        Title_L->setGeometry(QRect(30, 20, 241, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Linux Libertine G"));
        font1.setPointSize(21);
        Title_L->setFont(font1);
        Title_L->setLayoutDirection(Qt::LeftToRight);
        Title_L->setAlignment(Qt::AlignCenter);
        MachineId_L = new QLabel(centralWidget);
        MachineId_L->setObjectName(QStringLiteral("MachineId_L"));
        MachineId_L->setGeometry(QRect(30, 150, 251, 16));
        MachineId_L->setAlignment(Qt::AlignCenter);
        CortaSpoof = new QCheckBox(centralWidget);
        CortaSpoof->setObjectName(QStringLiteral("CortaSpoof"));
        CortaSpoof->setGeometry(QRect(40, 330, 191, 20));
        CortaSpoof->setChecked(true);
        Network_L = new QLabel(centralWidget);
        Network_L->setObjectName(QStringLiteral("Network_L"));
        Network_L->setGeometry(QRect(40, 400, 101, 16));
        Devicde_Desc_L = new QLabel(centralWidget);
        Devicde_Desc_L->setObjectName(QStringLiteral("Devicde_Desc_L"));
        Devicde_Desc_L->setGeometry(QRect(40, 120, 151, 16));
        Custom_B = new QPushButton(centralWidget);
        Custom_B->setObjectName(QStringLiteral("Custom_B"));
        Custom_B->setGeometry(QRect(90, 470, 111, 31));
        Network_L_Speed = new QLabel(centralWidget);
        Network_L_Speed->setObjectName(QStringLiteral("Network_L_Speed"));
        Network_L_Speed->setGeometry(QRect(210, 400, 61, 21));
        NbSend_L = new QLabel(centralWidget);
        NbSend_L->setObjectName(QStringLiteral("NbSend_L"));
        NbSend_L->setGeometry(QRect(230, 521, 61, 20));
        ZincSpoof = new QCheckBox(centralWidget);
        ZincSpoof->setObjectName(QStringLiteral("ZincSpoof"));
        ZincSpoof->setGeometry(QRect(40, 360, 191, 20));
        ZincSpoof->setChecked(true);
        CortaSpoofClass->setCentralWidget(centralWidget);
        QWidget::setTabOrder(ManifestSpoof, NetworkSlide);
        QWidget::setTabOrder(NetworkSlide, Randomize_B);
        QWidget::setTabOrder(Randomize_B, LoveMicrosoft_B);
        QWidget::setTabOrder(LoveMicrosoft_B, InitSpoof);
        QWidget::setTabOrder(InitSpoof, CortaSpoof);

        retranslateUi(CortaSpoofClass);

        QMetaObject::connectSlotsByName(CortaSpoofClass);
    } // setupUi

    void retranslateUi(QMainWindow *CortaSpoofClass)
    {
        CortaSpoofClass->setWindowTitle(QApplication::translate("CortaSpoofClass", "CortaSpoof", 0));
        LoveMicrosoft_B->setText(QApplication::translate("CortaSpoofClass", "Love Microsoft", 0));
        ManifestSpoof->setText(QApplication::translate("CortaSpoofClass", "Cortana manifest spoofing", 0));
        Names_L->setText(QApplication::translate("CortaSpoofClass", "<html><head/><body><p><a href=\"http://www.esiea.fr /\"><span style=\" color:#b1b1b1;\">ESIEA/CVO</span></a></p></body></html>", 0));
        Randomize_B->setText(QApplication::translate("CortaSpoofClass", "Randomize my ID !", 0));
        InitSpoof->setText(QApplication::translate("CortaSpoofClass", "Cortana Init", 0));
        Spoofing_L->setText(QApplication::translate("CortaSpoofClass", "Spoofing", 0));
        Title_L->setText(QApplication::translate("CortaSpoofClass", "CortaSpoof", 0));
        MachineId_L->setText(QApplication::translate("CortaSpoofClass", "XXXXX-XXXXX-XXXXX-XXXXX", 0));
        CortaSpoof->setText(QApplication::translate("CortaSpoofClass", "Cortana query Spoofing", 0));
        Network_L->setText(QApplication::translate("CortaSpoofClass", "Network Speed", 0));
        Devicde_Desc_L->setText(QApplication::translate("CortaSpoofClass", "Your X-Device-Machine-ID", 0));
        Custom_B->setText(QApplication::translate("CortaSpoofClass", "Custom Frame", 0));
        Network_L_Speed->setText(QApplication::translate("CortaSpoofClass", "10 / sec", 0));
        NbSend_L->setText(QString());
        ZincSpoof->setText(QApplication::translate("CortaSpoofClass", "Cortana zinc", 0));
    } // retranslateUi

};

namespace Ui {
    class CortaSpoofClass: public Ui_CortaSpoofClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORTASPOOF_H
