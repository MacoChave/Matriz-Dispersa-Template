QT += core
QT -= gui

CONFIG += c++11

TARGET = SparseMatrixTemplate
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    TAD/tadrow.cpp \
    TAD/tadcolumn.cpp \
    TAD/tadmatrixnode.cpp

HEADERS += \
    List/list.h \
    List/node.h \
    Cabeceras/row.h \
    Cabeceras/column.h \
    TAD/tadrow.h \
    TAD/tadcolumn.h \
    Matriz/matrixnode.h \
    Matriz/matrix.h \
    TAD/tadmatrixnode.h
