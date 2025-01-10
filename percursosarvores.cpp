void preordem(AB * a){
    if(a == null)return;
    std::cout<< a->chave << std::endl;
    preordem(a->esq);
    preordem(a->dir);
}

void ordem(AB * a){
    if(a == null)return;
    ordem(a->esq);
    std::cout<< a->chave << std::endl;
    ordem(a->dir);
}

void posordem(AB * a){
    if(a == null)return;
    posordem(a->esq);
    posordem(a->dir);
    std::cout<< a->chave << std::endl;
}

 