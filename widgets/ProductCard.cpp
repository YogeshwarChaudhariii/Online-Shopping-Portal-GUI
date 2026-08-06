// #include "ProductCard.h"
// #include "ui_ProductCard.h"
#include "ProductCard.h"
#include "ui_ProductCard.h"

ProductCard :: ProductCard( QWidget *parent )
    : QWidget( parent ),
    ui( new Ui :: ProductCard ) {
        ui->setupUi( this );
}

ProductCard ::
~ProductCard() {
    delete ui;
}

void ProductCard ::
setProduct( const Product &product ) {
    // Save the product inside this card
    currentProduct = product;

    // Display this information
    ui->lblName->setText( product.name );
    ui->lblCategory->setText( product.category );
    ui->lblPrice->setText( "Rs." + QString :: number( product.price ));
}

void ProductCard ::
on_btnAddToCart_clicked() {
    emit addToCartClicked( currentProduct );
}