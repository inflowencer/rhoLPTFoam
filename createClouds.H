const word thermoCloudName
(
    args.getOrDefault<word>("cloud", "thermoCloud")
);

Info<< "\nConstructing thermoCloud" << thermoCloudName << endl;
basicThermoKinematicCollidingCloud thermoCloud
(
    thermoCloudName,
    rho,
    U,
    g,
    slgThermo
);
