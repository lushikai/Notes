# Author: Shikai Lu

# Change exchange
def exchange(coin_value_list, change, optimal):
    min_coins = change
    if change in coin_value_list:
        optimal[change] = 1
        return 1
    elif optimal[change] > 0:
        return optimal[change]
    else:
        for i in [c for c in coin_value_list if c <= change]:
            num_coins = exchange(coin_value_list, change-i, optimal) + 1
            if num_coins < min_coins:
                min_coins = num_coins
                optimal[change] = min_coins
    return min_coins
