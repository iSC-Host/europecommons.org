<?php
/**
 * @file
 * appcat_organization_views.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function appcat_organization_views_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'organization_map';
  $openlayers_maps->title = 'Organization map';
  $openlayers_maps->description = 'A map showing the location of a single organizaetion';
  $openlayers_maps->data = array(
    'width' => '280px',
    'height' => '280px',
    'image_path' => 'profiles/opencivic/openlayers_theme/img/',
    'css_path' => 'profiles/opencivic/openlayers_theme/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '7.023925,48.719961',
        'zoom' => '5',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'organization_map_openlayers_org' => 'organization_map_openlayers_org',
          'mapquest_osm' => 0,
        ),
        'point_zoom_level' => '5',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'organization_map_openlayers_org' => 'organization_map_openlayers_org',
    ),
    'layer_weight' => array(
      'deployments_map_openlayers_1' => '0',
      'organizations_map_openlayers_orgs' => '0',
      'organization_map_openlayers_org' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'home_page_map_homepage' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'home_page_map_homepage' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'deployments_map_openlayers_1' => 'deployment_marker',
      'organizations_map_openlayers_orgs' => '0',
      'organization_map_openlayers_org' => 'organization_marker',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'home_page_map_homepage' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'deployments_map_openlayers_1' => 'deployment_marker',
      'organizations_map_openlayers_orgs' => '0',
      'organization_map_openlayers_org' => 'organization_marker',
    ),
    'layer_activated' => array(
      'organization_map_openlayers_org' => 'organization_map_openlayers_org',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'home_page_map_homepage' => 0,
      'deployments_list_openlayers_deployments' => 0,
      'deployments_map_openlayers_1' => 0,
      'organizations_map_openlayers_orgs' => 0,
    ),
    'layer_switcher' => array(
      'organization_map_openlayers_org' => 'organization_map_openlayers_org',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'home_page_map_homepage' => 0,
      'deployments_list_openlayers_deployments' => 0,
      'deployments_map_openlayers_1' => 0,
      'organizations_map_openlayers_orgs' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['organization_map'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'organizations';
  $openlayers_maps->title = 'organizations';
  $openlayers_maps->description = 'The map for the Organizations listing page';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '550px',
    'image_path' => 'profiles/opencivic/openlayers_theme/img/',
    'css_path' => 'profiles/opencivic/openlayers_theme/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '7.023925,53.719961',
        'zoom' => '4',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'organizations_map_openlayers_orgs' => 0,
        ),
        'distance' => '20',
        'threshold' => '',
        'display_cluster_numbers' => 1,
        'middle_lower_bound' => '15',
        'middle_upper_bound' => '50',
        'low_color' => 'rgb(141, 203, 61)',
        'middle_color' => 'rgb(49, 190, 145)',
        'high_color' => 'rgb(35, 59, 177)',
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'organizations_map_openlayers_orgs' => 'organizations_map_openlayers_orgs',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'organizations_map_openlayers_orgs' => 'organizations_map_openlayers_orgs',
    ),
    'layer_weight' => array(
      'app_deployments_map_openlayers_1' => '0',
      'deployments_map_openlayers_1' => '0',
      'organization_map_openlayers_org' => '0',
      'geofield_formatter' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'home_page_map_homepage' => '0',
      'organizations_map_openlayers_orgs' => '1',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'home_page_map_homepage' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'app_deployments_map_openlayers_1' => '0',
      'deployments_map_openlayers_1' => 'deployment_marker',
      'organization_map_openlayers_org' => '0',
      'organizations_map_openlayers_orgs' => 'organization_marker',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'home_page_map_homepage' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'app_deployments_map_openlayers_1' => '0',
      'deployments_map_openlayers_1' => 'deployment_marker',
      'organization_map_openlayers_org' => '0',
      'organizations_map_openlayers_orgs' => 'organization_marker',
    ),
    'layer_activated' => array(
      'organizations_map_openlayers_orgs' => 'organizations_map_openlayers_orgs',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'home_page_map_homepage' => 0,
      'deployments_list_openlayers_deployments' => 0,
      'app_deployments_map_openlayers_1' => 0,
      'deployments_map_openlayers_1' => 0,
      'organization_map_openlayers_org' => 0,
    ),
    'layer_switcher' => array(
      'organizations_map_openlayers_orgs' => 'organizations_map_openlayers_orgs',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'home_page_map_homepage' => 0,
      'deployments_list_openlayers_deployments' => 0,
      'app_deployments_map_openlayers_1' => 0,
      'deployments_map_openlayers_1' => 0,
      'organization_map_openlayers_org' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['organizations'] = $openlayers_maps;

  return $export;
}
