function printFooBarBaz(a, b) {
    
    for (let n = a; n <= b; n++) {
        
      if (n % 5 === 0 && n % 7 === 0) {
        console.log("FooBar");
      }
      else if (n % 5 === 0) {
        console.log("Foo");
      }
      else if (n % 7 === 0) {
        console.log("Bar");
      }
      else {
        console.log("Baz");
      }
    }
  }
  
  function handleInput() {
    const a = parseInt(prompt("Enter the start of the range (a):"));
    const b = parseInt(prompt("Enter the end of the range (b):"));
    
    if (a >= b) {
      console.log("Error: 'a' must be less than 'b'. Please try again.");
    } else {
      printFooBarBaz(a, b);
    }
  }
  
  handleInput();
  