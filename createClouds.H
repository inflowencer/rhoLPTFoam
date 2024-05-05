const word thermoCloudName
(
    args.getOrDefault<word>("cloud", "thermoCloud")
);

Info<< "\nConstructing thermoCloud" << thermoCloudName << endl;
basicThermoCloud thermoCloud
(
    thermoCloudName,
    rho,
    U,
    g,
    slgThermo
);
