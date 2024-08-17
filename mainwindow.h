#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

enum Operation {NONE=0, PLUS, TIMES};

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    bool mOpEnabled;
    Operation mCurrentOperation;
    int mOperand1;
    int mOperand2;
    int result;
    int mOldResult;
    int mNewResult;

    void init();

    void append1(); void append2(); void append3(); void onPlusClicked();
    void append4(); void append5(); void append6(); void onTimesClicked();
    void append7(); void append8(); void append9(); void onEqualClicked();
    void onClearClicked();

    bool evaluateExpression();

};
#endif // MAINWINDOW_H



#include <QEventLoop>
#include <QTimer>

#ifndef DELAY_H
#define DELAY_H

inline void delay(int millisecondsWait)
{
    QEventLoop loop;
    QTimer t;
    t.connect(&t, &QTimer::timeout, &loop, &QEventLoop::quit);
    t.start(millisecondsWait);
    loop.exec();
}

#endif // DELAY_H

