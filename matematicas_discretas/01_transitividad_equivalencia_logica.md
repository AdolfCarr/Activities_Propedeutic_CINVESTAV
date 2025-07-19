
# Demostración: Transitividad de la Equivalencia Lógica `(p≡q)∧(q≡r)⇒(p≡r)`


Se pide demostrar que si `p`, `q` y `r` son proposiciones compuestas, y se cumple que:

- `p ≡ q` (p es lógicamente equivalente a q)
- `q ≡ r` (q es lógicamente equivalente a r)

Entonces se cumple que:

- `p ≡ r` (p es lógicamente equivalente a r)

---
## ¿Qué significa 𝑝≡𝑞?

La proposición 𝑝 y la proposición q siempre tienen el mismo valor de verdad.
Es decir, ambas son verdaderas o ambas son falsas en los mismos casos.

Supongamos:

- 𝑝: "Hoy es lunes."

- 𝑞: "Ayer fue domingo."

o 

- ~𝑝: "Hoy no es lunes."

- ~𝑞: "Ayer no fue domingo."

Estas dos frases son equivalentes, porque si una es verdadera, la otra también lo es, y si una es falsa, la otra también.

Entonces:

𝑝≡𝑞 → 𝑝↔𝑞

- 𝑝≡𝑞

    → lo cual implica que

- 𝑝↔𝑞 siempre será verdadero, y por eso es una tautología, ya que 𝑝 es cierta si y solo si 𝑞 es cierta pero 𝑝≡𝑞, entonces ambas tienen el mismo estado logico.
---

## Interpretación

- `p ≡ q` significa que `p ↔ q` es una **tautología**, es decir, es **siempre verdadera** debido a que 𝑝 tiene el mismo estado logico que 𝑞.
- `q ≡ r` significa que `q ↔ r` también es una **tautología**.
- Queremos demostrar que `p ↔ r` también es una **tautología**.

---

## Tabla de verdad

- Suposiciones

  - p≡q → p↔q es una tautología

  - q≡r → q↔r es una tautología

Consideremos todas las 2^3 combinaciones posibles de valores de verdad para `p`, `q`, y `r`:

| p | q | r | p ↔ q | q ↔ r | p ↔ r |
|---|---|---|--------|--------|--------|
| V | V | V |   V    |   V    |   V    |
| V | V | F |   V    |   F    |   F    |
| V | F | V |   F    |   F    |   V    |
| V | F | F |   F    |   V    |   F    |
| F | V | V |   F    |   V    |   F    |
| F | V | F |   F    |   F    |   V    |
| F | F | V |   V    |   F    |   F    |
| F | F | F |   V    |   V    |   V    |

Ahora, observemos las filas donde **p ↔ q = V** y **q ↔ r = V**.  
Estas son las únicas situaciones en las que podemos asumir que `p ≡ q` y `q ≡ r`.

Veamos esas filas:

| p | q | r | p ↔ q | q ↔ r | p ↔ r |
|---|---|---|--------|--------|--------|
| V | V | V |   V    |   V    |   V    |
| F | F | F |   V    |   V    |   V    |

En esas filas también se cumple que `p ↔ r = V`, por lo tanto:

> Si `p ≡ q` y `q ≡ r`, entonces `p ≡ r`.

---

## Conclusión

Ha sido demostrado que la **equivalencia lógica es transitiva**:

```
(p ≡ q) ∧ (q ≡ r) ⇒ (p ≡ r)
```

Esto significa que si dos proposiciones son equivalentes a una misma tercera proposición, entonces también son equivalentes entre sí.
