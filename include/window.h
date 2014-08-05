#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QPixmap>
#include <QPainter>
#include <QDebug>

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);
    ~Window();

private:
    QGraphicsScene *gs;
    QGraphicsView *gv;
//    QPixmap pixmap;
protected:
    virtual void resizeEvent(QResizeEvent *);
};

#endif // WINDOW_H
