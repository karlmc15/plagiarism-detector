#ifndef RESULTFILTERPROXYMODEL_H
#define RESULTFILTERPROXYMODEL_H

#include <QSortFilterProxyModel>
#include <QList>
#include <QString>

class ResultFilterProxyModel : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    explicit ResultFilterProxyModel(QObject *parent = 0);

    void setFilterValue(int value);
    void setRootIndex(QModelIndex root);

    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    QVariant data(const QModelIndex &index, int role) const;

protected:
    bool filterAcceptsRow(int source_row, const QModelIndex &source_parent) const;
    bool filterAcceptsColumn(int source_column, const QModelIndex &source_parent) const;

private:

    int _value;
    QModelIndex rootIndex;
    QStringList headers;

};

#endif // RESULTFILTERPROXYMODEL_H
