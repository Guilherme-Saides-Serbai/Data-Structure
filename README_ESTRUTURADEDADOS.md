---

## ***Árvores***


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

