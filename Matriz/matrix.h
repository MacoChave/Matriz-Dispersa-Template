#ifndef MATRIX_H
#define MATRIX_H
#include "Cabeceras/column.h"
#include "Cabeceras/row.h"
#include "TAD/tadcolumn.h"
#include "TAD/tadrow.h"
#include "TAD/tadmatrixnode.h"

template <typename C, typename R, typename T>
class Matrix
{
    Column<C> *columns;
    Row<R> *rows;

    MatrixNode<T> *insertRow();
    void insertColumn();
public:
    Matrix();
    Matrix(Matrix<C,R,T> *matrix);
    ~Matrix();

    void insertar(T data);
    void graficar(QString filename);
    void eliminar(T dato);
    void actualizar(T oldDAta, T newData);
protected:
    Column<C> *getColumn();
    Row<R> *getRow();
    void setColumn(Column<C> *value);
    void setRow(Row<T> *row);
};

#endif // MATRIX_H

template <typename C, typename R, typename T>
Matrix<C,R,T>::Matrix()
{
    columnas = NULL;
    rows = NULL;
}

template <typename C, typename R, typename T>
Matrix<C,R,T>::Matrix(Matrix<C, R, T> *matrix)
{
    columns = matrix->getColumn();
    rows = matrix->getRow();

    matrix->setColumn(NULL);
    matrix->setRow(NULL);
    delete matrix;
    matrix = NULL;
}

template <typename C, typename R, typename T>
Matrix<C,R,T>::~Matrix()
{
    if (columns != NULL)
        delete columns;
    if (rows != NULL)
        delete rows;

    columns = NULL;
    rows = NULL;
}

template <typename C, typename R, typename T>
Column<C> *Matrix<C,R,T>::getColumn()
{
    return columns;
}

template <typename C, typename R, typename T>
Row<R> *Matrix<C,R,T>::getRow()
{
    return rows;
}

template <typename C, typename R, typename T>
void Matrix<C,R,T>::insertar(T data)
{
    C cValue = data->getColumnValue();
    r rValue = data->getRowValue();
    Column<C> *column = NULL;
    Row<R> *row = NULL;

    column = columns->get(cValue);
    if (column == NULL)
        column = columns->insert(cValue);

    row = rows->get(rValue);
    if (row == NULL)
        row = rows->insert(rValue);
}

template <typename C, typename R, typename T>
void Matrix<C,R,T>::graficar(QString filename)
{
}

template <typename C, typename R, typename T>
void Matrix<C,R,T>::eliminar(T dato)
{
}

template <typename C, typename R, typename T>
void Matrix<C,R,T>::actualizar(T oldDAta, T newData)
{
}
