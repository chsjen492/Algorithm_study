
SELECT A.PRODUCT_ID, A.PRODUCT_NAME, SUM(B.AMOUNT)*A.PRICE AS TOTAL_SALES
FROM FOOD_PRODUCT AS A INNER JOIN FOOD_ORDER AS B
ON A.PRODUCT_ID=B.PRODUCT_ID
WHERE MONTH(PRODUCE_DATE)=5
GROUP BY A.PRODUCT_ID
ORDER BY TOTAL_SALES DESC, A.PRODUCT_ID