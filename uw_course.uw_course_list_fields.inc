<?php

/**
 * 
 * @return type
 * 
 */
function _uw_course_list_installed_fields() {
    $t = get_t();
    return array(
        'uw_course_curriculum_abbr' => array(
            'field_name' => 'uw_course_curriculum_abbr',
            'label' => $t('Curriculum Abbreviation'),
            'type' => 'text',
            'cardinality' => 1,
            'settings' => array(
                'max_length' => '6',
                'size' => '10',
                )
        ),
        'uw_course_quarter' => array(
            'field_name' => 'uw_course_quarter',
            'label' => $t('Quarter'),
            'type' => 'list_text',
            'cardinality' => 1,
            'settings' => array(
                'allowed_values' => array(
                    'autumn'=>'autumn',
                    'winter'=>'winter',
                    'spring'=>'spring',
                    'summer'=>'summer',
                    ),
                'allowed_values_function' => '',
              ),
        ),
        'uw_course_year' => array(
            'field_name' => 'uw_course_year',
            'label' => $t('Year'),
            'type' => 'text',
            'cardinality' => 1,
            'settings' => array(
                'max_length' => '4',
                'size' => '10',
                ),
        ),
    );
}

/**
 * 
 * @return type
 */
function _uw_course_list_installed_instances() {
    $t = get_t();
    return array(
        'uw_course_curriculum_abbr' => array(
            'field_name' => 'uw_course_curriculum_abbr',
            'type' => 'text',
            'label' => $t('Curriculum Abbreviation'),
            'description' => $t('The curriculum abbreviation attribute identifies the department through which the course is offered; for example, "ENGL" is English and "CSE" is Computer Science and Engineering. Sometimes curriculum abbreviation is referred to as department code.<br>To be valid, a curriculum abbreviation must be between 2 and 6 alphabetic characters.<br>Only two special characters are permitted, the ampersand ("&") and a space; for example, "N&MES" is Near and Middle Eastern Studies, "B STR" is Biological Structure.<br>A complete overview of available course descriptions (and their abbreviation) can be found at ' . l('University of Washington Course Descriptions', 'http://www.washington.edu/students/crscat/', array('attributes'=>array('target'=>'_blank',)))),
            'required' => 1,
            'widget' => array(
                'type' => 'text_textfield',
                'settings' => array(
                    'max_length' => '6',
                    'size' => '10',
                    )
            ),
            'display' => array(
                'default' => array(
                    'label' => 'inline',
                    'settings' => array(
                        'type' => 'text_default',
                    ),
                ),
                'teaser' => array(),
            ),
        ),
        'uw_course_quarter' => array(
            'field_name' => 'uw_course_quarter',
            'type' => 'list_text',
            'label' => $t('Quarter'),
            'description' => $t('Quarter is a character field with one of the following values: winter, spring, summer, or autumn. If you are using the form, only those choices will be available in the selection box.'),
            'required' => 1,
            'widget' => array(
                'type' => 'options_select',
                'settings' => array(
                    'allowed_values' => array(
                        'autumn'=>'autumn',
                        'winter'=>'winter',
                        'spring'=>'spring',
                        'summer'=>'summer',
                        ),
                    'allowed_values_function' => '',
                  ),
            ),
            'display' => array(
                'default' => array(
                    'label' => 'inline',
                    'settings' => array(
                        'type' => 'list_text',
                    ),
                )
            )
        ),
        'uw_course_year' => array(
            'field_name' => 'uw_course_year',
            'type' => 'text',
            'label' => $t('Year'),
            'description' => $t('Year is a 4-digit number between 1900 and 9999.'),
            'required' => 1,
            'widget' => array(
                'type' => 'text_textfield',
                'settings' => array(
                    'max_length' => '4',
                    'size' => '10',
                    ),
            ),
            'display' => array(
                'default' => array(
                    'label' => 'inline',
                    'settings' => array(
                        'type' => 'text_default',
                    ),
                )
            )
        ),
        
    );
}