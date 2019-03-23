class HelloWorld {
public static void main (String  args [])
{

System.out.println("HelloWorld" );


Student student = new Student();

student.setId("111");
student.setName("kulkarni");
student.setAge("24");


System.out.println(student.getId());

System.out.println(student.getName());

System.out.println(student.getAge());

//for book


Book book = new Book();

book.setId("9901");
book.setName("M3");
book.setAuthor("kulkarni");


System.out.println(book.getId());

System.out.println(book.getName());

System.out.println(book.getAuthor());


}




}