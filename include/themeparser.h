#ifndef THEMEPARSER_H
#define THEMEPARSER_H

#include <QObject>
#include <QStringList>
#include <QList>
#include "theme.h"

class ThemeParser : public QObject
{
  Q_OBJECT
public:
  ThemeParser(QString dirname, QObject *parent = 0);
  virtual ~ThemeParser();

  QDir dir;
  QList<Theme> themes;

signals:
  void parsingComplete();

public slots:
  void parseThemes();

};

#endif // THEMEPARSER_H
