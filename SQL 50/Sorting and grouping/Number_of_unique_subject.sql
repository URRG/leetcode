select teacher_id, count(distinct subject_id) as cnt from Teacher Group By teacher_id;
