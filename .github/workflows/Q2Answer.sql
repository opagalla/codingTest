SELECT S.ID, S.NAME, S.MARKS,
    CASE WHEN (S.MARKS) > 90
    THEN 'A+'
    WHEN (S.MARKS) < 90 AND (S.MARKS) > 70
    THEN 'A'
    WHEN (S.MARKS) < 70 AND (S.MARKS) > 50
    THEN 'B'
    WHEN (S.MARKS) < 50 AND (S.MARKS) >= 40
    THEN 'C'
    ELSE 'FAIL'
    END AS GRADE
    FROM STUDENTS S;
