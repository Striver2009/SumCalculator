function calculateSum() {
    let input = document.getElementById('numberInput').value;
    
    // Validate input
    if (!input.trim()) {
        document.getElementById('error').textContent = "Please enter numbers separated by commas.";
        document.getElementById('result').textContent = "";
        return;
    }
    
    // Splitting input string into an array of numbers
    let numbers = input.split(',').map(num => parseFloat(num.trim()));
    
    // Check if all entries are valid numbers
    if (numbers.some(isNaN)) {
        document.getElementById('error').textContent = "Please enter valid numbers separated by commas.";
        document.getElementById('result').textContent = "";
        return;
    }
    
    // Calculating sum of numbers
    let sum = numbers.reduce((acc, curr) => acc + curr, 0);
    
    // Displaying the result
    document.getElementById('error').textContent = "";
    document.getElementById('result').textContent = `Sum: ${sum}`;
}
