#ifndef CART_H
#define CART_H

#include <QVector>
#include "Product.h"

class Cart {
    public:
        void addProduct( const Product &product);

        QVector<Product> getProducts() const;

        double getTotal() const;

    private:
        QVector<Product> products;
};

#endif