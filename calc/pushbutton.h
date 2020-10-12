#pragma once
#include <QPushButton>
#include <QString>
#include <QWidget>

class PushButton : public QPushButton {
    Q_OBJECT

private:
    QString value;

public:
    explicit PushButton (QString value, QWidget *parent = nullptr);

signals:
    void signalButtonPressed(QString value);

protected slots:
    void buttonClick();
};
