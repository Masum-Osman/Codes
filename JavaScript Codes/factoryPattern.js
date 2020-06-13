function createPerson(firstName, lastName)
{
    var person = {
        firstName : firstName,
        lastName : lastName,
        greet : function(name) {
            return "Hello "+ name;
        }
    };

    return person;
}

function createPerson2(firstName, lastName)
{
    var person = {
        get firstName() 
        {
            return firstName;
        },
        get lastName()
        {
            return lastName;
        },
        greet : function(name) {
            return "Hello "+ name + ". My name is "+ this.firstName;
        }
    };

    return person;
}

var p1 = createPerson2("Papa", "John");
var p2 = createPerson("Jeo", "Baiden");

console.log(p1.greet("Billy"));
console.log(p2.lastName);