### Estruturas de Dados – Resumo Completo

---

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


-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
## ***Árvores***

---

## **1. Pré-Ordem (Preorder)**
- **Regras (Ordem de Visita):**  
  **Raiz → Esquerda → Direita**

- **Como funciona:**  
  Você processa o nó raiz primeiro, depois visita recursivamente os nós da subárvore esquerda e, em seguida, da subárvore direita.

- **Uso principal:**  
  - **Reconstrução de uma árvore:** Combinado com a travessia em ordem, pode ser usado para reconstruir uma árvore.
  - **Análise de estruturas hierárquicas:** Útil para processar a árvore antes de explorar suas subestruturas.
  - **Expressões matemáticas:** Em árvores de expressões, pode ser usado para produzir a notação prefixada (prefix).

- **Exemplo de ordem de visitação:**  
  Para a árvore:
  ```
        1
       / \
      2   3
     / \
    4   5
  ```
  A saída é: **1, 2, 4, 5, 3**

---

## **2. Em Ordem (Inorder)**
- **Regras (Ordem de Visita):**  
  **Esquerda → Raiz → Direita**

- **Como funciona:**  
  Você visita recursivamente os nós da subárvore esquerda, processa o nó raiz e, por fim, visita a subárvore direita.

- **Uso principal:**  
  - **Árvores Binárias de Busca (BST):** Para obter os elementos em ordem crescente (ou decrescente, dependendo da ordem das subárvores).
  - **Análise de expressões matemáticas:** Gera a notação infixa (infix), que é a notação usual de expressões (ex.: `a + b`).

- **Exemplo de ordem de visitação:**  
  Para a mesma árvore:
  ```
        1
       / \
      2   3
     / \
    4   5
  ```
  A saída é: **4, 2, 5, 1, 3**

---

## **3. Pós-Ordem (Postorder)**
- **Regras (Ordem de Visita):**  
  **Esquerda → Direita → Raiz**

- **Como funciona:**  
  Você visita recursivamente os nós da subárvore esquerda, depois os nós da subárvore direita e, por fim, processa o nó raiz.

- **Uso principal:**  
  - **Exclusão de nós:** É útil para deletar árvores porque garante que todos os filhos sejam processados antes do nó pai.
  - **Cálculo de expressões:** Em árvores de expressões, gera a notação pós-fixada (postfix), como em RPN (ex.: `a b +`).
  - **Processamento de dados finais:** Quando você precisa garantir que um nó seja processado somente após todos os seus descendentes.

- **Exemplo de ordem de visitação:**  
  Para a mesma árvore:
  ```
        1
       / \
      2   3
     / \
    4   5
  ```
  A saída é: **4, 5, 2, 3, 1**

---

## **4. Travessia em Largura (BFS - Breadth-First Search)**
- **Regras (Ordem de Visita):**  
  Visita os nós **nível por nível**, da raiz para as folhas.

- **Como funciona:**  
  Você usa uma **fila** (queue) para armazenar os nós a serem visitados:
  1. Comece pela raiz.
  2. Adicione os nós filhos à fila.
  3. Processe os nós na ordem em que foram inseridos (FIFO - First In, First Out).

- **Uso principal:**  
  - **Busca por caminho mais curto:** Em grafos ou árvores, BFS é usado para encontrar o caminho mais curto em termos de arestas.
  - **Processamento nível a nível:** Útil em jogos, redes, inteligência artificial, ou qualquer aplicação que envolva trabalhar nível por nível.
  - **Diagnósticos de sistemas hierárquicos:** Como árvores de processos ou fluxos.

- **Exemplo de ordem de visitação:**  
  Para a mesma árvore:
  ```
        1
       / \
      2   3
     / \
    4   5
  ```
  A saída é: **1, 2, 3, 4, 5**

---

## **Resumo das Ordens de Visita**

| Método        | Ordem de Visita           | Exemplo de saída (com a árvore acima) |
|---------------|---------------------------|---------------------------------------|
| **Pré-Ordem** | Raiz → Esquerda → Direita | 1, 2, 4, 5, 3                         |
| **Em Ordem**  | Esquerda → Raiz → Direita | 4, 2, 5, 1, 3                         |
| **Pós-Ordem** | Esquerda → Direita → Raiz | 4, 5, 2, 3, 1                         |
| **BFS**       | Nível por Nível           | 1, 2, 3, 4, 5                         |

