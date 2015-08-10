#include "periodictable.h"
#include "ui_periodictable.h"
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>
#include <QProcess>

PeriodicTable::PeriodicTable(QWidget *parent) :
QMainWindow(parent),
ui(new Ui::PeriodicTable)
{
    ui->setupUi(this);

    //Make buttons checkable
    ui->H->setCheckable(true);
    ui->He->setCheckable(true);
    ui->Li->setCheckable(true);
    ui->Be->setCheckable(true);
    ui->B->setCheckable(true);
    ui->Na->setCheckable(true);
    ui->Mg->setCheckable(true);
    ui->Al->setCheckable(true);
    ui->Si->setCheckable(true);
    ui->K->setCheckable(true);
    ui->Ca->setCheckable(true);
    ui->lineEdit_SecondElement->setFont(*f);
    ui->lineEdit_firstElement->setFont(*f);
    ui->lineEdit_Compound->setFont(*f2);
}

PeriodicTable::~PeriodicTable()
{
    delete ui;
}

void PeriodicTable::on_Lanathanide_Series_clicked()
{

    ui->gridLayout->setAlignment(Qt::AlignHCenter);

    QPushButton *La = new QPushButton(tr("La"));
    QPushButton *Ce = new QPushButton(tr("Ce"));
    QPushButton *Pr = new QPushButton(tr("Pr"));
    QPushButton *Nd = new QPushButton(tr("Nd"));
    QPushButton *Pm = new QPushButton(tr("Pm"));
    QPushButton *Sm = new QPushButton(tr("Sm"));
    QPushButton *Eu = new QPushButton(tr("Eu"));
    QPushButton *Gd = new QPushButton(tr("Gd"));
    QPushButton *Tb = new QPushButton(tr("Tb"));
    QPushButton *Dy = new QPushButton(tr("Dy"));
    QPushButton *Ho = new QPushButton(tr("Ho"));
    QPushButton *Er = new QPushButton(tr("Er"));
    QPushButton *Tm = new QPushButton(tr("Tm"));
    QPushButton *Yb = new QPushButton(tr("Yb"));

    ui->gridLayout_2->addWidget(La, 1, 1);
    ui->gridLayout_2->addWidget(Ce, 1, 2);
    ui->gridLayout_2->addWidget(Pr, 1, 3);
    ui->gridLayout_2->addWidget(Nd, 1, 4);
    ui->gridLayout_2->addWidget(Pm, 1, 5);
    ui->gridLayout_2->addWidget(Sm, 1, 6);
    ui->gridLayout_2->addWidget(Eu, 1, 7);
    ui->gridLayout_2->addWidget(Gd, 1, 8);
    ui->gridLayout_2->addWidget(Tb, 1, 9);
    ui->gridLayout_2->addWidget(Dy, 1, 10);
    ui->gridLayout_2->addWidget(Ho, 1, 11);
    ui->gridLayout_2->addWidget(Er, 1, 12);
    ui->gridLayout_2->addWidget(Tm, 1, 13);
    ui->gridLayout_2->addWidget(Yb, 1, 14);


}

void PeriodicTable::on_Actinide_Series_clicked()
{

    ui->gridLayout->setAlignment(Qt::AlignBottom);


    QPushButton *Ac = new QPushButton(tr("Ac"));
    QPushButton *Th = new QPushButton(tr("Th"));
    QPushButton *Pa = new QPushButton(tr("Pa"));
    QPushButton *U = new QPushButton(tr("U"));
    QPushButton *Np = new QPushButton(tr("Np"));
    QPushButton *Pu = new QPushButton(tr("Pu"));
    QPushButton *Am = new QPushButton(tr("Am"));
    QPushButton *Cm = new QPushButton(tr("Cm"));
    QPushButton *Bk = new QPushButton(tr("Bk"));
    QPushButton *Cf = new QPushButton(tr("Cf"));
    QPushButton *Es = new QPushButton(tr("Es"));
    QPushButton *Fm = new QPushButton(tr("Fm"));
    QPushButton *Md = new QPushButton(tr("Md"));
    QPushButton *No = new QPushButton(tr("No"));

    ui->gridLayout_2->addWidget(Ac, 2, 1);
    ui->gridLayout_2->addWidget(Th, 2, 2);
    ui->gridLayout_2->addWidget(Pa, 2, 3);
    ui->gridLayout_2->addWidget(U, 2, 4);
    ui->gridLayout_2->addWidget(Np, 2, 5);
    ui->gridLayout_2->addWidget(Pu, 2, 6);
    ui->gridLayout_2->addWidget(Am, 2, 7);
    ui->gridLayout_2->addWidget(Cm, 2, 8);
    ui->gridLayout_2->addWidget(Bk, 2, 9);
    ui->gridLayout_2->addWidget(Cf, 2, 10);
    ui->gridLayout_2->addWidget(Es, 2, 11);
    ui->gridLayout_2->addWidget(Fm, 2, 12);
    ui->gridLayout_2->addWidget(Md, 2, 13);
    ui->gridLayout_2->addWidget(No, 2, 14);


}


