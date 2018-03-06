#include "tadmatrixnode.h"

TADMatrixNode::TADMatrixNode()
{
    column = row = 0;
}

TADMatrixNode::TADMatrixNode(int _column, int _row)
{
    column = _column;
    row = _row;
}

TADMatrixNode::~TADMatrixNode()
{
    column = row = 0;
}

int TADMatrixNode::getColumnValue()
{
    return column;
}

int TADMatrixNode::getRowValue()
{
    return row;
}

void TADMatrixNode::setColumnValue(int value)
{
    column = value;
}

void TADMatrixNode::setRowValue(int value)
{
    row = value;
}
