#Use gdb to fix the program

issues:   

    1. in the line 63: 
       `head_ = new Node<T>(markar->value(), marker->next());`
       it should assign the next address to the head_,the error syntax will ganerate a new node and return a new address,but not the next address
       so the should be:
       `head_ = marker->next();`

    2. in the line 71: 
       `delete temp;`
       it should be: 
       `delete marker;`

    3. in the line 77:
       `marker = 0;
        temp = marker;
	marker = marker->next();`
	this code is use to set markert point to next linked list,so it should be:
	`tem = marker;
	 marker = 0;
	 marker = temp->next();`

            
