#include <QApplication>
#include <QDebug>
#include "window.h"
#include "theme.h"
#include "themeparser.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  ThemeParser *tp = new ThemeParser("themes", &a);

  for (auto &i : tp->themes) {
    qDebug() << i.name;
    for (auto &j : i._colors) {
      qDebug() << j.name();
    }
  }

  Window w;
  w.show();

  return a.exec();
}
