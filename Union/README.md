## Union
A union is a collection of variables of different types, just like a structure. However, with unions, we can only store information in one field at any one time. A union can also be viewed as a veriable type that can contain many different variables *(like a structure)*, but only actually holds one of them at a time *(not like a structure)*. This can save memory if you have a group of data where only one type is used at a time.the size of a union is equal to the size of its largest data member.

### Features of unions 
- It is same as the structure.
- Union is also used to group different data types to store the record under the unique name.
- The *'union'* is the keyword of union. It is used before the declaring the union.
- It is a user-defined data type which is used to store hetrogeneous data under a single unique name.
- In the structure each member has its own memory location whereas members of union has same memory location that is largest in size.
- When a union is declared, the compiler automatically allocates a memory location to hold the largest data type of members in the union.
- Union is used for saving the memory space.