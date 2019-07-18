# Greedy-Florist

A group of friends want to buy a bouquet of flowers. The florist wants to maximize his number of new customers and the money he makes. To do this, he decides he'll multiply the price of each flower by the number of that customer's previously purchased flowers plus 1. The first flower will be original price, (0+1) *  original price , the next will be (1+1) * original  and so on.

Given the size of the group of friends, the number of flowers they want to purchase and the original prices of the flowers, determine the minimum cost to purchase all of the flowers.

For example, if there are k=3 friends that want to buy n=4 flowers that cost c=[1,2,3,4] each will buy one of the flowers priced [2,3,4] at the original price. Having each purchased x=1 flower, the first flower in the list,c[0] , will now cost (current purchase + previous purchase) * c[0]=(1+1)*1=2. The total cost will be 2+3+4+2=11.

Sample Input 0

3 3
2 5 6

Sample Output 0

13

Sample Input 1

3 2
2 5 6

Sample Output 1

15

Sample Input 2

5 3
1 3 5 7 9

Sample Output 2

29
