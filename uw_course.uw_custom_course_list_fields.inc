<?php

/**
 * 
 * @return type
 * 
 */
function _uw_custom_course_list_installed_fields() {
    $t = get_t();
    return array(
        'uw_course_custom' => array(
            'field_name'   => 'uw_course_custom',
            'label'        => $t('Custom Course List'),
            'cardinality'  => 1,
            'type'         => 'text',
            'settings'     => array(
                'max_length'  => 1000,
              ),
        ),
    );
}
/**
 * 
 * @return type
 */
function _uw_custom_course_list_installed_instances() {
    $t = get_t();
    return array(
        'uw_course_custom' => array(
            'field_name'  => 'uw_course_custom',
            'label'       => $t('Custom Course List'),
            'description' => $t('<p>Add one course per line. For example: GERMAN|220 or CSE|120.<br>Make sure the curriculum and the course number are divided by a pipe character "|".<br>You may omit the course number (and pipe character) and retrieve the complete course listing of the curriculum.</p><p>The curriculum abbreviation attribute identifies the department through which the course is offered; for example, "ENGL" is English and "CSE" is Computer Science and Engineering. Sometimes curriculum abbreviation is referred to as department code.<br>To be valid, a curriculum abbreviation must be between 2 and 6 alphabetic characters.<br>Only two special characters are permitted, the ampersand ("&") and a space; for example, "N&MES" is Near and Middle Eastern Studies, "B STR" is Biological Structure.<br>A complete overview of available course descriptions (and their abbreviation) can be found at ' . l('University of Washington Course Descriptions', 'http://www.washington.edu/students/crscat/', array('attributes'=>array('target'=>'_blank',))) . '</p>'),
            'cardinality' => 1,
            'widget'      => array(
              'type'       => 'text_textarea',
              'settings'   => array('rows' => 10),
            ),
        ),
    );
}