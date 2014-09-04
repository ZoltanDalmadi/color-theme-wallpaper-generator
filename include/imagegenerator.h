#ifndef IMAGEGENERATOR_H
#define IMAGEGENERATOR_H

#include <QObject>

class ImageGenerator : public QObject
{
  Q_OBJECT
public:
  ImageGenerator(QObject *parent = 0);
  virtual ~ImageGenerator();

signals:
  void generationComplete();

public slots:
  void generateImage();

private:
  QPixmap pixmap;

};

#endif // IMAGEGENERATOR_H
