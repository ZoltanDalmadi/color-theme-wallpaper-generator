#include "imageviewer.h"

ImageViewer::ImageViewer(QGraphicsScene *scene, QWidget *parent) :
    QGraphicsView(scene, parent),
    scene(scene)
{
    this->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    this->setRenderHints(QPainter::Antialiasing |
                       QPainter::SmoothPixmapTransform);
}

ImageViewer::~ImageViewer()
{
}

QSize ImageViewer::sizeHint() const
{
    return QSize(320, 240);
}

void ImageViewer::resizeEvent(QResizeEvent *e)
{
    Q_UNUSED(e);
    if (scene->sceneRect().width() > this->width() ||
      scene->sceneRect().height() > this->height()) {
        this->fitInView(scene->sceneRect(), Qt::KeepAspectRatio);
    }
}
