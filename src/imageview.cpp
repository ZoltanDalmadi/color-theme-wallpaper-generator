#include "imageview.h"

ImageView::ImageView(QGraphicsScene *scene, QWidget *parent) :
    QGraphicsView(scene, parent),
    scene(scene)
{
    this->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    this->setRenderHints(QPainter::Antialiasing |
                       QPainter::SmoothPixmapTransform);
}

ImageView::~ImageView()
{
}

QSize ImageView::sizeHint() const
{
    return QSize(320, 240);
}

void ImageView::resizeEvent(QResizeEvent *e)
{
    Q_UNUSED(e);
    if (scene->sceneRect().width() > this->width() ||
      scene->sceneRect().height() > this->height()) {
        this->fitInView(scene->sceneRect(), Qt::KeepAspectRatio);
    }
}
