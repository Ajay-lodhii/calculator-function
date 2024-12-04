/* General Reset */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    background-color: #fefeff;
    font-family: 'Arial', sans-serif;
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
}

/* Calculator Container */
.calculator {
    background-color: #564656;
    border-radius: 15px;
    box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
    padding: 40px;
    width: 500px;
}

.display {
    background-color: #121111;
    padding: 20px;
    border-radius: 10px;
    margin-bottom: 20px;
    text-align: right;
}

#result {
    width: 100%;
    font-size: 30px;
    color: white;
    background-color: #333;
    border: none;
    outline: none;
    text-align: right;
}

.buttons {
    display: grid;
    grid-template-columns: repeat(4, 1fr);
    gap: 10px;
}

.button {
    background-color: #f9f9f9;
    color: rgb(13, 13, 13);
    font-size: 20px;
    padding: 20px;
    border-radius: 10px;
    border: none;
    cursor: pointer;
    transition: background-color 0.3s;
}

.button:hover {
    background-color: #555;
}

.equal {
    background-color: #f39c12;
    grid-column: span 2;
}

.equal:hover {
    background-color: #e67e22;
}

button:active {
    transform: scale(0.95);
}
