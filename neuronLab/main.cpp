#include "neuronlab.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    neuronLab w;
    w.show();

    return a.exec();
}