void PeriodicTable::on_resetButton_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}


//If hydrogen is clicked
void PeriodicTable::on_H_clicked()
{

    ui->H->setDown(true);
    ui->lineEdit_SecondElement->setText("H");

    //if Hydrogen is highlighted
    if (ui->H->isChecked())
    {
        downed = true;
        //set possible bonds highlight
        ui->Li->setDown(downed);
        ui->Be->setDown(downed);
        ui->B->setDown(downed);
        ui->Na->setDown(downed);
        ui->Mg->setDown(downed);
        ui->Al->setDown(downed);
        ui->Si->setDown(downed);
        ui->K->setDown(downed);
        ui->Ca->setDown(downed);
    }
    else
    {
        downed = false;
        //remove possible bonds highlight
        ui->Li->setDown(downed);
        ui->Be->setDown(downed);
        ui->B->setDown(downed);
        ui->Na->setDown(downed);
        ui->Mg->setDown(downed);
        ui->Al->setDown(downed);
        ui->Si->setDown(downed);
        ui->K->setDown(downed);
        ui->Ca->setDown(downed);
    }
}

//If Helium is clicked
void PeriodicTable::on_He_clicked()
{
    ui->lineEdit_SecondElement->setText("He");
}

//If Lithium is clicked
void PeriodicTable::on_Li_clicked()
{
    ui->lineEdit_firstElement->setText("Li");
    ui->Li->setDown(true);
    //if lithium is highlighted
    if (ui->Li->isChecked())
    {
        downed = true;
        //set possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->F->setDown(downed);
        ui->Cl->setDown(downed);
    }
    else
    {
        downed = false;
        //remove possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->F->setDown(downed);
        ui->Cl->setDown(downed);
    }
}
//If Berilum is clicked
void PeriodicTable::on_Be_clicked()
{
    ui->Be->setDown(true);
    ui->lineEdit_firstElement->setText("Be");
    if (ui->Be->isChecked())
    {
        downed = true;
        //set possible bonds highlight
        ui->H->setDown(downed);
        ui->C->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->P->setDown(downed);
        ui->Cl->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
    }
    else
    {
        downed = false;
        //remove possible bonds highlight
        ui->H->setDown(downed);
        ui->C->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->P->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
        ui->Cl->setDown(downed);
    }
}
//If Boron is clicked
void PeriodicTable::on_B_clicked()
{
    ui->B->setDown(true);
    ui->lineEdit_firstElement->setText("B");
    if (ui->B->isChecked())
    {
        downed = true;
        //set possible bonds highlight
        ui->H->setDown(downed);
        ui->C->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->P->setDown(downed);
        ui->Cl->setDown(downed);
        ui->S->setDown(downed);
    }
    else
    {
        downed = false;
        //remove possible bonds highlight
        ui->H->setDown(downed);
        ui->C->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->P->setDown(downed);
        ui->S->setDown(downed);
        ui->Cl->setDown(downed);
    }
}
//If Carbon is clicked
void PeriodicTable::on_C_clicked()
{
    ui->lineEdit_SecondElement->setText("C");
}
//If Nitrogen is clicked
void PeriodicTable::on_N_clicked()
{
    ui->lineEdit_SecondElement->setText("N");
}

//If Oxygen is clicked
void PeriodicTable::on_O_clicked()
{
    ui->lineEdit_SecondElement->setText("O");
}

//If Flourine is clicked
void PeriodicTable::on_F_clicked()
{
    ui->lineEdit_SecondElement->setText("F");
}
//If Neon is clicked
void PeriodicTable::on_Ne_clicked()
{
    ui->lineEdit_SecondElement->setText("Ne");
}

