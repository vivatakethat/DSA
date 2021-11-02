import java.util.*;public class Test2 
{  
        public static void main(String[] args) {		
    int[] values = {3,1,6,2,9,0,2,3,9,3,9};		
    sort(values);	
    }      
    public static void sort(int[] vaa){    
        	      	  int temp;    
              	  //Map是用于存放每个数与他的出现次数(数为key,出现次数是value)   
                     	  Map<Integer,Integer> m = new HashMap<Integer,Integer>();    
                           	  int[] arrays = vaa;    	
                                   for(int i=0;i<arrays.length;i++){    		 
                                        for(int j=0;j<arrays.length-i-1;j++){    
                                            			  if(arrays[j]>arrays[j+1]){    	
                                                     temp = arrays[j];    		
                                                    arrays[j] = arrays[j+1];    		
                                                                 arrays[j+1] = temp;    		
                                                                         }    			  
                                                                            	  }    	
                                                                 }  //--<结束排序 
                            for(int i=0;i<arrays.length;i++){  
                                        System.out.print(arrays[i]+"|");  
                                                 }    	 
                                                //计算每个数的重复次数    	 
                                for(int i = 0;i<arrays.length;i++)
                                {  
                      if(!m.containsKey(arrays[i])){   
                           			  m.put(arrays[i], 1);    		 
                                          }    		 
                                           else{    		
                      int a = (Integer)m.get(arrays[i]);    	
                                 a=a+1;    
                     m.remove(arrays[i]);    			 
                 m.put(arrays[i], a);    		 
                  }   //-< `else` 	  
                  }    	 
             System.out.println("长度:"+arrays.length); 
                	  //加到Set里面过滤一下重复数字，TreeSet是为了打印出来按顺序好看点  
                  	  Set<Integer> set = new TreeSet<Integer>();    
                        	  for(int i=0;i<arrays.length;i++){    
                                  		  set.add(arrays[i]);  
                                              	  }    
  for(int i:set){    
 System.out.println(i+",重复次数是："+(m.get(i))); 
  	  } 
             }  
               }


               