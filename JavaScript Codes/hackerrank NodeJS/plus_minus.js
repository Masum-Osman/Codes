'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

// Complete the plusMinus function below.
function plusMinus(arr) {

    var arrLength = arr.length;
    var zeroes = 0;
    var negetives = 0;
    var positives = 0;

    for (var I = 0; I < arrLength; I++)
    {
        if(arr[I] == 0)
        {
            zeroes++;
        }

        else if(arr[I] > 0)
        {
            positives++;
        }

        else 
        {
            negetives++;
        }
    }

    var zeroRatio = zeroes/arrLength;
    var positiveRatio = positives/arrLength;
    var negetiveRatio = negetives/arrLength;

    zeroRatio = zeroRatio.toFixed(6);
    positiveRatio = positiveRatio.toFixed(6);
    negetiveRatio = negetiveRatio.toFixed(6);

    console.log(positiveRatio);
    console.log(negetiveRatio);
    console.log(zeroRatio);
}

function main() {
    const n = parseInt(readLine(), 10);

    const arr = readLine().split(' ').map(arrTemp => parseInt(arrTemp, 10));

    plusMinus(arr);
}
