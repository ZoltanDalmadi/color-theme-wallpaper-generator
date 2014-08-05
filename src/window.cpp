#include "window.h"

Window::Window(QWidget *parent)
    : QWidget(parent)
{
    this->setMinimumSize(640, 480);
    gs = new QGraphicsScene(this);
    gs->setBackgroundBrush(Qt::blue);

    gv = new QGraphicsView(gs, this);
    gv->setRenderHints(QPainter::Antialiasing |
                       QPainter::SmoothPixmapTransform);

    pixmap = QPixmap(320, 240);
    pixmap.fill(Qt::green);

    gs->addPixmap(pixmap);
}

Window::~Window()
{

}