//If Sodium is clicked
void PeriodicTable::on_Na_clicked()
{
    ui->Na->setDown(true);
    ui->lineEdit_firstElement->setText("Na");
    if (ui->Na->isChecked())
    {
        downed = true;
        //set possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->Cl->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
    }
    else
    {
        downed = false;
        //remove possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
        ui->Cl->setDown(downed);
    }
}
//If Magnesium is clicked
void PeriodicTable::on_Mg_clicked()
{
    ui->Mg->setDown(true);
    ui->lineEdit_firstElement->setText("Mg");

    if (ui->Mg->isChecked())
    {
        downed = true;
        //set possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->Cl->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
    }
    else
    {
        downed = false;
        //remove possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
        ui->Cl->setDown(downed);
    }
}
//If Aluminum is clicked
void PeriodicTable::on_Al_clicked()
{
    ui->Al->setDown(true);
    ui->lineEdit_firstElement->setText("Al");
    if (ui->Al->isChecked())
    {
        downed = true;
        //set possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->Cl->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
        ui->C->setDown(downed);
    }
    else
    {
        downed = false;
        //remove possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
        ui->C->setDown(downed);
        ui->Cl->setDown(downed);
    }
}
//If Silicone is clicked
void PeriodicTable::on_Si_clicked()
{
    ui->Si->setDown(true);
    ui->lineEdit_firstElement->setText("Si");
    if (ui->Si->isChecked())
    {
        downed = true;
        //set possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->Cl->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
        ui->C->setDown(downed);
    }
    else
    {
        downed = false;
        //remove possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
        ui->C->setDown(downed);
        ui->Cl->setDown(downed);
    }
}
//If Phosphorus is clicked
void PeriodicTable::on_P_clicked()
{
    ui->lineEdit_SecondElement->setText("P");
}

//If Sulphur is clicked
void PeriodicTable::on_S_clicked()
{
    ui->lineEdit_SecondElement->setText("S");
}
//If Chlorine is clicked
void PeriodicTable::on_Cl_clicked()
{
    ui->lineEdit_SecondElement->setText("Cl");
}
//If Argon is clicked
void PeriodicTable::on_Ar_clicked()
{
    ui->lineEdit_SecondElement->setText("Ar");
}

//If Potassium is clicked
void PeriodicTable::on_K_clicked()
{
    ui->K->setDown(true);
    ui->lineEdit_firstElement->setText("K");
    if (ui->K->isChecked())
    {
        downed = true;
        //set possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->Cl->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
    }
    else
    {
        downed = false;
        //remove possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
        ui->Cl->setDown(downed);
    }
}
//If Calcium is clicked
void PeriodicTable::on_Ca_clicked()
{
    ui->Ca->setDown(true);
    ui->lineEdit_firstElement->setText("Ca");
    if (ui->Ca->isChecked())
    {
        downed = true;
        //set possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->Cl->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
    }
    else
    {
        downed = false;
        //remove possible bonds highlight
        ui->H->setDown(downed);
        ui->N->setDown(downed);
        ui->O->setDown(downed);
        ui->S->setDown(downed);
        ui->F->setDown(downed);
        ui->Cl->setDown(downed);
    }
}

