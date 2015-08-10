#ifndef PERIODICTABLE_H
#define PERIODICTABLE_H

#include <QMainWindow>

namespace Ui {
    class PeriodicTable;
}

class PeriodicTable : public QMainWindow
{
    Q_OBJECT

public:
    explicit PeriodicTable(QWidget *parent = 0);
    ~PeriodicTable();

    private slots:
    void on_Lanathanide_Series_clicked();
    void on_Actinide_Series_clicked();
    void on_H_clicked();
    void on_He_clicked();
    void on_Li_clicked();
    void on_Be_clicked();
    void on_B_clicked();
    void on_C_clicked();
    void on_N_clicked();
    void on_O_clicked();
    void on_F_clicked();
    void on_Ne_clicked();
    void on_Na_clicked();
    void on_Mg_clicked();
    void on_Al_clicked();
    void on_Si_clicked();
    void on_P_clicked();
    void on_S_clicked();
    void on_Cl_clicked();
    void on_Ar_clicked();
    void on_K_clicked();
    void on_Ca_clicked();
    void on_resetButton_clicked();
    void on_fuseButton_clicked();
private:
    Ui::PeriodicTable *ui;
    QFont *f = new QFont("Arial", 19, QFont::Bold);
    QFont *f2 = new QFont("Arial", 30, QFont::Bold);
    bool downed;
};

#endif // PERIODICTABLE_H
