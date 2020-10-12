#include "pushbutton.h"
#include <QString>

PushButton::PushButton (QString value, QWidget *parent) : QPushButton (value, parent) {
    this->value = value;
    connect(this, SIGNAL(clicked()), this, SLOT(buttonClick()));
};

void PushButton::buttonClick() {
    emit signalButtonPressed(value);
}
