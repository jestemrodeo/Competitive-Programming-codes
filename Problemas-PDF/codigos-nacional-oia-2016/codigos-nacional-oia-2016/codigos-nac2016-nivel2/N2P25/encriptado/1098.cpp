#include <bits/stdc++.h>

using namespace std;

string encriptado(int clave, int N, string texto)
{
    vector <int> v;
    unsigned int auxint;
    for (int i=0;i<texto.size();i++){
    //char aux=texto[i];
    if (texto[i]!=' '){
    auxint=texto[i]-64;
    v.push_back(auxint);
    }
    //cout<<aux+aux<<endl;
    }
    //for (int i=0;i<texto.size();i++)
    //texto[i].erase()

    //for (int i=0;i<v.size();i++)
    //cout<<v[i]<<endl;
    //cola.pop();

    unsigned int letranum;
    //v.resize(v.size()+1)
    texto.resize(v.size());
    int tam=v.size();
    //cout<<tam<<endl;
    for (int i=0;i<tam;i++){
    if (i%2==0)
    letranum=v[i]+(clave/10);
    else
    letranum=v[i]+(clave%10);

    if (letranum>26)
    letranum=letranum-(letranum-1);
    //cout<<letranum<<endl;
    if (letranum==1){
    texto[i]='A';
    }
    if (letranum==2){
    texto[i]='B';
    }
    if (letranum==3){
    texto[i]='C';
    }
    if (letranum==4){
    texto[i]='D';
    }
    if (letranum==5){
    texto[i]='E';
    }
    if (letranum==6){
    texto[i]='F';
    }
    if (letranum==7){
    texto[i]='G';
    }
    if (letranum==8){
    texto[i]='H';
    }
    if (letranum==9){
    texto[i]='I';
    }
    if (letranum==10){
    texto[i]='J';
    }
    if (letranum==11){
    texto[i]='K';
    }
    if (letranum==12){
    texto[i]='L';
    }
    if (letranum==13){
    texto[i]='M';
    }
    if (letranum==14){
    texto[i]='N';
    }
    if (letranum==15){
    texto[i]='O';
    }
    if (letranum==16){
    texto[i]='P';
    }
    if (letranum==17){
    texto[i]='Q';
    }
    if (letranum==18){
    texto[i]='R';
    }
    if (letranum==19){
    texto[i]='S';
    }
    if (letranum==20){
    texto[i]='T';
    }
    if (letranum==21){
    texto[i]='U';
    }
    if (letranum==22){
    texto[i]='V';
    }
    if (letranum==23){
    texto[i]='W';
    }
    if (letranum==24){
    texto[i]='X';
    }
    if (letranum==25){
    texto[i]='Y';
    }
    if (letranum==26){
    texto[i]='Z';
    }
//cola.pop();
    }





    return texto;
}
/*
if (aux=='A'){
    auxint=aux-64;
    cola.push(auxint);
    }
    else if (aux=='B'){
    auxint=2;
    cola.push(auxint);
    }
    else if (aux=='C'){
    auxint=3;
    cola.push(auxint);
    }
    if (aux=='D'){
    auxint=4;
    cola.push(auxint);
    }
    if (aux=='E'){
    auxint=5;
    cola.push(auxint);
    }
    if (aux=='F'){
    auxint=6;
    cola.push(auxint);
    }
    if (aux=='G'){
    auxint=7;
    cola.push(auxint);
    }
    if (aux=='H'){
    auxint=8;
    cola.push(auxint);
    }
    if (aux=='I'){
    auxint=9;
    cola.push(auxint);
    }
    if (aux=='J'){
    auxint=10;
    cola.push(auxint);
    }
    if (aux=='K'){
    auxint=11;
    cola.push(auxint);
    }
    if (aux=='L'){
    auxint=12;
    cola.push(auxint);
    }
    if (aux=='M'){
    auxint=13;
    cola.push(auxint);
    }
    if (aux=='N'){
    auxint=14;
    cola.push(auxint);
    }
    if (aux=='O'){
    auxint=15;
    cola.push(auxint);
    }
    if (aux=='P'){
    auxint=16;
    cola.push(auxint);
    }
    if (aux=='Q'){
    auxint=17;
    cola.push(auxint);
    }
    if (aux=='R'){
    auxint=18;
    cola.push(auxint);
    }
    if (aux=='S'){
    auxint=19;
    cola.push(auxint);
    }
    if (aux=='T'){
    auxint=20;
    cola.push(auxint);
    }
    if (aux=='U'){
    auxint=21;
    cola.push(auxint);
    }
    if (aux=='V'){
    auxint=22;
    cola.push(auxint);
    }
    if (aux=='W'){
    auxint=23;
    cola.push(auxint);
    }
    if (aux=='X'){
    auxint=24;
    cola.push(auxint);
    }
    if (aux=='Y'){
    auxint=25;
    cola.push(auxint);
    }
    if (aux=='Z'){
    auxint=26;
    cola.push(auxint);
    }*/
