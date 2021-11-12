import argparse
from scipy import integrate

function = lambda x , y , z : (x**2) * (y**2) * (z**2)

if __name__ == "__main__" :
    
    parser = argparse.ArgumentParser()

    parser.add_argument("z_lower",type=float,help="Enter Lower Limit Of Z ")
    parser.add_argument("z_upper",type=float,help="Enter Upper Limit Of Z ")
    parser.add_argument("y_lower",type=float,help="Enter Lower Limit of Y ")
    parser.add_argument("y_upper",type=float,help="Enter Upper Limit Of Y ")
    parser.add_argument("x_lower",type=float,help="Enter Lower Limit Of X")
    parser.add_argument("x_upper",type=float,help="Enter Upper Limit Of X")

    argc = parser.parse_args()

    x_low = float(argc.x_lower)
    x_upp = float(argc.x_upper)
    y_low = float(argc.y_lower)
    y_upp = float(argc.y_upper)
    z_low = float(argc.z_lower)
    z_upp = float(argc.z_upper)

    value = integrate.tplquad(function,z_low,z_upp,y_low,y_upp,x_low,x_upp)
    print(value[0])