-- 코드를 입력하세요
SELECT FIRST_HALF.FLAVOR
FROM ICECREAM_INFO,FIRST_HALF 
WHERE ICECREAM_INFO.FLAVOR=FIRST_HALF.FLAVOR AND TOTAL_ORDER>3000 AND INGREDIENT_TYPE='fruit_based';