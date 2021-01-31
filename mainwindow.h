#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void choose_ground_lauch();
    void show_full();
    void choose_ARM();
    void choose_ARMtoRM();
    void choose_RMtoARM();
    void show_prev();
    void show_next();
    void doInitActions(const std::vector<QString>& images, const std::vector<QString>& texts);
    void setCurrentSlide(int index);

private:
    Ui::MainWindow *ui;
    const std::vector<QString>* m_pVectorOfImages;
    const std::vector<QString>* m_pVectorOfTexts;
    int currentSlide = 0;
};
