let display = document.getElementById("display")

function number(num){
    display.value = display.value + num ;
}

function add(){
    display.value = display.value + "+";
}

function sub(){
    display.value = display.value + "-";
}

function multiply(){
    display.value = display.value + "*";
}

function divide(){
    display.value =display.value + "/";
}

function clearDisplay(){
    display.value  = "";
}

function calculate(){
    let value = display.value;

    if(value.includes("+")) {

        let numbers = value.split("+");

        let num1 = parseInt(numbers[0]);
        let num2 = parseInt(numbers[1]);

        display.value = num1 + num2;

    }

    else if (value.includes("-")){  

         let numbers = value.split("-");

        let num1 = parseInt(numbers[0]);
        let num2 = parentInt(numbers[1]);

        display.value = num1 - num2;
    }

    else if (value.includes("*")){  

         let numbers = value.split("*");

        let num1 = parseInt(numbers[0]);
        let num2 = parentInt(numbers[1]);

        display.value = num1 * num2;
    }

    else if (value.includes("/")){  

         let numbers = value.split("/");

        let num1 = parseInt(numbers[0]);
        let num2 = parentInt(numbers[1]);

        display.value = num1 / num2;
    }
}