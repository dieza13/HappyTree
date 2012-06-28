#include "treedrawer.h"

TreeDrawer::TreeDrawer()
{
}

QGraphicsScene * TreeDrawer::getDrawedScene(int childCount, int levelCount, int lineWidth, QColor color, int height, int width, bool startFromUp, bool curve, QGraphicsScene *scene)
{
    this->childCount = childCount;
    this->levelCount = levelCount;
    this->color = color;
    this->lineWidth = lineWidth;
    this->curve = curve;
    levelHeight = height / levelCount - 10;
    if (!startFromUp) {
        levelHeight *= -1;
        drawTree(scene, 0, height, width, 0);
    } else drawTree(scene, 0, 3, width, 0);
}


void TreeDrawer::drawTree(QGraphicsScene * scene, int startX, int startY, int levelWidth, int currentLevel)
{
    for (int i = 1; i <= childCount; i++) {

        int level = currentLevel;
        int newWidth = levelWidth / childCount;
        int newX = (startX - levelWidth / 2) + ((i - 1) * newWidth) + newWidth / 2 ;
        int newY = startY + levelHeight;
        level ++;
        if (curve) drawLine(startX , startY, newX, newY, scene);
        else drawCurveLine(startX , startY, newX, newY, scene);
        if (level != levelCount) drawTree(scene, newX, newY, newWidth, level);
    }

}

void TreeDrawer::drawLine(int x1, int y1, int x2, int y2, QGraphicsScene * graphScen)
{
    graphScen->addLine(x2, y2, x1 , y1, QPen(QBrush(QColor(color)),lineWidth));
}

void TreeDrawer::drawCurveLine(int x1, int y1, int x2, int y2, QGraphicsScene * graphScen)
{
    graphScen->addLine(x1, y1, x2 , y1, QPen(QBrush(color),lineWidth));
    graphScen->addLine(x2, y1, x2 , y2, QPen(QBrush(color),lineWidth));
}
