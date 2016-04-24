#Use gdb to fix the program
  issues:

1. In the line 63:   
        `head_ = new Node<T>(markar->value(), marker->next());`   
          It should assign the next address to the head_,the error syntax will generate a new node and return a new address,but not the next address
          So the should be:   
          `head_ = marker->next();`   
 
2. In the line 71:   
         `delete temp;`   
         It should be:   
         `delete marker;`   
 
3. In the line 77:   
         `marker = 0;   
          temp = marker;   
          marker = marker->next();`   
          This code is use to set marker point to next linked list,so it should be:   
          `temp = marker;   
           marker = 0;   
      marker = temp->next();`   