#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_searchbrowser.h"
#include <windows.h>
#include <tlhelp32.h>
#include <tchar.h>
#include <QMessageBox>
#include "updater.h"

class SearchBrowser : public QMainWindow
{
    Q_OBJECT

public:
    SearchBrowser(QWidget* parent = Q_NULLPTR);

private:
    Ui::SearchBrowserClass ui;
    void createMenus();
    void createActions();

    QMenu* helpMenu;
    QAction* aboutAct;
    QAction* helpAct;

private:
    void about();
    void help();

private:
    void blockInerface(bool);

    int starts();
    int getBrowserProcess(int, bool);
    int runProgram();
    bool openBrowserMessage();
    void errorMessage();
    bool killBrowser(DWORD, UINT);

};
