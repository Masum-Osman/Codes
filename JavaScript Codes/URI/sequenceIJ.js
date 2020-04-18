function solveProblem()
{
    var I = 1;
    for(var J = 60; J >= 0; J = J-5)
    {
        console.log("I="+I+ " J="+J+"\n");
        I = I + 3;
    }
}

solveProblem();