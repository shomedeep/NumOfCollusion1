#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

float Abs(float x){
    if(x>=0){
        return x;
    }
    return x*(-1);
}

float approx(float vel){
    if(Abs(vel)<0.001){
        return 0.0;
    }
    else{
        return vel;
    }
}

int numColl(long long int m1,long long int m2, float vel1, float vel2,long long int count){
    float newVel1=approx(vel1), newVel2=approx(vel2);
    if((newVel1*newVel2)>0){
        if(newVel1>0){
            if(newVel1<=newVel2){
                return count;
            }
            else{
                count++;
                newVel1=(2*m2*newVel2)/(m1+m2);
                newVel2=((m2-m1)*newVel2)/(m2+m1);
                return numColl(m1, m2, newVel1, newVel2, count);
            }
        }
        else{
            if(newVel1<newVel2){
                count++;
                newVel1*=(-1);
                return numColl(m1, m2, newVel1, newVel2, count);
            }
            if(newVel1>newVel2){
                count++;
                newVel1=(2*m2*newVel2)/(m1+m2);
                newVel2=((m2-m1)*newVel2)/(m2+m1);
                return numColl(m1, m2, newVel1, newVel2, count);
            }
        }
    }
    else if((newVel1*newVel2)<0){
        if(newVel1>0){
            count++;
            newVel1=(2*m2*newVel2)/(m1+m2);
            newVel2=((m2-m1)*newVel2)/(m2+m1);
            return numColl(m1, m2, newVel1, newVel2, count);
        }
        else{
            count++;
            newVel1*=(-1);
            return numColl(m1, m2, newVel1, newVel2, count);
        }
    }
    else{
        if((newVel1==0) && (newVel2!=0)){
            if(newVel2<0){
                count++;
                newVel1=(2*m2*newVel2)/(m1+m2);
                newVel2=((m2-m1)*newVel2)/(m2+m1);
                return numColl(m1, m2, newVel1, newVel2, count);
            }
            else{
                return count;
            }
        }
        else if((newVel1!=0) && (newVel2==0)){
            if(newVel1<0){
                count++;
                newVel1*=(-1);
                return numColl(m1, m2, newVel1, newVel2, count);
            }
            else{
                count++;
                newVel1=(2*m2*newVel2)/(m1+m2);
                newVel2=((m2-m1)*newVel2)/(m2+m1);
                return numColl(m1, m2, newVel1, newVel2, count);
            }
        }
        else{
            return count;
        }
    }
}

int main(){
    int m1, j;
    long int m2;
    float vel2;
    cout<<"enter the mass of first particle: "<<endl;
    cin>>m1;
    int i;
    long long int totalColl;
    for(i=0;i<5;i++){
        cout<<"enter the mass of second particle: "<<endl;
        cin>>m2;
        cout<<"enter the velocity of m2: "<<endl;
        cin>>vel2;
        cout<<"simulation of number of collisions: "<<endl;
        totalColl=numColl(m1, m2, 0, vel2, 0);
        for(j=1;j<6;j++){
            cout<<"simulation"<<j<<": "<<int((double)j*totalColl/5)<<endl;
        }
        cout<<endl;
    }
    return 0;
}
