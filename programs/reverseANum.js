<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Reverse</title>
</head>
<body>
    <input id="input-num" type="number" />
    <button id="reverse-btn">Reverse</button>
    <h1 id="output"></h1>

    <script type="text/javascript">
        const inputNum = document.getElementById("input-num");
        const outputEl = document.getElementById("output");
        const reverseBtn = document.getElementById("reverse-btn");

        reverseBtn.addEventListener("click", () => {
            let num = inputNum.value;
            var revNum = num.split("").reverse().join("");
            outputEl.innerText = revNum;
        });

    </script>
</body>
</html>
