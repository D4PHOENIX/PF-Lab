for(i=0; i<3;i++){
        for(j=0; j<3;j++){
            result[i][j] = matrix[i][j]*vector[i][0];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<result[i][j]<<"\t";
        }
    }