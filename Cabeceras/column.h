#ifndef COLUMN_H
#define COLUMN_H
#include <QFile>
#include <QTextStream>
#include "List/list.h"

template <typename T>
class Column : public List<T>
{
public:
    Column() {}
    Column(List<T> *value);
    ~Column() {}

    void graph(QString filename);
};

template <typename T>
Column<T>::Column(List<T> *value) : List<T>(value)
{}

void Column<T>::graph(QString filename)
{
    QFile file(filename + ".dot");

    if (file.open(QFile::WriteOnly | QFile::Text))
    {
        Node<T> *temporal = this->first();
        QTextStream out(&file);

        out << "digraph " + filename + " {\n";
        out << "\trankdir = LR;\n";
        out << "\tnode [shape = record]\n";
        flush(out);

        while (temporal != NULL)
        {
            out << "\t" << temporal->getNameNode();
            out << " [label = \"" << temporal->getTextNode() << "\"];\n";
            flush(out);

            if (temporal->getPreview() != NULL)
            {
                out << "\t" << temporal->getNameNode();
                out << " -> " << temporal->getPreview()->getNameNode() << ";\n";
                flush(out);
            }

            if (temporal->getNext() != NULL)
            {
                out << "\t" << temporal->getNameNode();
                out << " -> " << temporal->getNext()->getNameNode() << ";\n";
                flush(out);
            }

            temporal = temporal->getNext();
        }

        out << "}";
        flush(out);

        file.close();
        QString cmd("dot -Tpng ");
        cmd.append(filename + ".dot ");
        cmd.append("-o " + filename + ".png");
        system(cmd.toLatin1().data());
    }
}


#endif // COLUMN_H
