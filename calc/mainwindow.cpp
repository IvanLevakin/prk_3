#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pushbutton.h"
#include <QLineEdit>
#include <QDebug>

int i=0;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    mainLayout = new QVBoxLayout;

    initInput();
    initButtons();

    auto *mainWidget = new QWidget;
    mainWidget->setLayout(mainLayout);
    this->setMaximumSize(200, 150);
    this->setCentralWidget(mainWidget);
}

void MainWindow::initInput() {
    // создаём поле для ввода
    auto *headerLine = new QHBoxLayout;
    input = new QLineEdit;
    input->setReadOnly(true);
    headerLine->addWidget(input);
    mainLayout->addItem(headerLine);
}

void MainWindow::handleNumbers(QString value) {
    auto text = input->text();
    input->setText(text + value);
}

// сделать так, чтобы нельзя было вводить строки вида 45++++84--48+-*/-+
// знаки операций должны отделяться друг от друга числами
void MainWindow::handleOperation(QString value) {
    auto text = input->text();
    if (text.size())
        if (text[text.size()-1]=='-' or text[text.size()-1]=='+' or text[text.size()-1]=='*' or text[text.size()-1]=='/')
            return;
    input->setText(text + value);
}

// не должно быть возможным поставить две точки и более внутри одного числа
// 48.5.5.5.5 + 1.5.5.5.5
void MainWindow::handleDot(QString value) {
    auto text = input->text();
    if (text.size()){
        input->setText(text +'0' + value);
        return;
    }
    for (int i=text.size();i>=0;i--){
        if (text[i]=='.')
            return;
        if (text[i]=='+' or text[i]=='-' or text[i]=='*' or text[i]=='/'){
            input->setText(text + value);
            return;
        }
    }
    if (i==0)
        input->setText(text + value);
    return;
}
void MainWindow::initButtons() {
    // создаём кнопки
    auto buttonsLayout = new QHBoxLayout;
    auto button7 = new PushButton("7");
    connect(button7, &PushButton::signalButtonPressed, this, &MainWindow::handleNumbers);

    auto button8 = new PushButton("8");
    connect(button8, &PushButton::signalButtonPressed, this, &MainWindow::handleNumbers);

    auto button9 = new PushButton("9");
    connect(button9, &PushButton::signalButtonPressed, this, &MainWindow::handleNumbers);

    auto buttonplus = new PushButton("+");
    connect(buttonplus, &PushButton::signalButtonPressed, this, &MainWindow::handleOperation);

    buttonsLayout->addWidget(button7);
    buttonsLayout->addWidget(button8);
    buttonsLayout->addWidget(button9);
    buttonsLayout->addWidget(buttonplus);
    mainLayout->addLayout(buttonsLayout);

    auto buttons2Layout = new QHBoxLayout;
    auto button4 = new PushButton ("4");
    auto button5 = new PushButton ("5");
    auto button6 = new PushButton ("6");
    auto buttonminus = new PushButton("-");
    buttons2Layout->addWidget(button4);
    buttons2Layout->addWidget(button5);
    buttons2Layout->addWidget(button6);
    buttons2Layout->addWidget(buttonminus);
    mainLayout->addLayout(buttons2Layout);

    auto buttons3Layout = new QHBoxLayout;
    auto button1 = new PushButton("1");
    auto button2 = new PushButton("2");
    auto button3 = new PushButton("3");
    auto buttonumn = new PushButton("*");
    buttons3Layout->addWidget(button1);
    buttons3Layout->addWidget(button2);
    buttons3Layout->addWidget(button3);
    buttons3Layout->addWidget(buttonumn);
    mainLayout->addLayout(buttons3Layout);

    auto buttons4Layout = new QHBoxLayout;
    auto button0 = new PushButton("0");
    auto buttontoch = new PushButton(".");
    auto buttonravno = new PushButton("=");
    auto buttondel = new PushButton("/");
    buttons4Layout->addWidget(button0);
    buttons4Layout->addWidget(buttontoch);
    buttons4Layout->addWidget(buttonravno);
    buttons4Layout->addWidget(buttondel);
    mainLayout->addLayout(buttons4Layout);

}

MainWindow::~MainWindow() {
    delete ui;
}


