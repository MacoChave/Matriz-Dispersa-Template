#ifndef TADMATRIXNODE_H
#define TADMATRIXNODE_H
#include <QString>

class TADMatrixNode
{
    int column;
    int row;
public:
    TADMatrixNode();
    TADMatrixNode(int _column, int _row);
    ~TADMatrixNode();

    int getColumnValue();
    int getRowValue();
    void setColumnValue(int value);
    void setRowValue(int value);
};

#endif // TADMATRIXNODE_H
