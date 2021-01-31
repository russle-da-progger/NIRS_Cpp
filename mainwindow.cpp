#include "mainwindow.h"
#include "ui_new_ui.h"

#include <QPixmap>
#include <QString>
#include <QRadioButton>
#include <QPushButton>

 namespace {
 std::vector<QString> ARM={
     QStringLiteral(":/new/prefix1/images/1/1_1.png"),
     QStringLiteral(":/new/prefix1/images/1/1_2.png"),
     QStringLiteral(":/new/prefix1/images/1/1_3.png"),
     QStringLiteral(":/new/prefix1/images/1/1_4.png"),
     QStringLiteral(":/new/prefix1/images/1/1_5.png"),
     QStringLiteral(":/new/prefix1/images/1/1_6.png"),
     QStringLiteral(":/new/prefix1/images/1/1_7.png"),
     QStringLiteral(":/new/prefix1/images/1/1_8.png"),
     QStringLiteral(":/new/prefix1/images/1/1_9.png"),
     QStringLiteral(":/new/prefix1/images/1/1_10.png"),
     QStringLiteral(":/new/prefix1/images/1/1_11.png"),
     QStringLiteral(":/new/prefix1/images/1/1_12.png"),
     QStringLiteral(":/new/prefix1/images/1/1_13.png"),
     QStringLiteral(":/new/prefix1/images/1/1_14.png"),
     QStringLiteral(":/new/prefix1/images/1/1_15.png"),
     QStringLiteral(":/new/prefix1/images/1/1_16.png"),
     QStringLiteral(":/new/prefix1/images/1/1_17.png"),
     QStringLiteral(":/new/prefix1/images/1/1_18.png"),
     QStringLiteral(":/new/prefix1/images/1/1_19.png"),
     QStringLiteral(":/new/prefix1/images/1/1_20.png"),
     QStringLiteral(":/new/prefix1/images/1/1_21.png"),
     QStringLiteral(":/new/prefix1/images/1/1_22.png"),
     QStringLiteral(":/new/prefix1/images/1/1_23.png"),
         };

 std::vector<QString> ARM_to_RM={
     QStringLiteral(":/new/prefix1/images/2/2_1.png"),
     QStringLiteral(":/new/prefix1/images/2/2_2.png"),
     QStringLiteral(":/new/prefix1/images/2/2_3.png"),
     QStringLiteral(":/new/prefix1/images/2/2_4.png"),
     QStringLiteral(":/new/prefix1/images/2/2_5.png"),
     QStringLiteral(":/new/prefix1/images/2/2_6.png"),
     QStringLiteral(":/new/prefix1/images/2/2_7.png"),
     QStringLiteral(":/new/prefix1/images/2/2_8.png"),
     QStringLiteral(":/new/prefix1/images/2/2_9.png"),
     QStringLiteral(":/new/prefix1/images/2/2_10.png"),
             };

 std::vector<QString> RM_to_ARM={
     QStringLiteral(":/new/prefix1/images/3/3_1.png"),
     QStringLiteral(":/new/prefix1/images/3/3_2.png"),
     QStringLiteral(":/new/prefix1/images/3/3_3.png"),
     QStringLiteral(":/new/prefix1/images/3/3_4.png"),
     QStringLiteral(":/new/prefix1/images/3/3_5.png"),
     QStringLiteral(":/new/prefix1/images/3/3_6.png"),
     QStringLiteral(":/new/prefix1/images/3/3_7.png"),
             };

 std::vector<QString> ground_launch={
    QStringLiteral(":/new/prefix1/images/4/4_1.png"),
    QStringLiteral(":/new/prefix1/images/4/4_2.png"),
    QStringLiteral(":/new/prefix1/images/4/4_3.png"),
    QStringLiteral(":/new/prefix1/images/4/4_4.png"),
    QStringLiteral(":/new/prefix1/images/4/4_5.png"),
            };

 std::vector<QString> ARM_text = {
    QStringLiteral("При наборе высоты воздух поступает в воздухозаборное устройство 1 (ВЗУ), представляющее из себя осесимметричное конусное отверстие, в котором всасываемый поток тормозится (при помощи 1-го косого{создается центральной конусной частью гондолы} и 2-х прямых{первый-перед внутренним поточным каналом, а второй-когда поток повторно ускоряется после впускной горловины} скачков уплотнения) до дозвуковых скоростей, нагревается до 1000..1240 К и сжимается до давления 5,43 бар."),
    QStringLiteral("После воздух попадает в внутреннюю полость двигателя, где заслонка 22 разделяет его на две части: первая(основной поток) поступает в теплообменник 2"),
    QStringLiteral("Тем временем другая(вспомогательная) идет по периферии через радиальный контур для реализации прямоточного цикла."),
    QStringLiteral("Основной поток, прошедший в ТА-2, охлаждается гелиевым контуром(температура гелия 100 К), расположенным между потоками горячего воздуха и холодного водорода. Температура воздуха понижается до 123 К (сначала неизоэнтропно до 950 К при соотношении расходов гелия и воздуха 1:3, затем изоэнтропно до 140 К, поскольку теплообменник не ограничен температурным лимитом)."),
    QStringLiteral("Затем охлажденный воздух поступает в компрессор 3, где происходит его сжатие до 200 бар. Компрессор 3 имеет два контура: компрессор низкого 3 и высокого 4 давлений."),
    QStringLiteral("Часть воздуха после прохождения контура низкого давления отбирается в инжекторы, находящиеся в промежутке между двумя теплообменными секторами в виде кольца, для защиты ТА-2 от конденсации (обледенения) водяных паров при охлаждении в нем основного воздушного потока. Во время запуска двигателя охлажденный воздух отбирается и поступает в промежуточную кольцевую трубу, которая покрывается инеем в результате теплообмена с наружным потоком. Следовательно, через второй теплообменный сектор будет течь смесь, состоящая из кристаллов льда и воздушных частиц. Благодаря чему на трубках в ТА 2 уже не будет осаждаться ледяной слой."),
    QStringLiteral("Затем сжатый воздух, минуя компрессор-3, поступает в камеру сгорания ВРД-30."),
    QStringLiteral("Гелий, прошедший и подогретый в ТА-2, далее течет в ТА-8, где дополнительно нагревается продуктами газогенератора-7."),
    QStringLiteral("А после подается на турбины 5 и 6, обеспечивая их беспрерывное вращение. Сами турбины приводят в движение компрессоры высокого-4 и низкого-3 давлений."),
    QStringLiteral("Пройдя турбины 5 и 6, частично охлажденный гелий под низким давлением поступает в ТА-12, где охлаждается жидким водородом (до температуры чуть ниже 100К), текущий из насосов 18 и 26."),
    QStringLiteral("В этом режиме полета нет необходимости использования полного расхода гелия на турбины, поэтому его часть, обходя турбины, поступает сразу в ТА-13, охлаждаясь подогретым, но все еще достаточно холодным водородом, который прошел через ТА-12, до требуемой температуры (немного ниже 100К)."),
    QStringLiteral("Гелий, прошедший через ТА-12 и имеющий температуру чуть ниже 100 К, поступает на подпитывающий турбокомпрессор 14, а гелий, прошедший через ТА-13, в подпитывающий турбокомпрессор низкого давления 9. Согласно (1), перепад давлений между турбинами 5 и 6 приблизительно равен 4, следовательно, гелий, вышедший из ТА- 12, имеет давление в 4 раза меньшее, чем гелий, вышедший из ТА-13. Соответственно, степень сжатия подпитывающего турбокомпрессора 14 должна быть в 4 раза выше, чем у турбокомпрессора 9. Из-за нагрева при сжатии в подпитывающих турбокомпрессорах гелий нужно поддавать с температурой чуть ниже требуемой, чтобы после прохождения через них, жидкость имела температуру 100 К."),
    QStringLiteral("Из подпитывающих турбокомпрессоров гелий вытекает с температурой 100К при давлении 250бар."),
    QStringLiteral("Водород, пройдя насосы 18, 26, а затем ТА 12 и 13, частично отбирается на наддув баков горючего, чтобы повысить их прочность и обеспечить бескавитационную работу насосов. Остальной же расход поступает в газогенератор 16, куда также поддается жидкий кислород с помощью насоса 20."),
    QStringLiteral("Затем продукты газогенератора 16 текут к турбине 15, которая приводит в движение гелиевый подпитывающий компрессор высокого давления 14."),
    QStringLiteral("После турбины 15 продукты газогенератора 16, сообщив часть энергии турбине 15, поступают на турбину 10, вращающая гелиевый подпитывающий компрессор низкого давления 9."),
    QStringLiteral("Таким образом турбины 10 и 15 передают требуемую механическую работу компрессорам 9 и 14, и в результате они обладают соответствующими степенями сжатия (у 9 меньше в 4 раза, чем у 14). На выходе из турбины 10 газогенераторный газ имеет низкую температуру, но выше критической конденсации воды. Поэтому дальше он частично дожигается в газогенераторе 11, куда также поддается жидкий кислород из насоса 20."),
    QStringLiteral("Потом продукты газогенератора поступают на турбины 17 и 25, приводящие в движение насосы водорода 18 и 26."),
    QStringLiteral("Далее продукты газогенератора объединяются и поступают на турбину 19, которая вращает кислородный насос 20."),
    QStringLiteral("После турбины 19 газы частично протекают до газогенератора 7, где третий раз дожигаются, смешиваясь с жидким кислородом (также поступающим из насоса 20)."),
    QStringLiteral("Продукты газогенератора 7 проходят через ТА 8, сообщая тепло гелию, прошедший ТА 2, перед турбинами 5 и 6. Затем газы, пройдя ТА 8, внедряются в основной поток. При этом первичные продукты газогенератора 16, после трехразового дожигания имеют избыток водорода, поэтому, пройдя ранее упомянутые агрегаты, часть газогенераторного газа подается в камеру сгорания ВРД 30 с помощью делителя расхода, а оставшаяся – в прямоточную камеру сгорания 31, в которой газы сгорают с потоком воздуха, прошедший по прямоточному контуру. При этом максимальный удельный импульс от прямоточного цикла приблизительно достигается от скорости полета 0,5..1 Маха."),
    QStringLiteral("На особо сложных режимах полета (Набор скорости до 1 Маха и конечный промежуток полета в режиме ВРД) забортного воздуха, как окислителя, недостаточно для получения требуемых термодинамических параметров рабочего тела в камере сгорания ВРД 30 (мольного соотношение топливных элементов), вследствие чего и необходимой тяги. Поэтому, на этих этапах полёта, к воздуху, вышедшему из компрессора 3, дополнительно поддается кислород (от насоса 20)."),
    QStringLiteral("Часть кислорода, поступающего от насоса 20, отбирается в ТА 23, где газифицируется теплыми продуктами газогенератора 11 (прошедшие турбину 19), для наддува собственных баков.")
};

std::vector<QString> ARM_to_RM_text = {
    QStringLiteral("При достижении высоты 27 км и скорости 5,5 Маха летательный аппарат переходит в ракетный режим, поскольку атмосфера значительно разрежена, и в результате воздушно- реактивный режим становится менее эффективен. В этот момент ВЗУ 1 закрывается путем выдвижения конуса до полного перекрытия горла диффузора. Теперь для функционирования двигателя применяется только кислород, хранящийся на борту. Одновременно с этим камера ВРД 30 выдвигается с помощью гидроцилиндров по специальным направляющим, превращаясь в расширительный неохлаждаемый насадок сопла ракетного двигателя."),
    QStringLiteral("Расход водорода в режиме ВРД около 60 кг/с при максимальном расходе воздуха (около 300 кг/с) и максимальном расходе кислорода (около 50 кг/с). Ракетный же двигатель потребляет приблизительно 21 кг/с водорода и 98 кг/с кислорода. Поэтому агрегаты питания вмонтированы парно: два турбонасосных агрегата (ТНА) водорода (17-18 и 25- 26), обеспечивающие водородный расход до 30 кг/с каждый, и два кислородных ТНА (19- 20 и 27-28), обеспечивающие расход кислорода до 50 кг/с."),
    QStringLiteral("В ВРД режиме работают два ТНА водорода (17-18 и 25-26) и один кислородный (19-20), поскольку здесь меньше требуется расхода кислорода."),
    QStringLiteral("При переходе в ракетный режим должен отключаться ТНА водорода 17-18  путем перекрытия дроссельных клапанов, обеспечивающих подачу водорода в газогенератор 16 и всех открытых клапанов на магистрали ТНА кислорода 19-20 и запускаться ТНА кислорода 27-28."),
    QStringLiteral("В результате прекращается создание рабочего тела в газогенераторах 7,11 и 16, что приводит к началу остановки насосов. Пока они тормозят, у них еще имеется кинетическая энергия, которая затем затрачивается на открытие клапанов на магистрали водорода, идущая к рубашке охлаждения камеры ракетного двигателя 29, а на магистрали кислородного насоса 19-20 открывается клапан, обеспечивающий подачу кислорода от указанного насоса в газогенератор 24.	Водород и кислород, попадающие в газогенератор 24, воспламеняются с помощью впрыска горючего, находящийся в ампулах 32. Одновременно с этим, перекрывается клапан, сообщающий вместе турбины 17 и 25, и открывается клапан, обеспечивающий подачу продуктов газогенератора 24 на турбину 25. Открывается клапан перед турбиной 27 ТНА кислорода 27-28."),
    QStringLiteral("Как только все вышеуказанные клапаны переведены в рабочее состояние, продукты газогенератора 24 поступают на турбину 25, обеспечивая непрерывное функционирование ТНА водорода 25-26."),
    QStringLiteral("Сообщив часть энергии турбине 25, газогенераторное рабочее тело поступает на турбины 19 и 27 кислородных насосов."),
    QStringLiteral("Поскольку ТНА кислорода 27-28 первоначально не имел скорости, то ему требуется время на раскрутку, поэтому уже работающий кислородный насос 19 функционирует только для поддержания рабочего процесса в газогенераторе 24."),
    QStringLiteral("Пройдя турбины 19 и 27, газогенераторный газ поступает в камеру сгорания ракетного двигателя 29."),
    QStringLiteral("Как только ТНА кислорода 27-28 выходит на необходимый рабочий режим, открываются клапаны, обеспечивающие доступ жидкого кислорода в камеру сгорания ракетного двигателя 29. В нее же поддается пусковое горючее, затем топливная смесь воспламеняется и возникает запуск ракетного двигателя.")
};

std::vector<QString> RM_to_ARM_text = {
    QStringLiteral("Потребность в таком переходе возникает в период спуска ЛА. Для этого перекрываются клапаны, обеспечивающие подачу кислорода в камеру ракетного двигателя 29. В камере прекращается горение, однако насосы еще работают на поддержание рабочего процесса в газогенераторе 24."),
    QStringLiteral("Клапан перед турбиной 27 закрывается и кислородный ТНА 27-28 останавливается."),
    QStringLiteral("Открывается клапан, расположенный после насоса водорода 26, чтобы обеспечить подачу жидкого водорода в газогенератор 16, пройдя через ТА 12 и 13."),
    QStringLiteral("Открываются клапаны, находящиеся после насоса кислорода 20, обеспечивающие питание газогенераторов 7, 11 и 16 жидким кислородом."),
    QStringLiteral("Одновременно с этим, в газогенераторы 7, 11 и 16 поочередно подается пусковое горючее, обеспечивающее запуск соответствующих газогенераторов. После запуска газогенераторов начинается раскручивание подпитывающих турбокомпрессоров гелия и ТНА водорода 17-18 на режим."),
    QStringLiteral("В этот же момент осуществляется закрытие клапана жидкого кислорода, питающего газогенератор 24, и после горение в нем прекращается. Одновременно с этим перекрываются клапаны, первый из которых расположен между газогенератором 24 и водородным насосом 26, а второй – между водородным насосом и рубашкой охлаждения ракетного двигателя 29. В результате чего увеличивается расход водорода на газогенератор 16. Открывается клапан магистрали, согласующий турбины 17 и 25. Так, ТНА водорода 25-26 переходит на питание от газогенератора 11, а газогенератор 24 и ТНА кислорода 27-28 прекращают работать."),
    QStringLiteral("После выхода системы на режим обратной подачи поршней гидроцилиндров открывается камера сгорания ВРД 30. Переключением клапанов, контролирующие расход газогенераторного газа, осуществляется прекращение поступления рабочего тела в камеру ракетного двигателя 29. Вместо этого, газ полностью идет в камеру ВРД 30. Аналогично, обратным ходом поршней гидроцилиндров, открывается ВЗУ 1. В результате забортный воздух начинает поступать через ВЗУ и двигатель функционирует по алгоритму, изложенному в ВВР")
};

std::vector<QString> ground_launch_text = {
    QStringLiteral("ЛА производит взлет в режиме ВРД. Для этого открываются дроссельные клапаны, обеспечивающие подачу гелия из ёмкости 33 (баллон с сжатым гелием), который затем подается на турбины 17, 19, 25, чтобы привести их во вращение."),
    QStringLiteral("После непродолжительной раскрутки соответствующих турбин, водородные ТНА 17-18 и 25-26, а также кислородный ТНА 19-20 выходят на рабочий режим. Одновременно открываются клапаны, осуществляющие доступ компонентов топлива в газогенераторы 7, 11 и 16, куда также подается пусковое горючее из ампул."),
    QStringLiteral("Образовавшийся генераторный газ поступает в водородные ТНА 17-18 и 25-26, кислородный ТНА 19-20. Также генераторный газ поступает на раскрутку подписывающих компрессоров гелия 9, 14."),
    QStringLiteral("Раскрываются клапаны перед камерой ВРД 30."),
    QStringLiteral("После раскрутки подпитывающих компрессоров гелия 9, 14, а также воздушного компрессора 3, двигательная установка выходит на режим запуска, после чего в камеру сгорания 30 подаётся пусковое горючее, топливная смесь воспламеняется и двигатель приходит в полное функционирование.")
};


}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    // Коннекты радио кнопок
    {
        connect(ui->radioButton_ground_launch, &QRadioButton::clicked, this, &MainWindow::choose_ground_lauch);
        connect(ui->radioButton_ARM, &QRadioButton::clicked, this, &MainWindow::choose_ARM);
        connect(ui->radioButton_ARMtoRM, &QRadioButton::clicked, this, &MainWindow::choose_ARMtoRM);
        connect(ui->radioButton_RMtoARM, &QRadioButton::clicked, this, &MainWindow::choose_RMtoARM);
    }

    // Коннекты кнопок вперед-назад
    {
        connect(ui->pushButton_forward, &QPushButton::clicked, this, &MainWindow::show_next);
        connect(ui->pushButton_backward, &QPushButton::clicked, this, &MainWindow::show_prev);
    }

    // Коннект кнопки полной схемы
    {
        connect(ui->pushButton_full_scheme, &QPushButton::clicked, this, &MainWindow::show_full);
    }

    // В самом начале делаем эти кнопки нерабочими
    ui->pushButton_backward->setEnabled(false);
    ui->pushButton_forward->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::choose_ground_lauch()
{
    ui->radioButton_ARM->setChecked(false);
    ui->radioButton_ARMtoRM->setChecked(false);
    ui->radioButton_RMtoARM->setChecked(false);
    ui->radioButton_ground_launch->setChecked(true);
    doInitActions(ground_launch, ground_launch_text);
}

