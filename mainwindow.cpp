#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    rootLayout = new QVBoxLayout;
    buttonFieldLayout = new QHBoxLayout;
    iconFieldLayout = new QHBoxLayout;

    // buttonを設置して、紙から星を複製するプロトタイプを作成する
    setButton();

    buttonFieldLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    iconFieldLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    rootLayout->addLayout(buttonFieldLayout);
    rootLayout->addLayout(iconFieldLayout);

    setFixedSize(800, 500);

    ui->setupUi(this);
    ui->centralwidget->setLayout(rootLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button1Clicked(){
    qDebug() << "clicked";
    createStickers();
}

void MainWindow::createStickers(){
    std::string name = "star";
    std::string image = "assets/star.png";

    Sticker *sticker = new Sticker(name, image);
    addGlitter(*sticker);

    Sticker *stickers[10];

    for (int i=0; i<10; i++) {
        stickers[i] = sticker->createClone();
    }

    for (int i=0; i < ARRAY_LENGTH(stickers); i++){
        setLabel(*stickers[i]);
    }
}

void MainWindow::addGlitter(Sticker &sticker){
    sticker.setAddons("glitter");
    sleep(3);
}

void MainWindow::setButton(){
    QPushButton *button1 = new QPushButton("&星を作る", this);
    connect(button1, SIGNAL(clicked()), this, SLOT(button1Clicked()));

    buttonFieldLayout->addWidget(button1);
}

void MainWindow::setLabel(Sticker &sticker){
    QLabel *label = new QLabel();
    QPixmap *image = new QPixmap((":/" + sticker.getImage()).c_str());

    QLabel *labelAddon = new QLabel(sticker.getAddons().c_str());

    label->setPixmap(*image);
    label->setFixedSize(80, 80);
    label->setScaledContents(true);

    iconFieldLayout->addWidget(label);
    iconFieldLayout->addWidget(labelAddon);
}

