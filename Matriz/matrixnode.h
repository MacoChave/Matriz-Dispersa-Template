#ifndef MATRIXNODE_H
#define MATRIXNODE_H
#include <QString>

template <typename T>
class MatrixNode
{
    T data;
    MatrixNode<T> *top;
    MatrixNode<T> *bottom;
    MatrixNode<T> *left;
    MatrixNode<T> *right;
    MatrixNode<T> *front;
    MatrixNode<T> *back;
public:
    MatrixNode();
    MatrixNode(T value);
    ~MatrixNode();
    T getData();
    void setData(T value);
    MatrixNode<T> *getTop();
    void setTop(MatrixNode<T> *value);
    MatrixNode<T> *getBottom();
    void setBottom(MatrixNode<T> *value);
    MatrixNode<T> *getLeft();
    void setLeft(MatrixNode<T> *value);
    MatrixNode<T> *getRight();
    void setRight(MatrixNode<T> *value);
    MatrixNode<T> *getFront();
    void setFront(MatrixNode<T> *value);
    MatrixNode<T> *getBack();
    void setBack(MatrixNode<T> *value);
    QString toString();
    QString getNodeName();
};

#endif // MATRIXNODE_H

template <typename T>
MatrixNode<T>::MatrixNode()
{
    data = NULL;
    top = NULL;
    bottom = NULL;
    left = NULL;
    right = NULL;
    front = NULL;
    back = NULL;
}

template <typename T>
MatrixNode<T>::MatrixNode(T value)
{
    data = value;
    top = NULL;
    bottom = NULL;
    left = NULL;
    right = NULL;
    front = NULL;
    back = NULL;
}

template <typename T>
MatrixNode<T>::~MatrixNode()
{
    if (data != NULL)
        delete data;

    data = NULL;
    top = NULL;
    bottom = NULL;
    left = NULL;
    right = NULL;
    front = NULL;
    back = NULL;
}

template <typename T>
T MatrixNode<T>::getData()
{
    return data;
}

template <typename T>
void MatrixNode<T>::setData(T value)
{
    data = value;
}

template <typename T>
MatrixNode<T> *MatrixNode<T>::getTop()
{
    return top;
}

template <typename T>
void MatrixNode<T>::setTop(MatrixNode<T> *value)
{
    top = value;
}

template <typename T>
MatrixNode<T> *MatrixNode<T>::getBottom()
{
    return bottom;
}

template <typename T>
void MatrixNode<T>::setBottom(MatrixNode<T> *value)
{
    bottom = value;
}

template <typename T>
MatrixNode<T> *MatrixNode<T>::getLeft()
{
    return left;
}

template <typename T>
void MatrixNode<T>::setLeft(MatrixNode<T> *value)
{
    left = value;
}

template <typename T>
MatrixNode<T> *MatrixNode<T>::getRight()
{
    return right;
}

template <typename T>
void MatrixNode<T>::setRight(MatrixNode<T> *value)
{
    right = value;
}

template <typename T>
MatrixNode<T> *MatrixNode<T>::getFront()
{
    return front;
}

template <typename T>
void MatrixNode<T>::setFront(MatrixNode<T> *value)
{
    front = value;
}

template <typename T>
MatrixNode<T> *MatrixNode<T>::getBack()
{
    return back;
}

template <typename T>
void MatrixNode<T>::setBack(MatrixNode<T> *value)
{
    back = value;
}

template <typename T>
QString MatrixNode<T>::toString()
{
    return data->toString();
}

template <typename T>
QString MatrixNode<T>::getNodeName()
{
    return data->getNodeName();
}
