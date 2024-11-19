function printPyramid(N) {
    
    const baseWidth = 2 * N - 1;

    for (let i = 1; i <= N; i++) {
        
        let numStars = 2 * i - 1;

        let numSpaces = N - i;

        let line = ' '.repeat(numSpaces) + '*'.repeat(numStars);

        console.log(line);
    }
}

let input = prompt("Enter the value of N to get a pyramid : ");

printPyramid(input);