// Clear the display
function clearDisplay() {
    document.getElementById('result').value = '';
}

// Delete last entered character
function deleteLast() {
    let currentDisplay = document.getElementById('result').value;
    document.getElementById('result').value = currentDisplay.slice(0, -1);
}

// Append number or operator to the display
function appendToDisplay(value) {
    let currentDisplay = document.getElementById('result').value;
    document.getElementById('result').value = currentDisplay + value;
}

// Calculate the result
function calculateResult() {
    let currentDisplay = document.getElementById('result').value;
    try {
        document.getElementById('result').value = eval(currentDisplay);
    } catch (error) {
        document.getElementById('result').value = 'Error';
    }
}
