/********************************************************************************
** Form generated from reading UI file 'periodictable.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERIODICTABLE_H
#define UI_PERIODICTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PeriodicTable
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Si;
    QPushButton *Br;
    QPushButton *Mn;
    QPushButton *Cu;
    QPushButton *Cr;
    QPushButton *V;
    QPushButton *Ti;
    QPushButton *Co;
    QPushButton *Se;
    QPushButton *Ar;
    QPushButton *Ni;
    QPushButton *Cl;
    QPushButton *K;
    QPushButton *Ca;
    QPushButton *Sc;
    QPushButton *Zn;
    QPushButton *Fe;
    QPushButton *Ga;
    QPushButton *Ge;
    QPushButton *As;
    QPushButton *Al;
    QPushButton *S;
    QPushButton *Ne;
    QPushButton *F;
    QPushButton *O;
    QPushButton *N;
    QPushButton *C;
    QPushButton *B;
    QPushButton *Be;
    QPushButton *Li;
    QPushButton *He;
    QPushButton *H;
    QPushButton *Y;
    QPushButton *Sr;
    QPushButton *Rb;
    QPushButton *Kr;
    QPushButton *Na;
    QPushButton *Mg;
    QPushButton *Tc;
    QPushButton *Ru;
    QPushButton *Rh;
    QPushButton *Pd;
    QPushButton *Ag;
    QPushButton *Cd;
    QPushButton *In;
    QPushButton *Sn;
    QPushButton *Sb;
    QPushButton *Te;
    QPushButton *I;
    QPushButton *Xe;
    QPushButton *Cs;
    QPushButton *Ba;
    QPushButton *Lanathanide_Series;
    QPushButton *Lu;
    QPushButton *Hf;
    QPushButton *Ta;
    QPushButton *W;
    QPushButton *Re;
    QPushButton *Os;
    QPushButton *Ir;
    QPushButton *Pt;
    QPushButton *Au;
    QPushButton *Hg;
    QPushButton *Tl;
    QPushButton *Pb;
    QPushButton *Bi;
    QPushButton *Po;
    QPushButton *At;
    QPushButton *Rn;
    QPushButton *Fr;
    QPushButton *Ra;
    QPushButton *Actinide_Series;
    QPushButton *Lr;
    QPushButton *Rf;
    QPushButton *Db;
    QPushButton *Sg;
    QPushButton *Bh;
    QPushButton *Hs;
    QPushButton *Mt;
    QPushButton *Uun;
    QPushButton *Uuu;
    QPushButton *Uub;
    QPushButton *Uuq;
    QPushButton *Zr;
    QPushButton *P;
    QPushButton *Nb;
    QPushButton *Mo;
    QPushButton *resetButton;
    QLineEdit *lineEdit_firstElement;
    QLineEdit *lineEdit_SecondElement;
    QLineEdit *lineEdit_Compound;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *fuseButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PeriodicTable)
    {
        if (PeriodicTable->objectName().isEmpty())
            PeriodicTable->setObjectName(QStringLiteral("PeriodicTable"));
        PeriodicTable->resize(776, 486);
        PeriodicTable->setStyleSheet(QLatin1String("QPushButton:hover{\n"
"        background: qlineargradient(x1 : 0, y1 : 0, x2 : 0, y2 :   1, stop :   0.0 #ffd9aa,\n"
"                stop :   0.5 #ffbb6e, stop :   0.55 #feae42, stop :   1.0 #fedb74);\n"
"}\n"
"\n"
"QPushButton {\n"
"        border: 1px solid #7d8392;\n"
"        border-radius: 2px;\n"
"        padding: 5px 15px 2px 5px;\n"
"        background: qlineargradient(x1 : 0, y1 : 0, x2 : 0, y2 :   1, stop :   0.0 #f5f9ff,\n"
"                stop :   0.5 #c7dfff, stop :   0.55 #afd2ff, stop :   1.0 #c0dbff);\n"
"        color: #7d8392;\n"
"        font: bold large \"Arial\";\n"
"        height: 30px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"        background: qlineargradient(x1 : 0, y1 : 0, x2 : 0, y2 :   1, stop :   0.0 #c0dbff,\n"
"        stop :   0.5 #cfd26f, stop :   0.55 #c7df6f, stop :   1.0 #f5f9ff);\n"
"        padding-top: 2px;\n"
"        padding-left: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:on {\n"
"        background: qlineargradient(x1 : 0, y1 : 0, x2 : 0, y2 :   1, "
                        "stop :   0.0 #5AA72D,\n"
"        stop :   0.5 #B3E296, stop :   0.55 #B3E296, stop :   1.0 #f5f9ff);\n"
"        padding-top: 2px;\n"
"        padding-left: 3px;\n"
"}\n"
""));
        centralWidget = new QWidget(PeriodicTable);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 797, 281));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Si = new QPushButton(layoutWidget);
        Si->setObjectName(QStringLiteral("Si"));

        gridLayout->addWidget(Si, 2, 14, 1, 1);

        Br = new QPushButton(layoutWidget);
        Br->setObjectName(QStringLiteral("Br"));

        gridLayout->addWidget(Br, 3, 17, 1, 1);

        Mn = new QPushButton(layoutWidget);
        Mn->setObjectName(QStringLiteral("Mn"));

        gridLayout->addWidget(Mn, 3, 7, 1, 1);

        Cu = new QPushButton(layoutWidget);
        Cu->setObjectName(QStringLiteral("Cu"));

        gridLayout->addWidget(Cu, 3, 11, 1, 1);

        Cr = new QPushButton(layoutWidget);
        Cr->setObjectName(QStringLiteral("Cr"));

        gridLayout->addWidget(Cr, 3, 6, 1, 1);

        V = new QPushButton(layoutWidget);
        V->setObjectName(QStringLiteral("V"));

        gridLayout->addWidget(V, 3, 5, 1, 1);

        Ti = new QPushButton(layoutWidget);
        Ti->setObjectName(QStringLiteral("Ti"));

        gridLayout->addWidget(Ti, 3, 4, 1, 1);

        Co = new QPushButton(layoutWidget);
        Co->setObjectName(QStringLiteral("Co"));

        gridLayout->addWidget(Co, 3, 9, 1, 1);

        Se = new QPushButton(layoutWidget);
        Se->setObjectName(QStringLiteral("Se"));

        gridLayout->addWidget(Se, 3, 16, 1, 1);

        Ar = new QPushButton(layoutWidget);
        Ar->setObjectName(QStringLiteral("Ar"));

        gridLayout->addWidget(Ar, 2, 18, 1, 1);

        Ni = new QPushButton(layoutWidget);
        Ni->setObjectName(QStringLiteral("Ni"));

        gridLayout->addWidget(Ni, 3, 10, 1, 1);

        Cl = new QPushButton(layoutWidget);
        Cl->setObjectName(QStringLiteral("Cl"));

        gridLayout->addWidget(Cl, 2, 17, 1, 1);

        K = new QPushButton(layoutWidget);
        K->setObjectName(QStringLiteral("K"));

        gridLayout->addWidget(K, 3, 0, 1, 1);

        Ca = new QPushButton(layoutWidget);
        Ca->setObjectName(QStringLiteral("Ca"));

        gridLayout->addWidget(Ca, 3, 1, 1, 1);

        Sc = new QPushButton(layoutWidget);
        Sc->setObjectName(QStringLiteral("Sc"));

        gridLayout->addWidget(Sc, 3, 3, 1, 1);

        Zn = new QPushButton(layoutWidget);
        Zn->setObjectName(QStringLiteral("Zn"));

        gridLayout->addWidget(Zn, 3, 12, 1, 1);

        Fe = new QPushButton(layoutWidget);
        Fe->setObjectName(QStringLiteral("Fe"));

        gridLayout->addWidget(Fe, 3, 8, 1, 1);

        Ga = new QPushButton(layoutWidget);
        Ga->setObjectName(QStringLiteral("Ga"));

        gridLayout->addWidget(Ga, 3, 13, 1, 1);

        Ge = new QPushButton(layoutWidget);
        Ge->setObjectName(QStringLiteral("Ge"));

        gridLayout->addWidget(Ge, 3, 14, 1, 1);

        As = new QPushButton(layoutWidget);
        As->setObjectName(QStringLiteral("As"));

        gridLayout->addWidget(As, 3, 15, 1, 1);

        Al = new QPushButton(layoutWidget);
        Al->setObjectName(QStringLiteral("Al"));

        gridLayout->addWidget(Al, 2, 13, 1, 1);

        S = new QPushButton(layoutWidget);
        S->setObjectName(QStringLiteral("S"));

        gridLayout->addWidget(S, 2, 16, 1, 1);

        Ne = new QPushButton(layoutWidget);
        Ne->setObjectName(QStringLiteral("Ne"));

        gridLayout->addWidget(Ne, 1, 18, 1, 1);

        F = new QPushButton(layoutWidget);
        F->setObjectName(QStringLiteral("F"));

        gridLayout->addWidget(F, 1, 17, 1, 1);

        O = new QPushButton(layoutWidget);
        O->setObjectName(QStringLiteral("O"));

        gridLayout->addWidget(O, 1, 16, 1, 1);

        N = new QPushButton(layoutWidget);
        N->setObjectName(QStringLiteral("N"));

        gridLayout->addWidget(N, 1, 15, 1, 1);

        C = new QPushButton(layoutWidget);
        C->setObjectName(QStringLiteral("C"));

        gridLayout->addWidget(C, 1, 14, 1, 1);

        B = new QPushButton(layoutWidget);
        B->setObjectName(QStringLiteral("B"));

        gridLayout->addWidget(B, 1, 13, 1, 1);

        Be = new QPushButton(layoutWidget);
        Be->setObjectName(QStringLiteral("Be"));

        gridLayout->addWidget(Be, 1, 1, 1, 1);

        Li = new QPushButton(layoutWidget);
        Li->setObjectName(QStringLiteral("Li"));

        gridLayout->addWidget(Li, 1, 0, 1, 1);

        He = new QPushButton(layoutWidget);
        He->setObjectName(QStringLiteral("He"));

        gridLayout->addWidget(He, 0, 18, 1, 1);

        H = new QPushButton(layoutWidget);
        H->setObjectName(QStringLiteral("H"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(H->sizePolicy().hasHeightForWidth());
        H->setSizePolicy(sizePolicy);

        gridLayout->addWidget(H, 0, 0, 1, 1);

        Y = new QPushButton(layoutWidget);
        Y->setObjectName(QStringLiteral("Y"));

        gridLayout->addWidget(Y, 4, 3, 1, 1);

        Sr = new QPushButton(layoutWidget);
        Sr->setObjectName(QStringLiteral("Sr"));

        gridLayout->addWidget(Sr, 4, 1, 1, 1);

        Rb = new QPushButton(layoutWidget);
        Rb->setObjectName(QStringLiteral("Rb"));

        gridLayout->addWidget(Rb, 4, 0, 1, 1);

        Kr = new QPushButton(layoutWidget);
        Kr->setObjectName(QStringLiteral("Kr"));

        gridLayout->addWidget(Kr, 3, 18, 1, 1);

        Na = new QPushButton(layoutWidget);
        Na->setObjectName(QStringLiteral("Na"));

        gridLayout->addWidget(Na, 2, 0, 1, 1);

        Mg = new QPushButton(layoutWidget);
        Mg->setObjectName(QStringLiteral("Mg"));

        gridLayout->addWidget(Mg, 2, 1, 1, 1);

        Tc = new QPushButton(layoutWidget);
        Tc->setObjectName(QStringLiteral("Tc"));

        gridLayout->addWidget(Tc, 4, 7, 1, 1);

        Ru = new QPushButton(layoutWidget);
        Ru->setObjectName(QStringLiteral("Ru"));

        gridLayout->addWidget(Ru, 4, 8, 1, 1);

        Rh = new QPushButton(layoutWidget);
        Rh->setObjectName(QStringLiteral("Rh"));

        gridLayout->addWidget(Rh, 4, 9, 1, 1);

        Pd = new QPushButton(layoutWidget);
        Pd->setObjectName(QStringLiteral("Pd"));

        gridLayout->addWidget(Pd, 4, 10, 1, 1);

        Ag = new QPushButton(layoutWidget);
        Ag->setObjectName(QStringLiteral("Ag"));

        gridLayout->addWidget(Ag, 4, 11, 1, 1);

        Cd = new QPushButton(layoutWidget);
        Cd->setObjectName(QStringLiteral("Cd"));

        gridLayout->addWidget(Cd, 4, 12, 1, 1);

        In = new QPushButton(layoutWidget);
        In->setObjectName(QStringLiteral("In"));

        gridLayout->addWidget(In, 4, 13, 1, 1);

        Sn = new QPushButton(layoutWidget);
        Sn->setObjectName(QStringLiteral("Sn"));

        gridLayout->addWidget(Sn, 4, 14, 1, 1);

        Sb = new QPushButton(layoutWidget);
        Sb->setObjectName(QStringLiteral("Sb"));

        gridLayout->addWidget(Sb, 4, 15, 1, 1);

        Te = new QPushButton(layoutWidget);
        Te->setObjectName(QStringLiteral("Te"));

        gridLayout->addWidget(Te, 4, 16, 1, 1);

        I = new QPushButton(layoutWidget);
        I->setObjectName(QStringLiteral("I"));

        gridLayout->addWidget(I, 4, 17, 1, 1);

        Xe = new QPushButton(layoutWidget);
        Xe->setObjectName(QStringLiteral("Xe"));

        gridLayout->addWidget(Xe, 4, 18, 1, 1);

        Cs = new QPushButton(layoutWidget);
        Cs->setObjectName(QStringLiteral("Cs"));

        gridLayout->addWidget(Cs, 5, 0, 1, 1);

        Ba = new QPushButton(layoutWidget);
        Ba->setObjectName(QStringLiteral("Ba"));

        gridLayout->addWidget(Ba, 5, 1, 1, 1);

        Lanathanide_Series = new QPushButton(layoutWidget);
        Lanathanide_Series->setObjectName(QStringLiteral("Lanathanide_Series"));

        gridLayout->addWidget(Lanathanide_Series, 5, 2, 1, 1);

        Lu = new QPushButton(layoutWidget);
        Lu->setObjectName(QStringLiteral("Lu"));

        gridLayout->addWidget(Lu, 5, 3, 1, 1);

        Hf = new QPushButton(layoutWidget);
        Hf->setObjectName(QStringLiteral("Hf"));

        gridLayout->addWidget(Hf, 5, 4, 1, 1);

        Ta = new QPushButton(layoutWidget);
        Ta->setObjectName(QStringLiteral("Ta"));

        gridLayout->addWidget(Ta, 5, 5, 1, 1);

        W = new QPushButton(layoutWidget);
        W->setObjectName(QStringLiteral("W"));

        gridLayout->addWidget(W, 5, 6, 1, 1);

        Re = new QPushButton(layoutWidget);
        Re->setObjectName(QStringLiteral("Re"));

        gridLayout->addWidget(Re, 5, 7, 1, 1);

        Os = new QPushButton(layoutWidget);
        Os->setObjectName(QStringLiteral("Os"));

        gridLayout->addWidget(Os, 5, 8, 1, 1);

        Ir = new QPushButton(layoutWidget);
        Ir->setObjectName(QStringLiteral("Ir"));

        gridLayout->addWidget(Ir, 5, 9, 1, 1);

        Pt = new QPushButton(layoutWidget);
        Pt->setObjectName(QStringLiteral("Pt"));

        gridLayout->addWidget(Pt, 5, 10, 1, 1);

        Au = new QPushButton(layoutWidget);
        Au->setObjectName(QStringLiteral("Au"));

        gridLayout->addWidget(Au, 5, 11, 1, 1);

        Hg = new QPushButton(layoutWidget);
        Hg->setObjectName(QStringLiteral("Hg"));

        gridLayout->addWidget(Hg, 5, 12, 1, 1);

        Tl = new QPushButton(layoutWidget);
        Tl->setObjectName(QStringLiteral("Tl"));

        gridLayout->addWidget(Tl, 5, 13, 1, 1);

        Pb = new QPushButton(layoutWidget);
        Pb->setObjectName(QStringLiteral("Pb"));

        gridLayout->addWidget(Pb, 5, 14, 1, 1);

        Bi = new QPushButton(layoutWidget);
        Bi->setObjectName(QStringLiteral("Bi"));

        gridLayout->addWidget(Bi, 5, 15, 1, 1);

        Po = new QPushButton(layoutWidget);
        Po->setObjectName(QStringLiteral("Po"));

        gridLayout->addWidget(Po, 5, 16, 1, 1);

        At = new QPushButton(layoutWidget);
        At->setObjectName(QStringLiteral("At"));

        gridLayout->addWidget(At, 5, 17, 1, 1);

        Rn = new QPushButton(layoutWidget);
        Rn->setObjectName(QStringLiteral("Rn"));

        gridLayout->addWidget(Rn, 5, 18, 1, 1);

        Fr = new QPushButton(layoutWidget);
        Fr->setObjectName(QStringLiteral("Fr"));

        gridLayout->addWidget(Fr, 6, 0, 1, 1);

        Ra = new QPushButton(layoutWidget);
        Ra->setObjectName(QStringLiteral("Ra"));

        gridLayout->addWidget(Ra, 6, 1, 1, 1);

        Actinide_Series = new QPushButton(layoutWidget);
        Actinide_Series->setObjectName(QStringLiteral("Actinide_Series"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        Actinide_Series->setFont(font);

        gridLayout->addWidget(Actinide_Series, 6, 2, 1, 1);

        Lr = new QPushButton(layoutWidget);
        Lr->setObjectName(QStringLiteral("Lr"));

        gridLayout->addWidget(Lr, 6, 3, 1, 1);

        Rf = new QPushButton(layoutWidget);
        Rf->setObjectName(QStringLiteral("Rf"));

        gridLayout->addWidget(Rf, 6, 4, 1, 1);

        Db = new QPushButton(layoutWidget);
        Db->setObjectName(QStringLiteral("Db"));

        gridLayout->addWidget(Db, 6, 5, 1, 1);

        Sg = new QPushButton(layoutWidget);
        Sg->setObjectName(QStringLiteral("Sg"));

        gridLayout->addWidget(Sg, 6, 6, 1, 1);

        Bh = new QPushButton(layoutWidget);
        Bh->setObjectName(QStringLiteral("Bh"));

        gridLayout->addWidget(Bh, 6, 7, 1, 1);

        Hs = new QPushButton(layoutWidget);
        Hs->setObjectName(QStringLiteral("Hs"));

        gridLayout->addWidget(Hs, 6, 8, 1, 1);

        Mt = new QPushButton(layoutWidget);
        Mt->setObjectName(QStringLiteral("Mt"));

        gridLayout->addWidget(Mt, 6, 9, 1, 1);

        Uun = new QPushButton(layoutWidget);
        Uun->setObjectName(QStringLiteral("Uun"));

        gridLayout->addWidget(Uun, 6, 10, 1, 1);

        Uuu = new QPushButton(layoutWidget);
        Uuu->setObjectName(QStringLiteral("Uuu"));

        gridLayout->addWidget(Uuu, 6, 11, 1, 1);

        Uub = new QPushButton(layoutWidget);
        Uub->setObjectName(QStringLiteral("Uub"));

        gridLayout->addWidget(Uub, 6, 12, 1, 1);

        Uuq = new QPushButton(layoutWidget);
        Uuq->setObjectName(QStringLiteral("Uuq"));

        gridLayout->addWidget(Uuq, 6, 14, 1, 1);

        Zr = new QPushButton(layoutWidget);
        Zr->setObjectName(QStringLiteral("Zr"));

        gridLayout->addWidget(Zr, 4, 4, 1, 1);

        P = new QPushButton(layoutWidget);
        P->setObjectName(QStringLiteral("P"));

        gridLayout->addWidget(P, 2, 15, 1, 1);

        Nb = new QPushButton(layoutWidget);
        Nb->setObjectName(QStringLiteral("Nb"));

        gridLayout->addWidget(Nb, 4, 5, 1, 1);

        Mo = new QPushButton(layoutWidget);
        Mo->setObjectName(QStringLiteral("Mo"));

        gridLayout->addWidget(Mo, 4, 6, 1, 1);

        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(654, 402, 91, 21));
        lineEdit_firstElement = new QLineEdit(centralWidget);
        lineEdit_firstElement->setObjectName(QStringLiteral("lineEdit_firstElement"));
        lineEdit_firstElement->setGeometry(QRect(90, 320, 231, 41));
        lineEdit_firstElement->setReadOnly(true);
        lineEdit_SecondElement = new QLineEdit(centralWidget);
        lineEdit_SecondElement->setObjectName(QStringLiteral("lineEdit_SecondElement"));
        lineEdit_SecondElement->setGeometry(QRect(420, 319, 251, 41));
        lineEdit_SecondElement->setReadOnly(true);
        lineEdit_Compound = new QLineEdit(centralWidget);
        lineEdit_Compound->setObjectName(QStringLiteral("lineEdit_Compound"));
        lineEdit_Compound->setGeometry(QRect(180, 369, 381, 51));
        lineEdit_Compound->setReadOnly(true);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 280, 691, 41));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        fuseButton = new QPushButton(centralWidget);
        fuseButton->setObjectName(QStringLiteral("fuseButton"));
        fuseButton->setGeometry(QRect(320, 320, 101, 41));
        PeriodicTable->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PeriodicTable);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 776, 26));
        PeriodicTable->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PeriodicTable);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PeriodicTable->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PeriodicTable);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PeriodicTable->setStatusBar(statusBar);

        retranslateUi(PeriodicTable);

        QMetaObject::connectSlotsByName(PeriodicTable);
    } // setupUi

    void retranslateUi(QMainWindow *PeriodicTable)
    {
        PeriodicTable->setWindowTitle(QApplication::translate("PeriodicTable", "Elements", 0));
        Si->setText(QApplication::translate("PeriodicTable", "Si", 0));
        Br->setText(QApplication::translate("PeriodicTable", "Br", 0));
        Mn->setText(QApplication::translate("PeriodicTable", "Mn", 0));
        Cu->setText(QApplication::translate("PeriodicTable", "Cu", 0));
        Cr->setText(QApplication::translate("PeriodicTable", "Cr", 0));
        V->setText(QApplication::translate("PeriodicTable", "V", 0));
        Ti->setText(QApplication::translate("PeriodicTable", "Ti", 0));
        Co->setText(QApplication::translate("PeriodicTable", "Co", 0));
        Se->setText(QApplication::translate("PeriodicTable", "Se", 0));
        Ar->setText(QApplication::translate("PeriodicTable", "Ar", 0));
        Ni->setText(QApplication::translate("PeriodicTable", "Ni", 0));
        Cl->setText(QApplication::translate("PeriodicTable", "Cl", 0));
        K->setText(QApplication::translate("PeriodicTable", "K", 0));
        Ca->setText(QApplication::translate("PeriodicTable", "Ca", 0));
        Sc->setText(QApplication::translate("PeriodicTable", "Sc", 0));
        Zn->setText(QApplication::translate("PeriodicTable", "Zn", 0));
        Fe->setText(QApplication::translate("PeriodicTable", "Fe", 0));
        Ga->setText(QApplication::translate("PeriodicTable", "Ga", 0));
        Ge->setText(QApplication::translate("PeriodicTable", "Ge", 0));
        As->setText(QApplication::translate("PeriodicTable", "As", 0));
        Al->setText(QApplication::translate("PeriodicTable", "Al", 0));
        S->setText(QApplication::translate("PeriodicTable", "S", 0));
        Ne->setText(QApplication::translate("PeriodicTable", "Ne", 0));
        F->setText(QApplication::translate("PeriodicTable", "F", 0));
        O->setText(QApplication::translate("PeriodicTable", "O", 0));
        N->setText(QApplication::translate("PeriodicTable", "N", 0));
        C->setText(QApplication::translate("PeriodicTable", "C", 0));
        B->setText(QApplication::translate("PeriodicTable", "B", 0));
        Be->setText(QApplication::translate("PeriodicTable", "Be", 0));
        Li->setText(QApplication::translate("PeriodicTable", "Li", 0));
        He->setText(QApplication::translate("PeriodicTable", "He", 0));
        H->setText(QApplication::translate("PeriodicTable", "H", 0));
        Y->setText(QApplication::translate("PeriodicTable", "Y", 0));
        Sr->setText(QApplication::translate("PeriodicTable", "Sr", 0));
        Rb->setText(QApplication::translate("PeriodicTable", "Rb", 0));
        Kr->setText(QApplication::translate("PeriodicTable", "Kr", 0));
        Na->setText(QApplication::translate("PeriodicTable", "Na", 0));
        Mg->setText(QApplication::translate("PeriodicTable", "Mg", 0));
        Tc->setText(QApplication::translate("PeriodicTable", "Tc", 0));
        Ru->setText(QApplication::translate("PeriodicTable", "Ru", 0));
        Rh->setText(QApplication::translate("PeriodicTable", "Rh", 0));
        Pd->setText(QApplication::translate("PeriodicTable", "Pd", 0));
        Ag->setText(QApplication::translate("PeriodicTable", "Ag", 0));
        Cd->setText(QApplication::translate("PeriodicTable", "Cd", 0));
        In->setText(QApplication::translate("PeriodicTable", "In", 0));
        Sn->setText(QApplication::translate("PeriodicTable", "Sn", 0));
        Sb->setText(QApplication::translate("PeriodicTable", "Sb", 0));
        Te->setText(QApplication::translate("PeriodicTable", "Te", 0));
        I->setText(QApplication::translate("PeriodicTable", "I", 0));
        Xe->setText(QApplication::translate("PeriodicTable", "Xe", 0));
        Cs->setText(QApplication::translate("PeriodicTable", "Cs", 0));
        Ba->setText(QApplication::translate("PeriodicTable", "Ba", 0));
        Lanathanide_Series->setText(QApplication::translate("PeriodicTable", "57-70", 0));
        Lu->setText(QApplication::translate("PeriodicTable", "Lu", 0));
        Hf->setText(QApplication::translate("PeriodicTable", "Hf", 0));
        Ta->setText(QApplication::translate("PeriodicTable", "Ta", 0));
        W->setText(QApplication::translate("PeriodicTable", "W", 0));
        Re->setText(QApplication::translate("PeriodicTable", "Re", 0));
        Os->setText(QApplication::translate("PeriodicTable", "Os", 0));
        Ir->setText(QApplication::translate("PeriodicTable", "Ir", 0));
        Pt->setText(QApplication::translate("PeriodicTable", "Pt", 0));
        Au->setText(QApplication::translate("PeriodicTable", "Au", 0));
        Hg->setText(QApplication::translate("PeriodicTable", "Hg", 0));
        Tl->setText(QApplication::translate("PeriodicTable", "Tl", 0));
        Pb->setText(QApplication::translate("PeriodicTable", "Pb", 0));
        Bi->setText(QApplication::translate("PeriodicTable", "Bi", 0));
        Po->setText(QApplication::translate("PeriodicTable", "Po", 0));
        At->setText(QApplication::translate("PeriodicTable", "At", 0));
        Rn->setText(QApplication::translate("PeriodicTable", "Rn", 0));
        Fr->setText(QApplication::translate("PeriodicTable", "Fr", 0));
        Ra->setText(QApplication::translate("PeriodicTable", "Ra", 0));
        Actinide_Series->setText(QApplication::translate("PeriodicTable", "89-102", 0));
        Lr->setText(QApplication::translate("PeriodicTable", "Lr", 0));
        Rf->setText(QApplication::translate("PeriodicTable", "Rf", 0));
        Db->setText(QApplication::translate("PeriodicTable", "Db", 0));
        Sg->setText(QApplication::translate("PeriodicTable", "Sg", 0));
        Bh->setText(QApplication::translate("PeriodicTable", "Bh", 0));
        Hs->setText(QApplication::translate("PeriodicTable", "Hs", 0));
        Mt->setText(QApplication::translate("PeriodicTable", "Mt", 0));
        Uun->setText(QApplication::translate("PeriodicTable", "Uun", 0));
        Uuu->setText(QApplication::translate("PeriodicTable", "Uuu", 0));
        Uub->setText(QApplication::translate("PeriodicTable", "Uub", 0));
        Uuq->setText(QApplication::translate("PeriodicTable", "Uuq", 0));
        Zr->setText(QApplication::translate("PeriodicTable", "Zr", 0));
        P->setText(QApplication::translate("PeriodicTable", "P", 0));
        Nb->setText(QApplication::translate("PeriodicTable", "Nb", 0));
        Mo->setText(QApplication::translate("PeriodicTable", "Mo", 0));
        resetButton->setText(QApplication::translate("PeriodicTable", "Reset", 0));
        fuseButton->setText(QApplication::translate("PeriodicTable", "FUSE", 0));
    } // retranslateUi

};

namespace Ui {
    class PeriodicTable: public Ui_PeriodicTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERIODICTABLE_H