void MainWindow::show_full()
{
    ui->label_image_full_description->setPixmap(QPixmap(QStringLiteral(":/new/prefix1/images/full/full_description.png")));

    ui->pushButton_backward->setEnabled(false);
    ui->pushButton_forward->setEnabled(false);

    ui->radioButton_ARM->setChecked(false);
    ui->radioButton_ARMtoRM->setChecked(false);
    ui->radioButton_RMtoARM->setChecked(false);
    ui->radioButton_ground_launch->setChecked(false);

    ui->label_text_counter->setText(QString{ "1/1" });
    ui->textBrowser_description->setText("");
}

void MainWindow::choose_ARM()
{
    ui->radioButton_ARM->setChecked(true);
    ui->radioButton_ARMtoRM->setChecked(false);
    ui->radioButton_RMtoARM->setChecked(false);
    ui->radioButton_ground_launch->setChecked(false);
    doInitActions(ARM, ARM_text);
}

void MainWindow::choose_ARMtoRM()
{
    ui->radioButton_ARM->setChecked(false);
    ui->radioButton_ARMtoRM->setChecked(true);
    ui->radioButton_RMtoARM->setChecked(false);
    ui->radioButton_ground_launch->setChecked(false);
    doInitActions(ARM_to_RM, ARM_to_RM_text);
}

