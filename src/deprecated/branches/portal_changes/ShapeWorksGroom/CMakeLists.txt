ADD_EXECUTABLE(ShapeWorksGroom ShapeWorksGroom.cxx)
TARGET_LINK_LIBRARIES(ShapeWorksGroom ITKIO ITKNumerics ITKBasicFilters ITKCommon tinyxml)
#TARGET_LINK_LIBRARIES(ShapeWorksGroom ITKIO ITKNumerics ITKBasicFilters ITKCommon params tinyxml vtkRendering vtkIO vtkHybrid)
INSTALL(TARGETS ShapeWorksGroom  RUNTIME DESTINATION .)