void PeriodicTable::on_fuseButton_clicked()
{
    //metals
    QString element1 = "";
    //gases
    QString element2 = "";
    element1 = ui->lineEdit_firstElement->text();
    element2 = ui->lineEdit_SecondElement->text();

    //Lithium
    if (element1 == "Li")
    {
        if (element2 == "H")
            ui->lineEdit_Compound->setText("LiH"); //result
        else if (element2 == "N")
            ui->lineEdit_Compound->setText("Li3N"); //result
        else if (element2 == "O")
            ui->lineEdit_Compound->setText("Li2O"); //result
        else if (element2 == "F")
            ui->lineEdit_Compound->setText("LiF"); //result
        else if (element2 == "Cl")
            ui->lineEdit_Compound->setText("LiCl"); //result
    }

    //Beryllium
    if (element1 == "Be")
    {
        if (element2 == "H")
            ui->lineEdit_Compound->setText("BeH2"); //result
        else if (element2 == "C")
            ui->lineEdit_Compound->setText("Be2C"); //result
        else if (element2 == "N")
            ui->lineEdit_Compound->setText("Be3N2"); //result
        else if (element2 == "O")
            ui->lineEdit_Compound->setText("BeO"); //result
        else if (element2 == "Cl")
            ui->lineEdit_Compound->setText("BeCl2"); //result
        else if (element2 == "P")
            ui->lineEdit_Compound->setText("Be3P2"); //result
        else if (element2 == "S")
            ui->lineEdit_Compound->setText("BeS"); //result
        else if (element2 == "F")
            ui->lineEdit_Compound->setText("BeF2"); //result
    }

    //Boron
    if (element1 == "B")
    {
        if (element2 == "H")
            ui->lineEdit_Compound->setText("B2H6"); //result
        else if (element2 == "C")
            ui->lineEdit_Compound->setText("B4C"); //result
        else if (element2 == "N")
            ui->lineEdit_Compound->setText("BN"); //result
        else if (element2 == "O")
            ui->lineEdit_Compound->setText("BO3"); //result
        else if (element2 == "Cl")
            ui->lineEdit_Compound->setText("BCl3"); //result
        else if (element2 == "P")
            ui->lineEdit_Compound->setText("BP"); //result
        else if (element2 == "S")
            ui->lineEdit_Compound->setText("B2S3"); //result
    }

    //Sodium
    if (element1 == "Na")
    {
        if (element2 == "H")
            ui->lineEdit_Compound->setText("NaH"); //result
        else if (element2 == "N")
            ui->lineEdit_Compound->setText("Na3N"); //result
        else if (element2 == "O")
            ui->lineEdit_Compound->setText("2Na2O"); //result
        else if (element2 == "Cl")
            ui->lineEdit_Compound->setText("NaCl"); //result
        else if (element2 == "S")
            ui->lineEdit_Compound->setText("Na2S"); //result
        else if (element2 == "F")
            ui->lineEdit_Compound->setText("NaF"); //result
    }

    //Magnesium
    if (element1 == "Mg")
    {
        if (element2 == "H")
            ui->lineEdit_Compound->setText("MgH2"); //result
        else if (element2 == "N")
            ui->lineEdit_Compound->setText("Mg3N2"); //result
        else if (element2 == "O")
            ui->lineEdit_Compound->setText("2MgO"); //result
        else if (element2 == "Cl")
            ui->lineEdit_Compound->setText("MgCl2"); //result
        else if (element2 == "S")
            ui->lineEdit_Compound->setText("MgS"); //result
        else if (element2 == "F")
            ui->lineEdit_Compound->setText("MgF2"); //result
    }

    //Aluminium
    if (element1 == "Al")
    {
        if (element2 == "H")
            ui->lineEdit_Compound->setText("AlH3"); //result
        else if (element2 == "N")
            ui->lineEdit_Compound->setText("AlN"); //result
        else if (element2 == "O")
            ui->lineEdit_Compound->setText("Al2O3"); //result
        else if (element2 == "Cl")
            ui->lineEdit_Compound->setText("AlCl3"); //result
        else if (element2 == "S")
            ui->lineEdit_Compound->setText("Al2S3"); //result
        else if (element2 == "F")
            ui->lineEdit_Compound->setText("AlF3"); //result
        else if (element2 == "C")
            ui->lineEdit_Compound->setText("Al3C4"); //result
        else if (element2 == "P")
            ui->lineEdit_Compound->setText("AlP"); //result
    }

    //Silicon
    if (element1 == "Si")
    {
        if (element2 == "H")
            ui->lineEdit_Compound->setText("Si2H6"); //result
        else if (element2 == "N")
            ui->lineEdit_Compound->setText("Si3N4"); //result
        else if (element2 == "O")
            ui->lineEdit_Compound->setText("SiO2"); //result
        else if (element2 == "Cl")
            ui->lineEdit_Compound->setText("SiCl4"); //result
        else if (element2 == "S")
            ui->lineEdit_Compound->setText("SiS2"); //result
        else if (element2 == "F")
            ui->lineEdit_Compound->setText("SiF4"); //result
        else if (element2 == "C")
            ui->lineEdit_Compound->setText("SiC"); //result
    }

    //Potassium
    if (element1 == "K")
    {
        if (element2 == "H")
            ui->lineEdit_Compound->setText("KH"); //result
        else if (element2 == "N")
            ui->lineEdit_Compound->setText("K3N"); //result
        else if (element2 == "O")
            ui->lineEdit_Compound->setText("K2O"); //result
        else if (element2 == "Cl")
            ui->lineEdit_Compound->setText("KCl"); //result
        else if (element2 == "S")
            ui->lineEdit_Compound->setText("K2S"); //result
        else if (element2 == "F")
            ui->lineEdit_Compound->setText("KF"); //result
    }

    //Calcium
    if (element1 == "Ca")
    {
        if (element2 == "H")
            ui->lineEdit_Compound->setText("CaH2"); //result
        else if (element2 == "N")
            ui->lineEdit_Compound->setText("Ca3N2"); //result
        else if (element2 == "O")
            ui->lineEdit_Compound->setText("CaO"); //result
        else if (element2 == "Cl")
            ui->lineEdit_Compound->setText("CaCl2"); //result
        else if (element2 == "S")
            ui->lineEdit_Compound->setText("CaS"); //result
        else if (element2 == "F")
            ui->lineEdit_Compound->setText("CaF2"); //result
    }

}
