#include <QCoreApplication>
#include "Cabeceras/row.h"
#include "TAD/tadrow.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Row<TADRow *> *row = new Row<TADRow *>();
    row->push_back(new TADRow(5));
    row->push_back(new TADRow(10));
    row->push_back(new TADRow(6));
    row->push_back(new TADRow(4));
    row->graph("row");

    delete row;
    row = NULL;
    return a.exec();
}
