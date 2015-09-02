#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_saveButton_clicked()
{
    ui->outputEdit->clear();
    ui->outputEdit->append("Name        : "+ui->nameEdit->text());
    ui->outputEdit->append("Class       : "+ui->classEdit->text());
    ui->outputEdit->append("Roll Number :"+ui->rollEdit->text());
}
