#pragma once

#include <iostream>

template<typename C, typename V>
class ABB;

template <typename C, typename V>
class NoABB
{

    private:
        C chave;
        V valor;
        NoABB *esq;
        NoABB *dir;


    public:
        NoABB(C chave, V valor) 
            : chave(chave), valor(valor), 
            esq(nullptr), dir(nullptr) {}

        ~NoABB();

        C getChave() { return chave; }
        V& getValor() { return valor; }


    friend class ABB<C, V>;
};

template <typename C, typename V>
class ABB
{
    private:

        NoABB<C, V>* inserirNo(NoABB<C, V>* no, C chave, V valor){
            if(no == nullptr){
                return new NoABB<C, V>(chave, valor);
            }
            if(chave <= no->chave){
                no->esq = inserirNo(no->esq, chave, valor);
            }
            else if(chave > no->chave){
                no->dir = inserirNo(no->dir, chave, valor);
            }
            return no;
        }
        NoABB<C, V>* buscarNo(NoABB<C, V>* no, C chave){
            if(no == null || no->chave == chave){
                return no;
            }
            if(chave <= no->chave){
                no->esq = buscarNo(no->esq, chave);
            }
            else if(chave > no->chave){
                no->dir = buscarNo(no->dir, chave);
            }
            return no;
        }
        NoABB<C, V>* removerNo(NoABB<C, V>* no, C chave){
            if(no == nullptr){
                return no;
            }
            if(chave <= no->chave){
                no->esq = removerNo(no->esq, chave);
            }
            if(chave > no->chave){
                no->dir = removerNo(no->dir, chave);
            }
            else{
                if(no->esq == NULL && no->dir == NULL ){
                    NoABB * temp = no;
                    delete no;
                    return temp;
            }
            }
            
        }
        void ABB<C, V>::imprimirNo(NoABB<C, V> *no, int nivel, char lado){
            for(int i = 0; i < nivel; i++){
                std::cout << "-->";
            }
            if(no == NULL)
                std::cout << "(" << lado << ") (VAZIO)" << std::endl;
            else{
                std::cout << "(" << lado << ") (" 
                          << no->chave << ", " << no->valor << ")" << std::endl;

                imprimirNo(no->esq, nivel + 1, 'E');
                imprimirNo(no->dir, nivel + 1, 'D');
            }
        }

        NoABB<C, V>* raiz;


    public:
        ABB(){
            raiz(nullptr);
        }
        ~ABB() { delete raiz; }

        //insere o par (chave, valor) na árvore
        void inserir(C chave, V valor){
            raiz = (raiz, chave, valor);
        }
        //retorna o endereço do nó com a chave especificada
        NoABB<C, V>* buscar(NoABB<C, V> C chave){
            buscarNo(raiz, chave);
        }
        //remove o nó com a chave especificada
        void remover(C chave){

        }
        //imprime a árvore

        void ABB<C, V>::imprimir(){
            this->imprimirNo(raiz, 0, 'R');
        }

        //retorna o endereço do nó com a menor chave da árvore
        NoABB<C, V>* minimo(){
            if(raiz == nullptr){
                return nullptr;
            }
            return minimo(raiz);
        }
        //retorna o endereço do nó com a menor chave da subárvore enraizada no nó especificado
        NoABB<C, V>* minimo(NoABB<C, V>* no){
            if(no == nullptr || no->esq == nullptr){
                return no;
            }
            return minimo(no->esq);
        }

        //retorna o endereço do nó com a maior chave da árvore
        NoABB<C, V>* maximo();
        //retorna o endereço do nó com a maior chave da subárvore enraizada no nó especificado
        NoABB<C, V>* maximo(NoABB<C, V>* no);

        //retorna o endereço do nó com a chave sucessora da chave especificada
        NoABB<C, V>* sucessor(C chave);
        //retorna o endereço do nó com a chave sucessora à chave do nó especificado
        NoABB<C, V>* sucessor(NoABB<C, V>* no);

        //retorna o endereço do nó com a chave antecessora da chave especificada
        NoABB<C, V>* antecessor(C chave);
        //retorna o endereço do nó com a chave antecessora à chave do nó especificado
        NoABB<C, V>* antecessor(NoABB<C, V>* no);

        //retorna o número de nós da árvore
        int tamanho();
        //retorna true se a árvore estiver vazia
        bool vazia();
};
