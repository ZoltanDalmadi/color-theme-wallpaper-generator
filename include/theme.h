#ifndef THEME_H
#define THEME_H

#include <QObject>
#include <QString>
#include <QList>
#include <QColor>

class Theme : public QObject
{
  Q_OBJECT
public:
  Theme(QString themeName, QObject *parent = 0);
  virtual ~Theme();

  QString name() const;
  QList<QColor> colors() const;

private:
  QString _name;
  QList<QColor> _colors;
};

#endif // THEME_H
