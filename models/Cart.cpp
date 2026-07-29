#include "Cart.h"

void Cart :: addProduct( const Product &product ) {
    products.append( product );
}

QVector<Product> Cart :: getProducts() const {
    return products;
}

double Cart :: getTotal() const {
    double total = 0.0;

    for ( const Product &product : products ) {
        total += product.price;
    }

    return total;
}