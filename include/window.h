#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);
    ~Window();

private:
    QGraphicsScene *gs;
    QGraphicsView *gv;
    QPixmap pixmap;
};

#endif // WINDOW_H
