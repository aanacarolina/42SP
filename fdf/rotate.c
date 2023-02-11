vec2 rotate(vec2 point, float angle){
        vec2 rotated_point;
        rotated_point.x = point.x * cos(angle) - point.y * sin(angle);
        rotated_point.y = point.x * sin(angle) + point.y * cos(angle);
        return rotated_point;
}
//https://habr.com/ru/post/131931/