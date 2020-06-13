function sum ()
{
    var sum = 0;

    for (var i = 100; i <= 200; i++) {
		if (i%13 != 0) {
            if(i < 9999 && i > -9999)
            {
                sum = sum+i;
            }
			
		}
	}
    console.log("hi man");
    
	console.log(sum)
}

sum();