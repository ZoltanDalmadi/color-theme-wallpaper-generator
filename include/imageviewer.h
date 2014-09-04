#ifndef IMAGEVIEW_H
#define IMAGEVIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>

class ImageViewer : public QGraphicsView
{
  Q_OBJECT
public:
  ImageViewer(QGraphicsScene *scene, QWidget *parent = 0);
  virtual ~ImageViewer();
  virtual QSize sizeHint() const;

protected:
  virtual void resizeEvent(QResizeEvent *e);

private:
  QGraphicsScene *scene;

};

#endif // IMAGEVIEW_H
