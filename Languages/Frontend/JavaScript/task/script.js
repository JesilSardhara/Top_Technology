let display = document.getElementById("display");

// 0 to 9
function number(num) {

    display.value = display.value + num;
    // 12 +
    // "12+12"
}

// +
function add() {

    display.value = display.value + "+";

}

// -
function sub() {

    display.value = display.value + "-";

}

// *
function multiply() {

    display.value = display.value + "*";

}

// /
function divide() {

    display.value = display.value + "/";

}

// C
function clearDisplay() {

    display.value = "";

}

// =
function calculate() {

    let value = display.value;
    
    // "12+15"
    

    if (value.includes("+")) {

        let numbers = value.split("+");
        
        // number[0] = "12"
        // number[1] = "15"
        
        let num1 = parseInt(numbers[0]);
        let num2 = parseInt(numbers[1]);

        display.value = num1 + num2;
        

    }
    else if (value.includes("-")) {

        let numbers = value.split("-");

        let num1 = parseInt(numbers[0]);
        let num2 = parseInt(numbers[1]);

        display.value = num1 - num2;

    }
    else if (value.includes("*")) {

        let numbers = value.split("*");

        let num1 = parseInt(numbers[0]);
        let num2 = parseInt(numbers[1]);

        display.value = num1 * num2;

    }
    else if (value.includes("/")) {

        let numbers = value.split("/");

        let num1 = parseInt(numbers[0]);
        let num2 = parseInt(numbers[1]);

        display.value = num1 / num2;

    }

}