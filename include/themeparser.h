#ifndef THEMEPARSER_H
#define THEMEPARSER_H

#include <QObject>

class ThemeParser : public QObject
{
  Q_OBJECT
public:
  ThemeParser(QString dirname, QObject *parent = 0);
  virtual ~ThemeParser();

  QDir dir;
  QStringList themeNames;
  QList< QList<QColor> > themeColors;

signals:
  void parsingComplete();

};

#endif // THEMEPARSER_H
