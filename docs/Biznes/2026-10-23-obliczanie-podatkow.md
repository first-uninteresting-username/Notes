# Obliczanie podatków

BRUTTO - Z podatkiem
NETTO - Bez podatku

```python
VAT = 0.08 # 8%
BRUTTO = 67 # zł
NETTO = BRUTTO / (1 + VAT) # ~62 zł
```

```python
VAT = 0.23 # 23%
NETTO = 67 # zł
BRUTTO = (1 + VAT) * NETTO # ~82 zł
```

```python
dochód = przychód - koszty_uzyskania_przychodu
```

Im wyższe koszy uzyskania przychodu, tym niższy podatek.

Metody rozliczania podatku dochodowego:

- Progowa
  I próg - roczne dochody do 120 000 zł - 12%
  II próg - powyżej 120 000 zł - 32%

- Liniowa
  19%, niezależnie od wysokości

Różnice:

- Liniowo tylko przedsiębiorcy
- Progowy można rozliczać wspólnie z małżonkiem. Limit jest łączony
- W liniowym nie można korzystać z ulg i odpisów
