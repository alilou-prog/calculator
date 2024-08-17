#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QDebug>

#include <QString>
#include <QRegularExpression>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , mOldResult{0}
    , mNewResult{0}
{
    ui->setupUi(this);
    init(); // initialize the calculator

    connect(ui->b1, &QPushButton::clicked, this, &MainWindow::append1);
    connect(ui->b2, &QPushButton::clicked, this, &MainWindow::append2);
    connect(ui->b3, &QPushButton::clicked, this, &MainWindow::append3);
    connect(ui->b4, &QPushButton::clicked, this, &MainWindow::append4);
    connect(ui->b5, &QPushButton::clicked, this, &MainWindow::append5);
    connect(ui->b6, &QPushButton::clicked, this, &MainWindow::append6);
    connect(ui->b7, &QPushButton::clicked, this, &MainWindow::append7);
    connect(ui->b8, &QPushButton::clicked, this, &MainWindow::append8);
    connect(ui->b9, &QPushButton::clicked, this, &MainWindow::append9);
    connect(ui->bPlus, &QPushButton::clicked, this, &MainWindow::onPlusClicked);
    connect(ui->bTimes, &QPushButton::clicked, this, &MainWindow::onTimesClicked);
    connect(ui->bEqual, &QPushButton::clicked, this, &MainWindow::onEqualClicked);
    connect(ui->bClear, &QPushButton::clicked, this, &MainWindow::onClearClicked);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    // main screen
    mCurrentOperation = Operation::NONE;
    mOpEnabled = true;
    mOperand1 = mOperand2 = 0;
    ui->screen->setText("");

    // history screen
    mOldResult = mNewResult;
    QString oldResultStr = QString::number(mOldResult);
    ui->historyScreen->setText(oldResultStr);
}

void MainWindow::append1()
{
    QString result;
    result = ui->screen->toPlainText() + "1";
    ui->screen->setText(result);
}
void MainWindow::append2()
{
    QString result;
    result = ui->screen->toPlainText() + "2";
    ui->screen->setText(result);
}
void MainWindow::append3()
{
    QString result;
    result = ui->screen->toPlainText() + "3";
    ui->screen->setText(result);
}
void MainWindow::append4()
{
    QString result;
    result = ui->screen->toPlainText() + "4";
    ui->screen->setText(result);
}
void MainWindow::append5()
{
    QString result;
    result = ui->screen->toPlainText() + "5";
    ui->screen->setText(result);
}
void MainWindow::append6()
{
    QString result;
    result = ui->screen->toPlainText() + "6";
    ui->screen->setText(result);
}
void MainWindow::append7()
{
    QString result;
    result = ui->screen->toPlainText() + "7";
    ui->screen->setText(result);
}
void MainWindow::append8()
{
    QString result;
    result = ui->screen->toPlainText() + "8";
    ui->screen->setText(result);
}
void MainWindow::append9()
{
    QString result;
    result = ui->screen->toPlainText() + "9";
    ui->screen->setText(result);
}

void MainWindow::onClearClicked()
{
    QString result;
    auto pScreen = ui->screen;

    auto size = pScreen->toPlainText().size() - 1;
    result = pScreen->toPlainText().left(size);

    // set text to result
    pScreen->setText(result);
}


void MainWindow::onPlusClicked()
{
    if(mOpEnabled)
    {
        auto pScreen = ui->screen;

        // set the currentOperation
        mCurrentOperation = Operation::PLUS;

        QString result = pScreen->toPlainText() + " + ";
        pScreen->setText(result);

        // diable opeartions untill the onEqualClicked in called
        mOpEnabled = false;
    }
}


void MainWindow::onTimesClicked()
{
    if(mOpEnabled)
    {
        auto pScreen = ui->screen;

        // set the currentOperation
        mCurrentOperation = Operation::TIMES;

        QString result = pScreen->toPlainText() + " * ";
        pScreen->setText(result);

        // diable opeartions untill the onEqualClicked in called
        mOpEnabled = false;
    }
}

void MainWindow::onEqualClicked()
{
    auto pScreen = ui->screen;
    bool exprIsLegal = evaluateExpression();
    if(!exprIsLegal)
    {
        pScreen->setText("ERROR");
        delay(1000);
        init();
        return;
    }
    // if the expression is legal :

    // do the convenient operation
    switch(mCurrentOperation)
    {
    case PLUS:
        mNewResult = mOperand1 + mOperand2;
        break;

    case TIMES:
        mNewResult = mOperand1 * mOperand2;
        break;

    case NONE:
        break;
    }

    QString newResultStr = "= " + QString::number(mNewResult);
    pScreen->setText(newResultStr);

    // enable operations
    mOpEnabled = true;
    mCurrentOperation = Operation::NONE;

    // wait 5 seconds then initilazie the calculator
    delay(1000);

    // store the old result
    // qDebug() << "mOldResult = " << mOldResult;
    // qDebug() << "mNewResult = " << mNewResult;
    init();
    return;
}


bool MainWindow::evaluateExpression()
{
    auto pScreen = ui->screen;
    QString expr = pScreen->toPlainText();
    static QRegularExpression re("([0-9]+) ([+*]) ([0-9]+)");

    auto match = re.match(expr);
    if(!match.hasMatch())
        return false;

    // if the expression is legal

    // set the operands and the current operation
    mOperand1 = match.captured(1).toInt();
    mOperand2 = match.captured(3).toInt();
    QString operation = match.captured(2);

    if(operation == "+")
        mCurrentOperation = Operation::PLUS;
    else if(operation == "*")
        mCurrentOperation = Operation::TIMES;
    else
        return false; // !!!!!!!!!!!!!!!!!!!!!!!

    return true;
}

