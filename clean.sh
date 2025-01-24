echo -n "Do you want to compile? (y/n)"
read ask 

if [ $ask == "y" ]; then 
	make -C ex00/ && \
	make -C ex01/ && \
	make -C ex02/
fi

make fclean -C ex00/ && \
make fclean -C ex01/ && \
make fclean -C ex02/