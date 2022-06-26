from datetime import datetime

aniversario = datetime(1993, 2, 28, 9)

print("Ano de nascimento: {}\n".format(aniversario.year))
print("Mês de nascimento: {}\n".format(aniversario.month))
print("Dia de nascimento: {}\n".format(aniversario.day))
print("Dia da semana: {}\n".format(aniversario.weekday())) # 0: segunda, 1: terça...
print("Hora de nascimento: {}\n".format(aniversario.hour))