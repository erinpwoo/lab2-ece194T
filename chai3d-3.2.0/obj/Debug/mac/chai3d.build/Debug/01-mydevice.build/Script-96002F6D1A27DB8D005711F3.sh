#!/bin/sh
Rez -append $BUILT_PRODUCTS_DIR/../resources/icons/chai3d.rsrc -o $BUILT_PRODUCTS_DIR/$PRODUCT_NAME
SetFile -a C $BUILT_PRODUCTS_DIR/$PRODUCT_NAME
