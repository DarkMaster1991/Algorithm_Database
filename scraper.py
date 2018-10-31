from scrapy import spider

class ItunesSpider(spider):

	name= "Itunes"

	start_urls=["https://www.apple.com/in/itunes/charts/songs/"]

	def parse(self,response):

		title= response.css("h3 a::text").extract()

		artist= response.css("h4 a::text").extract()

		for t, a in zip(title, artists):

			yield{
				'title':t,
				'artists':a
			}	