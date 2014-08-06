#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QDebug>

#include <QLabel>
#include <QPushButton>
#include <QComboBox>
#include <QSpinBox>

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>

#include "imageview.h"

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);
    virtual ~Window();
    virtual QSize sizeHint() const;

private:
    QGraphicsScene *gs;
    ImageView *iv;

    QLabel *colorThemeLabel;
    QComboBox *colorThemeCB;

    QLabel *shapeLabel;
    QComboBox *shapeCB;

    QLabel *cellSizeLabel;
    QSpinBox *cellSizeSB;

    QLabel *cellGapLabel;
    QSpinBox *cellGapSB;

    QLabel *seedLabel;
    QSpinBox *seedSB;

    QPushButton *generateButton;

    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
};

#endif // WINDOW_H
