//
// Created by whs31 on 19.10.2023.
//

#pragma once

class QObject;
class QColor;
class QVariant;
class QString;
class QByteArray;
class QAbstractItemModel;
class QAbstractListModel;
class QAbstractProxyModel;
class QAbstractTableModel;
class QBitArray;
class QChar;
class QDataStream;
class QDate;
class QDateTime;
class QDir;
class QFile;
class QFileDevice;
class QFileInfo;
class QJsonArray;
class QJsonObject;
class QJsonDocument;
class QTimer;
class QTime;

class QGeoCoordinate;
class QGeoPath;
class QGeoPolygon;
class QGeoRectangle;
class QGeoShape;

using u64s = quint64;

namespace Qt
{
  using Object = QObject;
  using Color = QColor;
  using Variant = QVariant;
  using String = QString;
  using ByteArray = QByteArray;
  using AbstractItemModel = QAbstractItemModel;
  using AbstractListModel = QAbstractListModel;
  using AbstractProxyModel = QAbstractProxyModel;
  using AbstractTableModel = QAbstractTableModel;
  using BitArray = QBitArray;
  using Char = QChar;
  using DataStream = QDataStream;
  using Date = QDate;
  using DateTime = QDateTime;
  using Directory = QDir;
  using File = QFile;
  using FileDevice = QFileDevice;
  using FileInfo = QFileInfo;
  using JsonArray = QJsonArray;
  using JsonObject = QJsonObject;
  using JsonDocument = QJsonDocument;
  using Timer = QTimer;
  using Time = QTime;

  using GeoCoordinate = QGeoCoordinate;
  using GeoPath = QGeoPath;
  using GeoPolygon = QGeoPolygon;
  using GeoRectangle = QGeoRectangle;
  using GeoShape = QGeoShape;
} // Qt

#if (defined(QT_VERSION_MAJOR) && QT_VERSION_MAJOR <= 5)
  #define as_const qAsConst
#endif

#if !defined(invokable)
  #define invokable Q_INVOKABLE
  #define connectable_slot Q_SLOT
#else
  #error "Somebody defined <invokable>..."
#endif
