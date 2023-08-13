#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the arrays (adjust as needed)

typedef struct s_stack
{
	int arr[MAX_SIZE];
	int top;
} t_stack;

void initStack(t_stack *s)
{
	s->top = -1;
}

int isEmpty(t_stack *s)
{
	return s->top == -1;
}

void push(t_stack *s, int value)
{
	if (s->top < MAX_SIZE - 1)
	{
		s->top++;
		s->arr[s->top] = value;
	}
	else
	{
		printf("Stack overflow\n");
	}
}

int pop(t_stack *s)
{
	if (!isEmpty(s))
	{
		int value = s->arr[s->top];
		s->top--;
		return value;
	}
	else
	{
		printf("Stack underflow\n");
		return -1; // Or some other sentinel value
	}
}

void sa(t_stack *a)
{
	if (a->top >= 1)
	{
		int temp = a->arr[a->top];
		a->arr[a->top] = a->arr[a->top - 1];
		a->arr[a->top - 1] = temp;
	}
}

void sb(t_stack *b)
{
	sa(b); // sb is the same as sa
}

void ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}

void pa(t_stack *a, t_stack *b)
{
	if (!isEmpty(b))
	{
		int value = pop(b);
		push(a, value);
	}
}

void pb(t_stack *a, t_stack *b)
{
	pa(b, a); // pb is essentially the same as pa with stacks swapped
}

void rotate(t_stack *s)
{
	if (!isEmpty(s))
	{
		int first = s->arr[s->top];
		for (int i = s->top; i > 0; i--)
		{
			s->arr[i] = s->arr[i - 1];
		}
		s->arr[0] = first;
	}
}

void ra(t_stack *a)
{
	rotate(a);
}

void rb(t_stack *b)
{
	ra(b); // rb is the same as ra
}

void rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
}

void reverseRotate(t_stack *s)
{
	if (!isEmpty(s))
	{
		int last = s->arr[0];
		for (int i = 0; i < s->top; i++)
		{
			s->arr[i] = s->arr[i + 1];
		}
		s->arr[s->top] = last;
	}
}

void rra(t_stack *a)
{
	reverseRotate(a);
}

void rrb(t_stack *b)
{
	rra(b); // rrb is the same as rra
}

void rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}

/*int main()
{
	// Initialize stacks
	t_stack stackA, stackB;
	initStack(&stackA);
	initStack(&stackB);

	// Perform actions on the stacks
	// Example usage:
	push(&stackA, 3);
	push(&stackA, 5);
	push(&stackB, 7);

	sa(&stackA);
	pb(&stackA, &stackB);
	rr(&stackA, &stackB);

	return 0;
}
*/