# Expressões Regulares com Python
# Instagram @laboratoriodebits

import re

def cpfPattern(cpf):
   pattern = r"^(\d{3}.){2}\d{3}-\d{2}$"
   return bool(re.match(pattern, cpf))

cpf1 = cpfPattern("555.555.203-90")
cpf2 = cpfPattern("AAATeste")

print("CPF 1 é um padrão de CPF? {}".format(cpf1))
print("CPF 2 é um padrão de CPF? {}".format(cpf2))