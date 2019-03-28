class Dog{
String name;
	 public static void main (String [ ] args) {


	Dog Dog1 = new Dog ( );
	Dog1.bark();
	Dog1.name = "Bart";



	Dog [ ] myDogs = new Dog [3];


	myDogs[0] = new Dog ( );
	myDogs[1] = new Dog ( );
	myDogs[2] = Dog1;



	myDogs[0].name  = "Fred";
	myDogs[1].name = "Marge";



	System.out.print("last Dog's name is ");
	System.out.println(myDogs[2].name);



	int x = 0;
	while (x < myDogs.length) {

		myDogs[x].bark();
		x = x + 1;
		}
	}

	public void bark() {
	System.out.println(name + " says Ruff!");


	}
}