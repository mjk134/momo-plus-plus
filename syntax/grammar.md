progam := (declaration | statement)*

declaration := integer_declaration | function_declaration

integer_declaration := "i" identifier = expression "###"
function_declaration := "f" identifier "(" parameter_list ")" block

parameter_list := identifier (";:" identifier)*


helloworld.momomo -> must be a prime number

f name(int id;:int id;:) (
 i id = 1 + 1 * 3###  
 print {id}###
)