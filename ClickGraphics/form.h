#ifndef FORM_H
#define FORM_H

#include "ui_form.h"

class Form : public QWidget, private Ui::Form
{
    Q_OBJECT

public slots:
  
  void on_btnShowSelected_clicked();
  
public:
    Form(QWidget *parent = 0);
    std::vector<QGraphicsPixmapItem *> Items;

};

#endif
