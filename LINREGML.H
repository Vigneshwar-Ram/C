#ifndef math.h
   #include<math.h>
#endif
int _count,_i,_app;
float _sum1=0,_sum2=0,_g,_m[4],_d,_c=0,_acc,_cou=0;
float linreg( float a[],float b[],int _x){
     for(_i=0;_i<4;_i++){
	    _m[_i]=(b[_i+1]-b[_i])/(a[_i+1]-a[_i]);
	    _sum1=_sum1+b[_i];
	    _sum2=_sum2+a[_i];
	    _app=(_sum1/_sum2);
	   }
	 _d=_m[1];
      for(_i=0;_i<4;_i++){
	     if(_m[_i]==_d){
	    _count++;
		}
	   }
 if(_count>2){
      _g=_d;
      _c=b[2]-(_g)*a[2];
	  }
      else{
	 _g=_app;
	 _c=(_sum1-(_app*_sum2))/5;
	 }

for(_i=0;_i<5;_i++){
       if(b[_i]==(_g*a[_i]+_c)){
	     _cou++;
	 }
      }
   _cou/=5;
   _acc=_cou*100;
printf("Accuracy:  %f\n",_acc);
printf("Loss: %f\n",100-_acc);
 return (_g*_x+_c);
