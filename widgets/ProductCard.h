#ifndef PRODUCTCARD_H
#define PRODUCTCARD_H

#include <QWidget>
#include "../models/Product.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class ProductCard;
}
QT_END_NAMESPACE

class ProductCard : public QWidget {
    Q_OBJECT

    public :
        explicit ProductCard( QWidget *parent = nullptr );
        ~ProductCard();

        // Display a product on this card
        void setProduct( const Product &product );

    signals : 
        // Signals emitted when Add to card button is clicked
        void addToCartClicked( const Product &product );

    private slots :
        void on_btnAddToCart_clicked();

    private :
        Ui :: ProductCard *ui;

        // Stores the product displayed on this card
        Product currentProduct;
};

#endif 