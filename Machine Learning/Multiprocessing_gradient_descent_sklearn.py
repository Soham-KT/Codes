import numpy as np
from sklearn.preprocessing import StandardScaler
from sklearn.linear_model import SGDRegressor


if __name__ == '__main__':
    x_data = np.array([[5.30450583e-01, 1.00000000e+00, 1.00000000e+00],
                       [5.34085274e-01, 1.00000000e+01, 1.00000000e+00],
                       [5.35913706e-01, 1.00000000e+02, 1.00000000e+00],
                       [6.74188852e-01, 1.00000000e+03, 1.00000000e+00],
                       [1.02888465e+00, 1.00000000e+04, 1.00000000e+00],
                       [5.12627912e+00, 1.00000000e+05, 1.00000000e+00],
                       [5.30450583e-01, 1.00000000e+00, 2.00000000e+00],
                       [5.34085274e-01, 1.00000000e+01, 2.00000000e+00],
                       [5.35913706e-01, 1.00000000e+02, 2.00000000e+00],
                       [6.74188852e-01, 1.00000000e+03, 2.00000000e+00],
                       [1.02888465e+00, 1.00000000e+04, 2.00000000e+00],
                       [5.12627912e+00, 1.00000000e+05, 2.00000000e+00],
                       [7.64626265e-01, 1.00000000e+00, 3.00000000e+00],
                       [8.94851446e-01, 1.00000000e+01, 3.00000000e+00],
                       [8.77122164e-01, 1.00000000e+02, 3.00000000e+00],
                       [8.25196505e-01, 1.00000000e+03, 3.00000000e+00],
                       [1.12490630e+00, 1.00000000e+04, 3.00000000e+00],
                       [2.94013381e+00, 1.00000000e+05, 3.00000000e+00],
                       [8.55543852e-01, 1.00000000e+00, 4.00000000e+00],
                       [8.82064342e-01, 1.00000000e+01, 4.00000000e+00],
                       [9.46892977e-01, 1.00000000e+02, 4.00000000e+00],
                       [9.33963537e-01, 1.00000000e+03, 4.00000000e+00],
                       [1.05247712e+00, 1.00000000e+04, 4.00000000e+00],
                       [2.79986548e+00, 1.00000000e+05, 4.00000000e+00],
                       [1.01995945e+00, 1.00000000e+00, 5.00000000e+00],
                       [1.02233624e+00, 1.00000000e+01, 5.00000000e+00],
                       [8.27241659e-01, 1.00000000e+02, 5.00000000e+00],
                       [8.34306479e-01, 1.00000000e+03, 5.00000000e+00],
                       [1.00579214e+00, 1.00000000e+04, 5.00000000e+00],
                       [2.22159076e+00, 1.00000000e+05, 5.00000000e+00],
                       [1.02669311e+00, 1.00000000e+00, 6.00000000e+00],
                       [9.89609003e-01, 1.00000000e+01, 6.00000000e+00],
                       [9.49756861e-01, 1.00000000e+02, 6.00000000e+00],
                       [9.95987892e-01, 1.00000000e+03, 6.00000000e+00],
                       [1.10209060e+00, 1.00000000e+04, 6.00000000e+00],
                       [2.16955280e+00, 1.00000000e+05, 6.00000000e+00]])

    y_data = np.array([7.81250185e-03, 6.42500000e+01, 6.91250000e+01, 7.10000000e+01,
                       7.12500000e+01, 7.31250000e+01, 8.83750000e+01, 6.42500000e+01,
                       6.91250000e+01, 7.10000000e+01, 7.12500000e+01, 7.31250000e+01,
                       8.83750000e+01, 6.55000000e+01, 6.71250000e+01, 6.95000000e+01,
                       7.10000000e+01, 7.27500000e+01, 7.62500000e+01, 6.81250000e+01,
                       6.90000000e+01, 7.00000000e+01, 7.10000000e+01, 7.11250000e+01,
                       7.53750000e+01, 6.76250000e+01, 6.82500000e+01, 6.93750000e+01,
                       7.06250000e+01, 7.22500000e+01, 7.82500000e+01, 6.25000000e+01,
                       6.86250000e+01, 6.96250000e+01, 7.00000000e+01, 7.10000000e+01])

    scaler = StandardScaler()
    x_scaled_data = scaler.fit_transform(x_data)

    gradient_descent = SGDRegressor(max_iter=1000)
    gradient_descent.fit(x_scaled_data, y_data)

    print(f"W : {gradient_descent.coef_} \nB : {gradient_descent.intercept_}")
