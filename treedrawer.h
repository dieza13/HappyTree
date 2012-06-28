#ifndef TREEDRAWER_H
#define TREEDRAWER_H
#include "QColor"
#include "QGraphicsView"

class TreeDrawer
{
private:
    int childCount;
    int levelHeight;
    int levelCount;
    int lineWidth;
    QColor color;
    bool curve;
private:
    void drawLine(int x1, int y1, int x2, int y2, QGraphicsScene *graphScen);
    void drawTree(QGraphicsScene * scene, int startX, int startY, int levelWidth, int currentLevel);
    void drawCurveLine(int x1, int y1, int x2, int y2, QGraphicsScene *graphScen);

public:
    TreeDrawer();
    ////
    QGraphicsScene * getDrawedScene(int childCount, int levelCount, int lineWidth, QColor color,  int height, int width, bool startFromUp, bool curve, QGraphicsScene * scene);

};

#endif // TREEDRAWER_H
