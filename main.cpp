#include <iostream>
#include <vector>
#include <string>

using namespace std;
using std::cin;

void vectorData(int vsize, vector<int> vec, vector<int> *ptVec){
    cout<<"\nSeu vetor tem "<<vsize<<" números"<<endl;
    for(int i = 0; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<"\nO endereço do vetor é "<<ptVec<<endl;
}

int getMaxNumber(vector<int> vec){
    int getIndex= 0;
    int maxNum = vec[0];
    for(int i = 0; i < vec.size(); i++){
        if(maxNum <= vec[i]){
            maxNum = vec[i];
            getIndex = i;
        }else{
            continue;
        }
    }
    
    cout<<"o maior numero é "<<maxNum<<", Endereço: "<<&vec[getIndex]<<endl;
    return maxNum;
}

int getMinNumber(vector<int> vec){
    int getIndex = 0;
    int minNum = vec[0];
    for(int i =0; i < vec.size(); i++){
        if(minNum >= vec[i]){
            minNum = vec[i];
            getIndex = i;
        }else{
            continue;
        }
    }
    cout<<"o menor numero é "<<minNum<<", Endereço: "<<&vec[getIndex]<<endl;
    return minNum;
}

int main(){
    
    int num;
    char resposta = 's';
    
    vector<int> tenVector;
    int vectorSize;
    vector<int> *ptTenVector = &tenVector;

    cout<<"Digite numeros para seu vetor:"<<endl;
    do{
        cin>> num;        
        tenVector.push_back(num);
        cout<<"****Gostaria de adiconar mais algum? ****s/n"<<endl;
        cin>>resposta;
        if(resposta == 's'){
            cout<<"Digite seu número:"<<endl;
        }else{
            cout<<"**Lista finalizada**"<<endl;
            vectorSize = tenVector.size();
        }
    }while(resposta =='s');
    cout<<endl;
    ////Criando vetor e exibindo dados
    vectorData(vectorSize,tenVector,ptTenVector);
    cout<<endl;
    //mostrando maior numero
    getMaxNumber(tenVector);
    //mostrando menor numero
    getMinNumber(tenVector);
    
    return 0;
    
}
