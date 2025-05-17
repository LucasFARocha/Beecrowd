nome = input()
salarioFixo = float(input())
valorVendas = float(input())
comissao = 0.15

salarioFinal = salarioFixo + valorVendas * comissao

print('TOTAL = R$ {:.2f}'.format(salarioFinal))
