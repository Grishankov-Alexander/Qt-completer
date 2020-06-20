#ifndef FSMODEL_H
#define FSMODEL_H

#include <QFileSystemModel>

class FileSystemModel : public QFileSystemModel
{
public:
    FileSystemModel(QObject *parent = nullptr);
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
};

#endif // FSMODEL_H