void MainWindow::choose_RMtoARM()
{
    ui->radioButton_ARM->setChecked(false);
    ui->radioButton_ARMtoRM->setChecked(false);
    ui->radioButton_RMtoARM->setChecked(true);
    ui->radioButton_ground_launch->setChecked(false);
    doInitActions(RM_to_ARM, RM_to_ARM_text);
}

void MainWindow::show_prev()
{
    setCurrentSlide(currentSlide - 1);

    ui->label_image_full_description->setPixmap(QPixmap(m_pVectorOfImages->at(currentSlide)));
    ui->textBrowser_description->setText(m_pVectorOfTexts->at(currentSlide));

    // Первый элемент
    ui->label_text_counter->setText(QString{ QString::number(currentSlide + 1) + "/" + QString::number(m_pVectorOfImages->size())});
}

void MainWindow::show_next()
{
    setCurrentSlide(currentSlide + 1);

    ui->label_image_full_description->setPixmap(QPixmap(m_pVectorOfImages->at(currentSlide)));
    ui->textBrowser_description->setText(m_pVectorOfTexts->at(currentSlide));

    // Первый элемент
    ui->label_text_counter->setText(QString{ QString::number(currentSlide + 1) + "/" + QString::number(m_pVectorOfImages->size())});
}

void MainWindow::doInitActions(const std::vector<QString> &images, const std::vector<QString> &texts)
{
    if (images.empty() || texts.empty())
        return;

    m_pVectorOfImages = &images;
    m_pVectorOfTexts = &texts;

    setCurrentSlide(0);

    ui->label_image_full_description->setPixmap(QPixmap(m_pVectorOfImages->at(currentSlide)));
    ui->textBrowser_description->setText(m_pVectorOfTexts->at(currentSlide));

    // Первый элемент
    ui->label_text_counter->setText(QString{ "1/" + QString::number(images.size())});

}

void MainWindow::setCurrentSlide(int index)
{
    if (index < 0 || index >= static_cast<int>(m_pVectorOfImages->size()))
        return;

    if (index <= 0)
        ui->pushButton_backward->setEnabled(false); // Запрещаем переходить на предыдущий слайд, если он нулевой
    else
        ui->pushButton_backward->setEnabled(true);

    if (index >= (static_cast<int>(m_pVectorOfImages->size()) - 1))
        ui->pushButton_forward->setEnabled(false);
    else
        ui->pushButton_forward->setEnabled(true);

    currentSlide = index;
}
