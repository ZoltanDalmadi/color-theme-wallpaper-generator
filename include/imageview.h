#ifndef IMAGEVIEW_H
#define IMAGEVIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>

class ImageView : public QGraphicsView
{
    Q_OBJECT
public:
    ImageView(QGraphicsScene *scene, QWidget *parent = 0);
    virtual ~ImageView();
    virtual QSize sizeHint() const;

protected:
    virtual void resizeEvent(QResizeEvent *e);

private:
    QGraphicsScene *scene;

};

#endif // IMAGEVIEW_H
