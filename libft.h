#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

ypedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int ft_atoi(const char *str)
int ft_isalnum(int c)
int	ft_isalpha(int c)
int	ft_isascii(int c)
int	ft_isdigit(int c)
int	ft_isprint(int c)
int	count_digits(long int n)
int	ft_memcmp(const void *str1, const void *str2, size_t n)
int	ft_strncmp(const char *str1, const char *str2, size_t c)
int	ft_tolower(int c)
int	ft_toupper(int c)
  
void	ft_bzero(void *s, size_t n)
void	*ft_calloc(size_t count, size_t size)
void	*ft_memchr(const void *str, int n, size_t len)
void	*ft_memcpy(void *dest, const void *src, size_t n)
void  *ft_memmove(void *destination, const void *source, size_t n)
void	ft_putendl_fd(char *s, int fd)
void	ft_putchar_fd(char c, int fd)
void	ft_putnbr_fd(int n, int fd)
void	ft_putstr_fd(char *s, int fd)
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
  
char	*ft_itoa(int n)
char	*ft_strchr(const char *str, int c)
char	*ft_strdup(const char *s1)
char	*ft_strjoin(char const *s1, char const *s2)
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
char	ft_strnstr (const char *big, const char *little, size_t len)
char	*strrchr(const char *str, int c)
char	*ft_strtrim(char const *s1, char const *set)
char	*ft_substr(char const *s, unsigned int start, size_t len)
  
t_list	*ft_lstnew(void *content)
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
size_t	ft_strlen(const char *str)

#endif
