# ROOT 아이템 구하기
SELECT ITEM_INFO.ITEM_ID, ITEM_NAME FROM ITEM_INFO INNER JOIN ITEM_TREE
ON ITEM_INFO.ITEM_ID=ITEM_TREE.ITEM_ID
WHERE PARENT_ITEM_ID IS NULL
ORDER BY ITEM_INFO.ITEM_ID