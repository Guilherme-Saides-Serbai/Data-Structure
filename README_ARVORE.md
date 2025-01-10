### ***Estruturas de Dados***

#### **O que são Estruturas de Dados?**
Estruturas de dados são formas organizadas de armazenar, acessar e manipular dados em um sistema computacional. Elas permitem realizar operações como busca, inserção, remoção e ordenação de forma eficiente. Escolher a estrutura certa é crucial para resolver problemas específicos e otimizar o uso de memória e processamento.

---

### **Classificação das Estruturas de Dados**

#### 1. **Estruturas de Dados Lineares**
Os dados são organizados em sequência, onde cada elemento possui um predecessor e/ou sucessor direto.

- **Exemplos:**
  - **Array (Vetor)**: Coleção de elementos armazenados em locais contíguos de memória.  
    - **Vantagens**: Acesso rápido por índice (\(O(1)\)).  
    - **Desvantagens**: Inserção e remoção custosas (\(O(n)\)).
  - **Lista Ligada**: Sequência de nós onde cada nó aponta para o próximo.  
    - **Vantagens**: Inserção e remoção eficientes.  
    - **Desvantagens**: Acesso sequencial (\(O(n)\)).
  - **Pilha (Stack)**: Estrutura LIFO (*Last In, First Out*).  
    - Usada para chamadas de função, algoritmos de backtracking.
  - **Fila (Queue)**: Estrutura FIFO (*First In, First Out*).  
    - Variantes incluem filas circulares e de prioridade.

---

#### 2. **Estruturas de Dados Não Lineares**
Os elementos não seguem uma sequência única, mas estão organizados de forma hierárquica ou relacional.

- **Exemplos:**
  - **Árvores**:  
    - Estruturas hierárquicas formadas por nós com relação pai-filho.  
    - **Tipos importantes**:
      - **Árvore Binária**: Cada nó possui até dois filhos.
      - **Árvore Binária de Busca (BST)**: Os filhos à esquerda são menores, os à direita, maiores.
      - **Heap**: Usada para implementar filas de prioridade.
      - **Árvore B**: Ideal para sistemas de armazenamento em disco.
  - **Grafos**: Representam conexões entre dados (vértices e arestas).  
    - Podem ser direcionados/não direcionados, ponderados/não ponderados.
    - Aplicações: redes sociais, rotas GPS, análise de conexões.

---

### **Outras Estruturas Importantes**
- **Tabelas de Dispersão (Hash Tables)**:
  - Associam chaves a valores usando uma função de hash.
  - Operações próximas a \(O(1)\).
  - Conflitos resolvidos por encadeamento ou endereçamento aberto.
- **Deque (Double-Ended Queue)**:
  - Permite inserção e remoção em ambas as extremidades.

---

### **Critérios de Escolha da Estrutura**
A escolha da estrutura de dados depende de:
1. **Tipo de operações predominantes**: Ex.: Busca rápida, inserção frequente.
2. **Volume de dados**: Estruturas como árvores B são mais eficientes para grandes volumes.
3. **Limitações de memória e tempo de execução**.

---

### **Complexidade de Tempo e Espaço**
- **Tempo**: Determina a eficiência das operações realizadas (\(O(1)\), \(O(n)\), \(O(\log n)\), etc.).
- **Espaço**: Determina o uso de memória adicional.

---

### **Principais Diferenças: Lineares vs. Não Lineares**
| **Aspecto**        | **Lineares**                     | **Não Lineares**                |
|--------------------|----------------------------------|---------------------------------|
| **Organização**    | Sequencial (uma dimensão).       | Hierárquica ou relacional.      |
| **Complexidade**   | Simples.                         | Mais complexa.                  |
| **Exemplo de Uso** | Manipulação direta de sequências.| Representação de redes e árvores.|

---

### **Aplicações Práticas**
- **Lineares**:
  - **Arrays**: Algoritmos de ordenação e busca.
  - **Filas**: Sistemas de filas de espera, buffers.
  - **Pilhas**: Algoritmos recursivos, cálculo de expressões.
- **Não Lineares**:
  - **Árvores**: Sistemas de arquivos, compressão de dados.
  - **Grafos**: Redes de computadores, análise de redes sociais.

---

### **Conclusão**
Estruturas de dados são fundamentais para a ciência da computação e influenciam diretamente no desempenho e na escalabilidade de aplicações. Conhecê-las é essencial para projetar sistemas eficientes e resolver problemas computacionais de maneira otimizada.

