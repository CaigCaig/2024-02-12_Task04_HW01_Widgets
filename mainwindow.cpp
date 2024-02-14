#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->rb_up->setChecked(true);
    ui->cB_list->addItem("Текстовый");
    ui->cB_list->addItem("Целочисленный");
    ui->cB_list->addItem("Дробный");
    ui->cB_list->addItem("Денежный");
    ui->cB_list->addItem("Время");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pB_nextStep_toggled(bool checked)
{
    int value = ui->prB_progress->value();
    if (value >= 10)
    {
        ui->prB_progress->setValue(0);
    }
    else
    {
        ui->prB_progress->setValue(++value);
    }
}

/*
Инструкция к заданию
Создать новый проект — приложение Qt Widget.
Добавить виджеты на форму главного окна.
Изменить свойства виджетов в конструкторе класса MainWindow.
Для изменения метода обработчика кнопки необходимо нажать в форме по ней правой кнопкой мыши и выбрать «Перейти к слоту». В этот метод программа будет попадать при нажатии на кнопку.
Задание 1
Создать форму, которая включает минимум:
1 GroupBox с двумя RadioButton,
1 выпадающий список,
1 кнопку,
1 прогресс-бар.
В конструкторе MainWindow необходимо:
задать имена обеим RadioButton, которые отображаются на форме;
добавить несколько элементов в выпадающий список, но не больше 10;
изменить надпись на кнопке;
изменить тип кнопки на Toggle;
установить начальные значения прогресс-бара: минимум 0, максимум 10, текущее 0.
По каждому нажатию на кнопку прогресс-бар должен увеличиваться на 10%. При увеличении более чем на 100% прогресс-бар должен сбрасываться на 0.
*/


