#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTableWidgetItem>

#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "../widgets/ProductCard.h"

MainWindow :: MainWindow( QWidget *parent ) 
            : QMainWindow( parent )
            , ui( new Ui :: MainWindow ) {
    ui->setupUi( this );

    

    setWindowTitle("Online Shopping Portal");

    connect( ui->btnLogin_4, &QPushButton :: clicked,
             this, &MainWindow :: on_btnLogin_clicked );

    ui->listCategories->addItem("Electronics");
    ui->listCategories->addItem("Clothing");
    ui->listCategories->addItem("Books");
    ui->listCategories->addItem("Groceries");
}

void MainWindow :: on_btnLogin_clicked() {

    QFile file("../data/users.txt");
      
    QString username = ui->txtUsername->text().trimmed();
    QString password = ui->txtPassword->text();

    // if ( username.isEmpty() ) {
    //     QMessageBox :: warning( this,
    //                             "Login",
    //                             "Please enter username." );
    //     return;
    // }

    // if ( password.isEmpty() ) {
    //     QMessageBox :: warning( this,
    //                             "Login",
    //                             "Please enter password." );
    //     return;
    // }

    if ( loginManager.authenticate( username, password )) {

        // Set Welcome Message
        ui->lblWelcome->setText("Welcome, " + username);

        ui->stackedWidget->setCurrentWidget( ui->pageDashboard );
    }
    else {
        QMessageBox :: warning( this,
                                "Login Failed",
                                "Invalid username or password" );
    }
}

void MainWindow :: on_btnLogout_clicked() {
    ui->txtUsername->clear();
    ui->txtPassword->clear();

    ui->stackedWidget->setCurrentWidget( ui->pageLogin );
}

void MainWindow :: updateCart() {
    ui->tableCart->clearContents();

    QVector<Product> products = cart.getProducts();

    ui->tableCart->setRowCount( products.size() );

    for ( int i = 0; i < products.size(); i++) {
        ui->tableCart->setItem( i,  
                                0,
                                new QTableWidgetItem( products[i].name ));

        ui->tableCart->setItem( i,
                                1,
                                new QTableWidgetItem ( QString :: number( products[i].price )));
    }

    ui->lblTotal->setText(
        "Total : Rs. " + QString :: number( cart.getTotal() )
    );
}

void MainWindow ::
loadProducts() {
    Product laptop;
    laptop.name="Laptop";
    laptop.category="Electronics";
    laptop.price=50000;

    // ---------- Product 2 ----------
    Product phone;
    phone.name = "Phone";
    phone.category = "Electronics";
    phone.price = 25000;

    // ---------- Product 3 ----------
    Product keyboard;
    keyboard.name = "Keyboard";
    keyboard.category = "Accessories";
    keyboard.price = 1500;

    // ---------- Product 4 ----------
    Product mouse;
    mouse.name = "Mouse";
    mouse.category = "Accessories";
    mouse.price = 700;

    QVector<Product> products;

    products.append( laptop );
    products.append( phone );
    products.append( keyboard );
    products.append( mouse );

    // std :: vector<Product> products = Product :: loadProducts();

    for ( const Product &product : products ) {
        ProductCard *card = new ProductCard();

        card->setProduct( product );

        connect( card,
                &ProductCard :: addToCartClicked,
                this,
            &MainWindow :: addProductToCart );

        ui->productsLayout->addWidget( card );
    }
}

void MainWindow ::
addProductToCart( const Product &product ) {
    cart.addProduct( product );

    updateCart();
}

MainWindow :: ~MainWindow() {
    delete ui;
}