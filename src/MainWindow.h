#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "LoginManager.h"
#include "Cart.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT    // Macro : This enables Qt Meta-Object Compiler ( MOC ).

    public:
        explicit MainWindow( QWidget *parent = nullptr );
        ~MainWindow();

    private slots:
        void on_btnLogin_clicked();
        void on_btnLogout_clicked();
        void updateCart();

    private:
        Ui :: MainWindow *ui;

        LoginManager loginManager;
        Cart cart;
};

#endif