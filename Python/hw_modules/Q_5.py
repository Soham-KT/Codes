class inventory:
    item_id = ""
    item_name = ""
    stock_count = 0
    price = 0
    items = {}

    def add_item(self):
        self.item_id = input("Enter item ID: ")
        self.item_name = input("Enter item name: ")
        self.stock_count = int(input("Enter stock count: "))
        self.price = int(input("Enter item price: "))

        inventory.items[self.item_id] = {"Item Name": self.item_name, "Stock Count": self.stock_count, "Price": self.price}

    @staticmethod
    def check_item_details():
        itemID = input("Enter item ID: ")
        for key in inventory.items:
            if key == itemID:
                print(f"Item details: {inventory.items.get(key)}\n")
        else:
            print("Item not found........")

    @staticmethod
    def update_item(num):
        itemID = input("Enter item ID: ")
        for key in inventory.items:
            if key == itemID:
                if num == 1:
                    new = input("Enter new item name: ")
                    inventory.items[key]["Item Name"] = new

                elif num == 2:
                    new = int(input("Enter new item stock count: "))
                    inventory.items[key]["Stock Count"] = new

                else:
                    new = int(input("Enter new item price: "))
                    inventory.items[key]["Price"] = new


if __name__ == "__main__":
    inv = inventory()
    x = True
    while x:
        ch = int(input("1) Add new Item\n2) Check Item Detail\n3) Update item\n4) Exit\nEnter your choice: "))
        if ch == 1:
            inv.add_item()
            print("Item added successfully........\n")

        elif ch == 2:
            inv.check_item_details()

        elif ch == 3:
            ch = int(input("Enter which part you want to update 1)Name 2)Stock Number 3)Price: "))
            if 3 < ch < 1:
                print("Enter valid input........\n")
            else:
                inv.update_item(ch)
                print("Item updated successfully........\n")

        elif ch == 4:
            break

        else:
            print("Enter valid choice........\n")
