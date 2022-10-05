from main import split_script

list_kain_pense = ["KAINE:", "PENSE:", "PENCE:", "QUIJANO:"]
list_harris_pense = ["HARRIS:", "PENSE:", "PENCE:", "PAGE:"]
list_october_2016_2 = ["WALLACE:", "CLINTON:", "TRUMP:"]
list_october_2016 = ["QUESTION:", "RADDATZ:", "COOPER:", "TRUMP:", "CLINTON:"]
list_october_2020 = ["MODERATOR:", "WELKER:", "TRUMP:", "BIDEN:"]
list_september_2016 = ["HOLT:", "CLINTON:", "TRUMP:"]
list_september_2020 = ["WALLACE:", "BIDEN:", "TRUMP"]

split_script("kain_and_pense", list_kain_pense)
split_script("pense_and_harris", list_harris_pense)
split_script("october_2016_2", list_october_2016_2)
split_script("october_2016", list_october_2016)
split_script("october_2020", list_october_2020)
split_script("september_2016", list_september_2016)
split_script("september_2020", list_september_2020)