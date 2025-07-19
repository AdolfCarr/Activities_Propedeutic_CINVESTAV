# ¿Qué significa 𝑝→𝑞?

Se lee como:

> "Si p, entonces q"

Esta es una implicación lógica.

- p: “Estudio para el examen”

- 𝑞: “Apruebo el examen”

Entonces,

𝑝→𝑞 significa:

"Si estudio para el examen, entonces apruebo el examen."


**¿Por qué es falso solo cuando p es verdadera y q es falsa?**

Porque se esta prometiendo algo:

"Si pasa p, entonces debe pasar q."

Entonces, si p ocurre (por ejemplo, estudiaste), pero q no ocurre (reprobaste), la promesa se rompe → es falsa.

**¿Cuándo es verdadera?**

Si no estudiaste (p = F), no importa qué pase con q.
No rompiste ninguna promesa.

Si estudiaste y aprobaste, todo bien → verdadera.


## Ejemplo Visual: Implicación Lógica con un Videojuego

Supongamos que en un videojuego existe la siguiente regla:

> **"Si consigues la llave dorada, entonces se abre la puerta secreta."**

Esto representa la implicación lógica:

```
p → q
```

Donde:
- `p`: Consigues la llave dorada
- `q`: Se abre la puerta secreta

---

## 🎮 Tabla de verdad con interpretación del videojuego

| Consigues la llave (p) | Se abre la puerta (q) | ¿La regla se cumple?                              |
|------------------------|------------------------|---------------------------------------------------|
| ✅ Sí                  | ✅ Sí                  | ✅ Sí, todo bien                                  |
| ✅ Sí                  | ❌ No                  | ❌ No, tenías la llave pero la puerta no se abrió |
| ❌ No                  | ✅ Sí                  | ✅ Sí, no tenías la llave pero te dieron un regalo |
| ❌ No                  | ❌ No                  | ✅ Sí, no tenías la llave y no se abrió la puerta  |

---

## Conclusión

La implicación lógica `p → q` solo **falla** cuando:
- La condición se cumple (tienes la llave),
- Pero la consecuencia no ocurre (no se abre la puerta).

En todos los demás casos, **la implicación es verdadera**, porque la condición **no se activa**.


