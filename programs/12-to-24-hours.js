// Convert 12 Hours Time Format to 24 Hours Time Format
let demoTime = "07:00:00PM"
timeConversion(demoTime)
function timeConversion(s) {
try{
    let takeString = ''
    takeString = s
    console.log("Initial Value: ",takeString)
    let ifAM = 0
    ifAM = takeString.search(/AM/)
    if(ifAM > 0){
        console.log("The input is AM")
        let newTime = takeString.replace('AM', '')
        let hours = parseInt(newTime.substring(0, 2))
        let minute = parseInt(newTime.substring(3, 5))
        let second = parseInt(newTime.substring(6, 9))
        console.log("hours: ", hours )
        let realMinute = minute.toString()
        if(realMinute.length == 1){
            let tempMinute = realMinute
            realMinute = "0" + tempMinute
        }
        let realSecond = second.toString()
        if(realSecond.length == 1){
            let tempSecond = realSecond
            realSecond = "0" + tempSecond
        }
        console.log("minute: ", realMinute)
        console.log("second: ", realSecond)
        let init12 = hours
        if (init12 >= 12){
            init12 = init12  - 12
        }
        let realHours = init12.toString()
        if(realHours.length == 1){
            let tempHours = realHours
            realHours = "0" + tempHours
        }
        let initString = init12.toString()
        let finalVar  = realHours + ':' + realMinute + ':' + realSecond
        console.log(finalVar)
        return finalVar
    }
    else{
        console.log("The input is PM")
        let newTime = takeString.replace('PM', '')
        let hours = parseInt(newTime.substring(0, 2))
        let minute = parseInt(newTime.substring(3, 5))
        let second = parseInt(newTime.substring(6, 9))
        let realMinute = minute.toString()
        if(realMinute.length == 1){
            let tempMinute = realMinute
            realMinute = "0" + tempMinute
        }
        let realSecond = second.toString()
        if(realSecond.length == 1){
            let tempSecond = realSecond
            realSecond = "0" + tempSecond
        }
        console.log("minute: ", realMinute)
        console.log("second: ", realSecond)
        let init12 = hours + 12
        if(init12 >= 24){
            init12 = init12 - 12
        }
        let initString = init12.toString()
        let finalVar  = initString + ':' + realMinute + ':' + realSecond
        console.log("24 Hours Format: ",finalVar)
        return finalVar
        
    }
    
}catch(e){console.log(e)}

}
