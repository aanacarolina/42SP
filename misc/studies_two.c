int count_col(char split)
{
    int count = 0;
    while(split[count] != '\0')
        count++;
    return count;
}

void free_split(char split)
{
    int count = 0;
    while(split[count] != '\0')
        free(split[count]);
    free(split);
}


---------------- contador de linhas e colunas ------------------
int qnt_row = 1;

char *line = gnl(fd);
char **cols = ft_split(line, ' ');
int qnt_col = count_col(cols);
free(line);
free_split(cols);

line = gnl(fd);
while(line != NULL)
{
    qnt_row++;
    free(line);
    line = gnl(fd);
}
-----------------------------------------------------------

(-1,-1, 0)   (0,-1, 0)   (1,-1, 0)     0 0 0
(-1, 0, 0)   (0, 0, 0)   (1, 0, 0)     0 0 0 
(-1, 1, 0)   (0, 1, 0)   (1, 1, 0)     0 0 0


t_point    matrix[row][col];


typedef struct s_point
{
    double x;
    double y;
    double z;
} t_point;


struct s_point a;  =   t_point a;

-----------------------------------------------------------



int matrix[3][3]
                                 *
[10][20][30]              [10][20][30][40][50][60][70][80][90]
[40][50][60]
[70][80][90]


[2][1]  =>   pos_ele = (NUM_ROW*size_row) + (NUM_COL);

Message @phrxn
