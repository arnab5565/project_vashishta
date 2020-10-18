
import java.applet.Applet;
import java.awt.*;
public class Demo extends Applet{

    public void sort(int[] arr){

        boolean swap=true;
        for(int i=0;i<arr.length-1;i++){
            swap=false;
            for(int j=0;j<arr.length-1;j++){
                if(arr[j]>arr[j+1]){


                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                    swap=true;
                }
            }

            if(swap==false){
                break;

            }
        }


    }
    public void print(int[] arr){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
            
        }
    }


    public static void main(String[] args){

        int[] arr={3,5,2,9,4};
    }
}