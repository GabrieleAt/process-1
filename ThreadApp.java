package threadapp;

class MyThread extends Thread{
    @Override
    public void run(){
        for(int c = 0; c < 10; c++){
            try{
                System.out.println(this.getName() + " Value: "+ c);
                Thread.sleep(100);
            } catch(Exception e){}
        }
    }
}

public class ThreadApp {
    public static void main(String[] args) {
        MyThread t1= new MyThread();
        t1.setName("Thread One");
        t1.start();
        
        MyThread t2= new MyThread();
        t2.setName("Thread Two");
        t2.start();
        
    }
    
}
