#include "window.h"

Window::Window(QWidget *parent)
  : QWidget(parent),
    gs(new QGraphicsScene(this)),
    iv(new ImageViewer(gs, this)),
    colorThemeLabel(new QLabel("Color Theme:", this)),
    colorThemeCB(new QComboBox(this)),
    shapeLabel(new QLabel("Shape:", this)),
    shapeCB(new QComboBox(this)),
    cellSizeLabel(new QLabel("Cell size:", this)),
    cellSizeSB(new QSpinBox(this)),
    cellGapLabel(new QLabel("Cell gap:", this)),
    cellGapSB(new QSpinBox(this)),
    seedLabel(new QLabel("Random seed:", this)),
    seedSB(new QSpinBox(this)),
    generateButton(new QPushButton("Generate", this)),
    gridLayout(new QGridLayout()),
    hboxLayout(new QHBoxLayout())
{
  this->setLayout(hboxLayout);

  hboxLayout->addWidget(iv);
  hboxLayout->addLayout(gridLayout);

  gridLayout->setSpacing(20);
  gridLayout->setContentsMargins(20, 0, 0, 20);

  gridLayout->addWidget(colorThemeLabel, 0, 0);
  gridLayout->addWidget(colorThemeCB, 0, 1);

  gridLayout->addWidget(shapeLabel, 1, 0);
  gridLayout->addWidget(shapeCB, 1, 1);
  shapeCB->addItem("Square");
  shapeCB->addItem("Circle");

  gridLayout->addWidget(cellSizeLabel, 2, 0);
  gridLayout->addWidget(cellSizeSB, 2, 1);

  gridLayout->addWidget(cellGapLabel, 3, 0);
  gridLayout->addWidget(cellGapSB, 3, 1);

  gridLayout->addWidget(seedLabel, 4, 0);
  gridLayout->addWidget(seedSB, 4, 1);

  gridLayout->addWidget(generateButton, 5, 0, 1, 2);

  gridLayout->setRowStretch(6, 1);
}

Window::~Window()
{
}

QSize Window::sizeHint() const
{
  return QSize(640, 480);
}
