# Author: Shikai Lu

# Change exchange
def dp_exchange(coin_value_list, change, min_coins, coins_used):
    #The minimum number of coins is calculated from one point
    for cents in range(1, change + 1):
        #Initialize a maximum value
        coin_count = cents
        new_coin = 1
        for j in [c for c in coin_value_list if c <= cents]:
            if min_coins[cents - j] + 1 < coin_count:
                coin_count = min_coins[cents - j] + 1
                new_coin = j
        min_coins[cents] = coin_count
        coins_used[cents] = new_coin

    return min_coins[change]
