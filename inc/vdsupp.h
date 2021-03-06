      PARAMETER (NMEC = 4 )
      COMMON /VDSUPP/ VDAPLN(NMEC,2) , VMETIL(NMEC,2) , VDSPTR(NMEC) ,
     &                VDSPER(NMEC,2) ,  VDSPCB(NMEC) , VDSPCA(NMEC) ,
     &                VDSPCR(NMEC) ,  VDSPCT(NMEC) , VDSPSA(NMEC) ,
     &                VDSPGA(NMEC) ,  VDSPSP(NMEC) , NVDSPS(NMEC) ,
     &                VDHYL1 , VDHYL2 , VDHYL3 , VDHYL4 , VDHYL5 ,
     &                VDHYCE , VDHYCW , VDHYCL , VDHYCT ,
     &                VDHYST(NMEC) , VDALIR , VDALOR , VDALLA ,
     &                VDALTC , VDALTA , VDSPAT
#if defined(DOC)

    This common stores the variables related to the (passive) support
    of Mini-Vertex. The variables are preset in the subroutine VDIGEO

    VDAPLN(2) : INNER AND OUTER RADIUS OF THE SUPPORT RING
    VDSPTR : RADIUS THICKNESS OF THE SUPPORT RINGS
    VDSPER(2) : DISTANCES OF THE EXTERNAL RINGS IN Z FROM THE INTERNAL
    VDONES
    VDSPCB : ALLUMINIUM EQUIVALENT THICKNESS OF THE CABLE
    VDSPCA : CARBON FIBER TUBE FIRST ANGLE
    VDSPCR : CARBON FIBER INTERNAL RADIUS
    VDSPCT : CARBON FIBER TUBE THICKNESS
    VDSPSA : ANGLE COVERED BY A SECTOR
    VDSPGA : ANGLE COVERED BY A GAP
    VDSPSP : ANGULAR POSITION OF THE FIRST SECTOR
    NVDSPS : NUMBER OF SECTORS
    VDHYL1 : Z SIDE CERAMIC WIDTH
    VDHYL2 : Z SIDE CERAMIC POSITION
    VDHYL3 : PHI SIDE WIDTH
    VDHYL4 : CONNECTION LENGTH
    VDHYL5 : CONNECTION WIDTH
    VDHYCE : CERAMIC THICKNESS
    VDHYCW : CHIP WIDTH
    VDHYCL : CHIP LENGTH
    VDHYCT : CHIP THICKNESS
    VDHYST(2) : SEPARATOR THICKNESSES
    VDALIR : ALLUMINA INNER RADIUS
    VDALOR : ALLUMINA OUTER RADIUS
    VDALLA : ALLUMINA LENGTH
    VDALTC : CARBON SHEET THICKNESS
    VDALTA : ALLUMINIUM SHEET THICKNESS
    VDSPAT : EQUIVALENT THICKNESS OF THE ALUMINA
#endif
