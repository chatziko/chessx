/****************************************************************************
*   Copyright (C) 2015 by Jens Nissen jens-chessx@gmx.net                   *
****************************************************************************/

#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "gamex.h"
#include "nag.h"
#include "toolmainwindow.h"

class GameNotationWidget;

namespace Ui {
class GameWindow;
}

class GameWindow : public ToolMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

    GameNotationWidget* browser();

public slots:
    void saveConfig();
    void slotReconfigure();

protected:
    void setupSpacers();

private:
    Ui::GameWindow *ui;
    void setupToolBox();
    void setupNagInToolBox(Nag nag, QAction *action);
    void addActionAtPage(int page, QAction *action);
};

#endif // GAMEWINDOW_H
