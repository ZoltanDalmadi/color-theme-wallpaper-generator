#include "window.h"

Window::Window(QWidget *parent)
    : QWidget(parent)
{
    this->setMinimumSize(640, 480);
    gs = new QGraphicsScene(this);
    gs->setBackgroundBrush(QBrush(QColor("#282828")));

    gs->addRect(0, 0, 320, 240, QPen(Qt::NoPen),
                QBrush(QColor("#fdf4c1")));

    gv = new QGraphicsView(gs, this);
    gv->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    gv->setMinimumSize(640, 480);
    gv->setRenderHints(QPainter::Antialiasing |
                       QPainter::SmoothPixmapTransform);
    qDebug() << gs->itemsBoundingRect();
}

Window::~Window()
{

}

void Window::resizeEvent(QResizeEvent *)
{
    if (gs->sceneRect().width() > gv->width() ||
      gs->sceneRect().height() > gv->height()) {
        gv->fitInView(gs->sceneRect(), Qt::KeepAspectRatio);

    }
}
