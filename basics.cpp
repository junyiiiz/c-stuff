// This is a single line comment

/*
This is a multi-line comment 
*/

// To prevent variables, that might or might not be used, causing a warning, we can simply
// add this attribute to them. 
[[maybe_unused]] int x {5}; 


// iostream (Input output)

// Cout (Outputting stuff), << is insertion operator, the stuff we want to output
// Possibile to concatenate 
//  endl (End Line) => Used to create a new line, it is slow, because it flushed
// std::cout << "Hi!" << std::endl;

// This way we can avoid manually flushing, while also create a new line 
// std::cout << "Hi!" << \n" or std::cout << "Hi!\n"