#ifndef TOOLTIP_H
#define TOOLTIP_H

#include <QString>
#include <QList>
#include <QVector>
#include "common/kv.h"

class ToolTip
{
public:
	const QList<KV<QString, QString> > &list() const {return _list;}
	const QVector<QString> &images() const {return _images;}

	bool isEmpty() const
	{
		return _list.isEmpty() && _images.isEmpty();
	}

	bool operator==(const ToolTip &other) const
	{
		return (_list == other._list && _images == other._images);
	}
	bool operator!=(const ToolTip &other) const
	{
		return (_list != other._list || _images != other._images);
	}

	void insert(const QString &key, const QString &value)
	{
		_list.append(KV<QString, QString>(key, value));
	}
	void setImages(const QVector<QString> &images)
	{
		_images = images;
	}

private:
	QList<KV<QString, QString> > _list;
	QVector<QString> _images;
};

#endif // TOOLTIP_H
