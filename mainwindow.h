#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))

#include <string>
#include <QMainWindow>
#include <QBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <unistd.h>

#include "sticker.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QVBoxLayout *rootLayout;
    QHBoxLayout *buttonFieldLayout;
    QHBoxLayout *iconFieldLayout;
    void setButton();
    void setLabel(Sticker &sticker);
    void createStickers();
    void addGlitter(Sticker &sticker);

private slots:
    void button1Clicked();
};
#endif // MAINWINDOW_H
