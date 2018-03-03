#ifndef TADCOLUMN_H
#define TADCOLUMN_H
#include <QString>

class TADColumn
{
    int i;
public:
    TADColumn();
    TADColumn(int _i);
    ~TADColumn();

    int getI();
    int compare(TADColumn *column);
    QString toString();
    QString getNodeName();
};

#endif // TADCOLUMN_H
