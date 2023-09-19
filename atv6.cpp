#include <iostream>
#include <cstdlib>
#include <iomanip>
/* Desenvolva um programa que receba a matrícula (apenas números) e 3
notas de um grupo de alunos. A cada aluno cadastrado o programa deve
perguntar se deseja prosseguir com outro. Em seguida, calcule a média de
cada aluno e imprima os dados da seguinte forma:
MATRICULA NOTA1 NOTA2 NOTA3 MEDIA
===========================================
123456789 10.0 8.0 9.9 8.5
MATRICULA NOTA1 NOTA2 NOTA3 MEDIA
===========================================
123456789 10.0 8.0 9.9 8.5
MATRICULA NOTA1 NOTA2 NOTA3 MEDIA
===========================================
123456789 10.0 8.0 9.9 8.5 */

using namespace std;
          
int main(){
    system("clear");  
    int matricula, matriculas[30], tam=0;
    float nota, nota1[30], nota2[30], nota3[30];
    string cont;

       for(int i=0;i<10;i++)
        {
            cout << "Digite o numero da matrucula para cadastrar" << endl;
            cin >> matricula;
            matriculas[i]= matricula;

            cout << "Digite a nota 1" << endl;
            cin >> nota;
            nota1[i]= nota;

            cout << "Digite a nota 2" << endl;
            cin >> nota;
            nota2[i]= nota;

            cout << "Digite a nota 3" << endl;
            cin >> nota;
            nota3[i]= nota;

          
            cout << "continuar cadastrando a matrucula sim ou nao" << endl;
            cin >> cont;
             
            if(cont=="nao"){
                
                break;
            }else{  tam++;};
        
        }
        for(int i=0; i<=tam;i++){
                cout << "matricula aluno  " <<  matriculas[i] << endl;
                cout << "nota 01 " <<  nota1[i] << endl;
                cout << "nota 02 " <<  nota2[i] << endl;
                cout << "nota 03 " <<  nota3[i] << endl;
                cout << "A media do Aluno e:  " <<  setprecision(2) << (nota1[i]+nota2[i]+nota3[i])/3 << endl << endl;
            }
        
            
    return 0;
}