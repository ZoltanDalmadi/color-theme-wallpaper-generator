#ifndef THEME_H
#define THEME_H

#include <QString>
#include <QList>
#include <QColor>

class Theme
{
public:
  Theme(QString themeName);
  virtual ~Theme();

  QString name;
  QList<QColor> _colors;
};

#endif // THEME_H
