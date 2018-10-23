int _itoa(int z)
{
	int x;

	while (z >= 10)
	{
		x = z % 10;
		//buff[i] = x;
		_putchar(x);
		z = z / 10;
		i++;
	}
	i++;
	//buff[i] = z;
	_putchar(z);

	return (z);
}

int buff_d(va_list valist)
{
	double k;
	int y, z, d_index = 0;

	k = va_arg(valist, double);
	z = _itoa(k);
	while (k * 10 >= 1)
	{
		y = z % 1;
		putchar(z);
		d_index++;
	}
	return (d_index);
}

int buff_c(va_list valist)
{
	buff[buff_i] = va_arg(valist, char);
	return (1);
}

int buff_i(va_list valist)
{
	int i = 0;
	char *x = (char *)va_arg(valist, int);

	while (*x != '\0')
	{
		buff[buff_i] = x[i];
		i++;
		buff_i++;
	}
	return (buff_i - i);
}

int buff_s(va_list valist)
{
	int i = 0;
	char *st = va_arg(valist, char *);

	while (*st != '\0')
	{
		_putchar(*st);
		st++;
		i++;
	}

	return(i - 1);
}
