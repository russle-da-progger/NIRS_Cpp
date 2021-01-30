#include "mainwindow.h"
#include "ui_new_ui.h"

 namespace {
 std::vector<std::string>ARM={
     "images/1/1_1.png",
     "images/1/1_2.png",
     "images/1/1_3.png",
     "images/1/1_4.png",
     "images/1/1_5.png",
     "images/1/1_6.png",
     "images/1/1_7.png",
     "images/1/1_8.png",
     "images/1/1_9.png",
     "images/1/1_10.png",
     "images/1/1_11.png",
     "images/1/1_12.png",
     "images/1/1_13.png",
     "images/1/1_14.png",
     "images/1/1_15.png",
     "images/1/1_16.png",
     "images/1/1_17.png",
     "images/1/1_18.png",
     "images/1/1_19.png",
     "images/1/1_20.png",
     "images/1/1_21.png",
     "images/1/1_22.png",
     "images/1/1_23.png",
         };

 std::vector<std::string>ARM_to_RM={
     "images/2/2_1.png",
     "images/2/2_2.png",
     "images/2/2_3.png",
     "images/2/2_4.png",
     "images/2/2_5.png",
     "images/2/2_6.png",
     "images/2/2_7.png",
     "images/2/2_8.png",
     "images/2/2_9.png",
     "images/2/2_10.png",
             };

 std::vector<std::string>RM_to_ARM={
     "images/3/3_1.png",
     "images/3/3_2.png",
     "images/3/3_3.png",
     "images/3/3_4.png",
     "images/3/3_5.png",
     "images/3/3_6.png",
     "images/3/3_7.png",
             };

 std::vector<std::string>ground_launch={
        "images/4/4_1.png",
        "images/4/4_2.png",
        "images/4/4_3.png",
        "images/4/4_4.png",
        "images/4/4_5.png",
            };

}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    int i = 0;
    ui->radioButton_ground_launch->connect(this->choose_ground_launch)
    ui->radioButton_ARM->connect(this->choose_ARM)
    ui->radioButton_ARMtoRM->connect(this->choose_ARMtoRM)
    ui->radioButton_RMtoARM->connect(this->choose_RMtoARM)

    ui->pushButton_backward->clicked.connect(self.show_next)
    ui->pushButton_backward->clicked.connect(self.show_prev)
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: choose_ground_lauch():
    this->i = 0;
    ui->label_image_overlay.setPi
