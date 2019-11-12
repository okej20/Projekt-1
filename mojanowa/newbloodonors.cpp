#include "newbloodonors.h"

newBlooDonors::newBlooDonors(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant newBlooDonors::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex newBlooDonors::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex newBlooDonors::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int newBlooDonors::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int newBlooDonors::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant newBlooDonors::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
