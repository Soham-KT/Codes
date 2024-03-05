dic={'ravi': 10, 'rajnish': 9,'sanjeev': 15, 'yash': 2, 'suraj': 32}

#----------------------------------------by keys
lst_keys=list(dic.keys())
lst_keys.sort()
dic_sorted_keys={}
for k in lst_keys:
    dic_sorted_keys[k]=dic.get(k)

print(dic_sorted_keys)

#----------------------------------------by values
lst_vals=list(dic.values())
lst_vals.sort()
dic_sorted_vals={}
for val in lst_vals:
    for key in dic:
        if dic[key]==val:
            dic_sorted_vals[key]=val
            continue

print(dic_sorted_vals)
