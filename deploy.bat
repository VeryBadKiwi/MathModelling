echo Глобальная настйрока переменных, достаточно выполнить 1 раз

git config --global user.name VeryBadKiwi

git config --global user.email turnedbold@gmail.com

git config --global user.password rustler5101
echo Добавим трекинг всех новых файлов

git add -A

echo Объединяем все изменения из удаленного репозитория с локальной версией

git pull origin master

echo Применение коммита, мерж локальных измнений в удаленный репозиторий

git push origin master
