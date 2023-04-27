#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// default constructor... name of class
ItemToPurchase::ItemToPurchase() { 
   itemName = "none";
   itemPrice = 0; 
   itemQuantity = 0;
}
//accessors 
string ItemToPurchase::GetName() const { 
   return itemName;
}

int ItemToPurchase::GetPrice() const { 
   return itemPrice; 
}

int ItemToPurchase::GetQuantity() const { 
   return itemQuantity;
}

// mutators 
void ItemToPurchase::SetName(string name) { 
   itemName = name; 
}

void ItemToPurchase::SetPrice(int price) { 
   itemPrice = price;   
} 

void ItemToPurchase::SetQuantity(int qty) { 
   itemQuantity = qty;
}