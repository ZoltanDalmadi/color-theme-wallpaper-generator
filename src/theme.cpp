#include "theme.h"

Theme::Theme(QString themeName, QObject *parent) :
  QObject(parent)
{
}

Theme::~Theme()
{

}

QString Theme::name() const
{
  return _name;
}

QList<QColor> Theme::colors() const
{
  return _colors;
}
